#include <iostream>

//returns true if it is a common year, false if it is a leap year
bool commonYear(int year)
{
        bool ret;
        if (year % 4 != 0)
        {
                ret = true;
        }
        else if (year % 100 != 0)
        {
                ret =  false;
        }
        else if (year % 400 != 0)
        {
                ret = true;
        }
        else
        {
                ret = true;
        }
        return ret;
}


int main()
{
	int year = 0;
	int month = 0;

	std::cout << "Enter year: ";
	std::cin >> year;
	std::cout << "Enter month: ";
	std::cin >> month;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		std::cout << "31 days" << std::endl;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		std::cout << "30 days" << std::endl;
	}
	else if (month == 2)
	{
		if (commonYear(year)) 
		{
			std::cout << "28 days" << std::endl;
		}
		else
		{
			std::cout << "29 days" << std::endl;
		}
	}
	else
	{
		std::cout << "That is not a real month." << std::endl;
	}
}
