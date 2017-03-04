//Get multiple nums from the user and sum them to each other

#include <iostream>
#include <vector>

int main(){

	int sum = 0;
	int  num;

	while(true){

		//get the input from the user
		std::cin >> num;
		if(num != 0){

			sum = sum + num;
			std::cout << sum << std::endl;
		}else
			break;

	}


	

	return 0;
}