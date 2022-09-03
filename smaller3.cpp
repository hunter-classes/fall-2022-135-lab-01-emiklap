#include <iostream>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	std::cout << "Enter the first small number: ";
	std::cin >> num1;
	std::cout << "Enter the second small number: ";
	std::cin >> num2;
	std::cout << "Enter the third small number: ";
	std::cin >> num3;

	if (num1 < num2 && num1 < num3)
	{
		std::cout << "The smallest number is " << num1 << std::endl;
	}
	else if (num2 < num3 && num2 < num1)
	{
		std::cout << "The smallest number is " << num2 << std::endl;
	}
	else if (num3 < num1 && num3 < num2)
	{
		std::cout << "The smallest number is " << num3 << std::endl;
	}
	else 
	{
		std::cout << "They are all the same number." << std::endl;
	}
}
