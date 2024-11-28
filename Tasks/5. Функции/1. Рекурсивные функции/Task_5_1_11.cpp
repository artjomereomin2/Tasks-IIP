#include <iostream>
#include <cmath>

using namespace std;

// ����������� �������
double sqrt_rec(int n, int i) {
	if (i == n) { // ������� ������
		return sqrt(1 + n);
	}
	return sqrt(1 + i * sqrt_rec(n, i + 1)); // ����������� ��������� 
}

int main11()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		// ���������� n, ��� ���� � ����� ����������
		int n;
		cout << "������� n: ";
		cin >> n;
		cout << "������ ������ = " << sqrt_rec(n, 2);
		cout << "\n������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}