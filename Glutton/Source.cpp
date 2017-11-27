#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int pancakes[10];
	int highest = 0, lowest = 0;
	int highestP, lowestP;

	for (int i = 0; i < 10; i++) {
		cout << "Person " << i+1 << " :";
		cin >> pancakes[i];
	}

	for (int j = 0; j < 10; j++) {
		if (pancakes[j] > highest) {
			highest = pancakes[j];
			highestP = j + 1;
		}
		if (pancakes[j] < lowest) {
			lowest = pancakes[j];
			lowestP = j + 1;
		}
	}

	cout << "Person " << highestP << " ate the most pancakes: " << highest << endl;
	cout << "Person " << lowestP << " ate the least pancakes: " << lowest << endl;


	return 0;
}