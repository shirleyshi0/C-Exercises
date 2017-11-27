// BracketingSearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand((unsigned int)time(0));
	int num = 1 + (rand() % 100);
	int est_Num = 0, counter = 0, endprog;

	std::cout << "Guess the number between 1 to 100:" << std::endl;
	std::cout << num << std::endl;

	while (est_Num != num) {
		std::cin >> est_Num;
		counter++;

		if (est_Num > num) {
			std::cout << "Too high. Guess again: " << std::endl;
		}
		else if (est_Num < num) {
			std::cout << "Too low. Guess again: " << std::endl;
		}
	}

	std::cout << "You are correct! The number was " << est_Num << ". Number of guesses: " << counter << std::endl;

	std::cin >> endprog;

    return 0;
}

