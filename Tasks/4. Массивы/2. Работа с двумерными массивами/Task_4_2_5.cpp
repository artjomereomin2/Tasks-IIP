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
		// ���� �������� �������
		cout << "������� ��-�� ������� (����� ������, ������ ������� �� ��������� �������)\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> m[i][j];
			}
		}
		// ��������� �������:
		// 1) ����� ������ ������ � ������������ ������
		int sm = -1, i_sm = -1;
		for (int i = 0; i < n; i++) {
			int s = 0;
			for (int j = 0; j < n; j++) {
				s += m[i][j];
			}
			if (s > sm) {
				i_sm = i;
				sm = s;
			}
		}
		// 2) ������������ ������� � ������ ����� (����� ����������)
		int* d;
		d = m[0];
		m[0] = m[i_sm];
		m[i_sm] = d;
		// ����� ��������� �������
		cout << "�������� �������:\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n;j++) {
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