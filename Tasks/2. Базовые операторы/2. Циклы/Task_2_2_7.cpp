#include <iostream>

using namespace std;

int main()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		int n, k, c;
		cout << "������� ����� n � x ����� ������:" << endl;
		cin >> n >> x;
		cout << "0.";
		c = 10;
		for (int i = 0; i < x; i++) {
			cout << c / n;
			c = c % n;
			c *= 10;
		}
		cout << endl << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}