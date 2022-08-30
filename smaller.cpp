#include <iostream>

int main()
{
	int num1 = 0;
	int num2 = 0;

	std::cout << "Enter the first small number: ";
	std::cin >> num1;
	std::cout << "Enter the second small number: ";
	std::cin >> num2;

	if (num1 < num2)
	{
		std::cout << "The smaller number is " << num1 << std::endl;
	}
	else if (num2 < num1) 
	{
		std::cout << "The smaller number is " << num2 << std::endl;
	}
	else
	{
		std::cout << "They are the same number" << std::endl;
	}
}
