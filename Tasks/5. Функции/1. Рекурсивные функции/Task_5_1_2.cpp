#include <iostream>

using namespace std;

// ����������� �������
int factorial_2(int n) {
	if (n <= 2) { // ������� ������
		return n;
	}
	return n * factorial_2(n - 2); // ����������� ��������� 
}

int main2()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		// ���������� n, ��� ���� � ����� ����������
		int n;
		cout << "������� n: ";
		cin >> n;
		int f = 1;
		cout << "n!! = " << factorial_2(n);
		for (int i = n; i > 0; i -= 2) f *= i;
		cout << "\n������������� n!! = " << f;
		cout << "\n������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}