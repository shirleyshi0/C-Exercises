#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int num;
	int count = -1;

	do
	{
		count++;
		cout << "Please enter a number other than " << count << endl;
		cin >> num;
		
		if (cin.fail())
		{
			cout << "Error. Enter a numeric value." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

	} while (num != count);

	cout << "Hey! You weren't supposed to enter " << count << "!" << endl;

	return 0;
}