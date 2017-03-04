//Write a function that computes the list of the first 100 Fibonacci numbers. By definition,
//the first two numbers in the Fibonacci sequence are 0 and 1, and each subsequent number is the sum of the previous two.
//As an example, here are the first 10 Fibonnaci numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, and 34.

#include <iostream>

int main(){

	//The first and the last fibonacci numbers
	int firstNum = 0;
	int secondNum = 1;
	int next = 0;

	next = firstNum + secondNum;

	while(secondNum < 100){

		//FIBONACCI

		std::cout << next << ",";
		firstNum = secondNum;
		secondNum = next;

		next = firstNum + secondNum;

		//returns 1,2,3,5,8,13,21,34,55,89,144
	}

	return 0;
}