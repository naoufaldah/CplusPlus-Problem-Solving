
//remove given character from a string
//Write a method which will remove any given character from a String

#include <iostream>
#include <algorithm>
#include <string>

int main(){

	//get string from the user

	std::string given_string;
	char char_to_remove;

	//getting the string
	getline(std::cin, given_string);

	//getting the char we want to remove
	std::cin >> char_to_remove;

	//deleting the char from the string

	given_string.erase(remove(given_string.begin(), given_string.end(), char_to_remove), given_string.end());

	//show the string without the specific charcter

	std::cout <<  given_string << std::endl;

	return 0;


}