#include <iostream>
#include <cstdio>
using namespace std;

void grade_score(int x);

int main()
{
	int exit = 1;
	int score;

	while (exit > 0) {

		cout << "Score: ";
		cin >> score;

		grade_score(score);

		cout << "0: Exit" << endl;
		cout << "1: Continue" << endl;
		cin >> exit;

	}
	return 0;
}

void grade_score(int x) 
{

	switch (x/10) 
	{
	case 10:
		cout << "Grade: A" << endl;
		cout << "You have a perfect score of 100!" << endl;
		break;
	case 9:
		cout << "Grade: A" << endl;
		break;
	case 8:
		cout << "Grade: A" << endl;
		break;
	case 7:
		cout << "Grade: A" << endl;
		break;
	case 6:
		cout << "Grade: A" << endl;
		break;
	default:
		cout << "Grade: F" << endl;
		break;
	}

}