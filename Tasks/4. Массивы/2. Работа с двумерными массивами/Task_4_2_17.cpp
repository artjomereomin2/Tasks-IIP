#include <iostream>

using namespace std;

int main()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		// ������������� �������
		int n;
		cout << "������� ����������� �������: ";
		cin >> n;
		int** m = new int* [n];
		for (int i = 0; i < n; i++) {
			m[i] = new int[n];
		}
		// ���������� �������
		int c = n * n + ( - 1 + n) * (n % 2 == 1);
		for (int j = 0; j < n; j++) {
			c -= n;
			if (j % 2 == (n % 2 + 1) % 2) {
				for (int i = 0; i < n; i++, c--) {
					m[i][j] = c;
				}
				c++;
			}
			else {
				for (int i = 0; i < n; i++,c++) {
					m[i][j] = c;
				}
				c--;
			}
		}
		// ����� �������
		cout << "�������� �������:\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
		// �������� �������
		for (int i = 0; i < n; i++) {
			delete[]m[i];
		}
		delete[]m;
		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}