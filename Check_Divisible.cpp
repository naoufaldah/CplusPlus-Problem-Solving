//Input

//The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.

//Output

//Write a single integer to output, denoting how many integers ti are divisible by k.

//Example

//Input:
//7 3
//1
//51
//966369
//7
//9
//999996
//11

//Output:
//4

#include <iostream>


int main(){

	int n;
	int k;
	int sum = 0;
	int input;

	//Getting the int n & k 
	scanf("%i %i",&n,&k);


	while(input != 0){

		//Getting the inputs from the user

		scanf("%i",&input);
		
		//check if it is divisible

		if(input % k == 0){

			//it is divisible, sum 1 to the sum
			sum++;

			

		}else{} //don't do nothing

	}//while loop


	//print the sum of divisible numbers 
	
	printf("%i",sum);
	
	return 0;
}