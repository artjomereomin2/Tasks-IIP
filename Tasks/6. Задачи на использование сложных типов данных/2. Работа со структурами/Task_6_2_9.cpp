#include <iostream>

using namespace std;

int main9_1()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");

		cout << "¬ведите любое число дл€ продолжени€ (кроме нул€): ";
		cin >> x;
	} while (x);
	return 0;
}