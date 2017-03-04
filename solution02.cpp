
//Write a function that combines two lists by alternatingly taking elements. 
//For example: given the two lists [a, b, c] and [1, 2, 3], 
//the function should return [a, 1, b, 2, c, 3].

#include <iostream>

int main(){

	char chars[] = {'a','b','c'};
	int  nums[]  = {1,2,3};

	for(int i = 0; i < 3; i++ ){

		//Nums 

		for(int n = 0; n < 3; n++ ){

			//Altern both elements

			std::cout << chars[i];
			i++;
			std::cout << nums[n];

			//output :  a1b2c3
		}
	}

	return 0;
}