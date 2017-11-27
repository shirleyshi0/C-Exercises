// BracketingSearch2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <cstdlib>

int main()
{
	int userNum = 50, highest = 100, lowest = 1, mid, counter = 0, endprog;
	char mode = 'A';

	std::cout << "Think of a number between 1 to 100:" << std::endl;
	std::cout << "Is this your number? L:Lower H:Higher C:Correct" << std::endl;

	while (mode != 'C') 
	{
		std::cout << userNum << std::endl;
		std::cin >> mode;

		switch(mode)
		{
			case 'L': //lower
				highest = userNum;
				break;
			case 'H': //higher
				lowest = userNum;
				break;
		}

		mid = (highest - lowest) / 2;
		mid += lowest;
		userNum = mid;

		counter++;
	}

	std::cout << "Your number is " << userNum << ". Number of guesses: " << counter << std::endl;
	std::cin >> endprog;

	return 0;
}

