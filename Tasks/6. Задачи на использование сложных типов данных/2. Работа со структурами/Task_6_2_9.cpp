#include <iostream>

using namespace std;

int main9_1()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");

		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}