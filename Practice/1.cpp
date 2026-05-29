#include<iostream>
using namespace std;

int main(){

	char	ch;
	int	num1;
	float	num2;
	double	num3;

	std::cout << "Enter a character ";
	std::cin >> ch;
	std::cout << "Enter an integer ";
	std::cin >> num1;
	std::cout << "Enter a float number ";
	std::cin >> num2;
	std::cout << "Enter a double number ";
	std::cin >> num3;

	std::cout << "The character is " << ch << std::endl;
	std::cout << "The integer is " << num1 << std::endl;
	std::cout << "The float is " << num2 << std::endl;
	std::cout << "The double is " << num3 << std::endl;
}
