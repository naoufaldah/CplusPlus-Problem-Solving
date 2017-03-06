//chcking if a string is a palindrome

#include <iostream>
#include <string>
#include <algorithm>

int main(){


	std::string word;

	//get the word

	getline(std::cin, word);

	//convert the work into lowercase
	transform(word.begin(), word.end(), word.begin(), ::tolower);

	//removing the space and some special characters
	word.erase(remove(word.begin(), word.end(), ' '), word.end());
	word.erase(remove(word.begin(), word.end(), '?'), word.end());
	word.erase(remove(word.begin(), word.end(), ','), word.end());
	word.erase(remove(word.begin(), word.end(), '.'), word.end());
	std::cout << word << std::endl;


	//reverse the string and save it in a new variable
	std::string reversed = std::string(word.rbegin(), word.rend());


	//convert the reversed to lowercase 
	transform(reversed.begin(), reversed.end(), reversed.begin(), ::tolower);

	
	//removing the space and some special characters from reversed
	reversed.erase(remove(reversed.begin(), reversed.end(), ' '), reversed.end());
	reversed.erase(remove(reversed.begin(), reversed.end(), '?'), reversed.end());
	reversed.erase(remove(reversed.begin(), reversed.end(), ','), reversed.end());
	reversed.erase(remove(reversed.begin(), reversed.end(), '.'), reversed.end());

	

	//check if its a palindrome or not

	if(word == reversed){

		//yes, it's a palyndrome
		std::cout << " Yes, it's a palyndrome " << std::endl;
	
	}else {

		//no, it's not a palyndrome
		std::cout << "NO, it's not a palyndrome ! " << std::endl;
	}

	return 0;

}