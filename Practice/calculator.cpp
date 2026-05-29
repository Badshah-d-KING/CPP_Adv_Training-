#include<iostream>

using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(float a, float b);

int main(){

	while (1){

		int operation, num1, num2;
		std::cout << "Choose the operation on the calculator : " << std::endl;	
		std::cout << "1. Addition" << std::endl;
		std::cout << "2. Subtraction" << std::endl;
		std::cout << "3. Multiply" << std::endl;
		std::cout << "4. Divide" << std::endl << "\n";
	
		std::cin >> operation;
	
		std::cout << std::endl << "Enter the number 1 : ";
		std::cin >> num1;
		std::cout << std::endl << "Enter the number 2 : ";
		std::cin >> num2;
		std::cout << std::endl;
	
		switch (operation) {
	
			case 1:
				cout << "Addition of " << num1 << " and " << num2 << " is : ";
				cout << add(num1, num2) << std::endl << "\n";
				break;	
	
			case 2: 
				cout << "Subtraction of " << num1 << " and " << num2 << " is : ";
				cout << sub(num1, num2) << std::endl << "\n";
				break;	

			case 3: 
				cout << "Multiplication of " << num1 << " and " << num2 << " is : ";
				cout << mul(num1, num2) << std::endl << "\n";
				break;	

			case 4: 
				cout << "Division of " << num1 << " and " << num2 << " is : ";
				cout << div((float) num1, (float) num2) << std::endl << "\n";
				break;
			default: cout << "Invalid input, Please try again!" << std::endl << "\n";
		}
	}
}


int add (int a, int b){

	return (a+b);
}
int sub (int a, int b){

	return (a-b);
}
int mul (int a, int b){

	return (a*b);
}
float div (float a, float b){

	return (a/b);
}
