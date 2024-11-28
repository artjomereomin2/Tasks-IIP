#include <iostream>

using namespace std;

// ����������� �������
int binon_coef(int n, int m) {
	if (n == 0 or n == m) { // ������� ������
		return 1;
	}
	return binon_coef(n - 1, m - 1) + binon_coef(n, m - 1); // ����������� ��������� 
}

// ������������� �������
int factorial(int n) {
	int f = 1;
	for (int i = n; i > 0; i--) {
		f *= i;
	}
	return f;
}

int main9()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		// ���������� n � m, �� ���� � ����� ����������
		int n, m;
		cout << "������� n � m ����� ������: ";
		cin >> n >> m;
		cout << "������������ ����������� ��� n = " << n << " � m = " << m << " = " << binon_coef(n, m) << endl;
		
		// ���������� ������������� ��������
		long double c = factorial(m) * 1.0 / (factorial(n) * factorial(m - n));
		if (m == n) {
			c = 1;
		}
		
		// ����� ���-�� ���������
		cout << "������������� ������������ ����������� ��� n = " << n << " � m = " << m << " = " << c;
		
		cout << "\n������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}