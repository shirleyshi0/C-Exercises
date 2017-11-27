#include <iostream>
#include <cstdio>
using namespace std;

void selected_bev(int x);

int main()
{
	int selected;
	int exit = 1;

	while (exit > 0) {
		cout << "Select a beverage:" << endl;
		cout << "1: Water" << endl;
		cout << "2: Sprite" << endl;
		cout << "3: Coffee" << endl;
		cout << "4: Orange Juice" << endl;
		cout << "5: Tea" << endl;

		cin >> selected;

		if (cin.fail())
		{
			cout << "Error. Enter a number from 1 - 5" << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			selected_bev(selected);
		}

		cout << "0: Exit" << endl;
		cout << "1: Continue" << endl;
		cin >> exit;
	}
	return 0;
}

void selected_bev(int x)
{
	switch (x) 
	{
	case 1:
		cout << "You have selected  Water!" << endl;
		break;
	case 2:
		cout << "You have selected  Sprite!" << endl;
		break;
	case 3:
		cout << "You have selected  Coffee!" << endl;
		break;
	case 4:
		cout << "You have selected  Orange Juice!" << endl;
		break;
	case 5:
		cout << "You have selected  Tea!" << endl;
		break;
	default:
		cout << "Error. Choice was not valid, here is your money back" << endl;
		break;
	}
}