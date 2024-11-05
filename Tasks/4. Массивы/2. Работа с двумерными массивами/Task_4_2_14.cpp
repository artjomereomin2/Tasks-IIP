#include <iostream>

using namespace std;

int main14()
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
		// ���� �������� ������� � � ����� �� �����
		// cout << "������� ��-�� ������� (����� ������, ������ ������� �� ��������� �������)\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				// cin >> m[i][j];
				m[i][j] = rand() % 10;
			}
		}
		cout << "�������:\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
		// ��������� �������:
		// 1) ����� � �������������� ������� ������������� ��������� ��-��
		int ma = INT_MIN, i_ma = -1, j_ma = -1;
		bool is_nechot = false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((i <= j or j == 0 or i == n - 1) and m[i][j] > ma and m[i][j] % 2) {
					is_nechot = true;
					i_ma = i;
					j_ma = j;
					ma = m[i][j];
				}
			}
		}
		// 2) ����� � ���������������� ������� ������������ ������� ��-��
		int mi = INT_MAX, i_mi = -1, j_mi = -1;
		bool is_chot = false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (!(i <= j or j == 0 or i == n - 1) and m[i][j] < mi and m[i][j] % 2 == 0) {
					is_chot = true;
					i_mi = i;
					j_mi = j;
					mi = m[i][j];
				}
			}
		}
		// 3) ������������ ������� ��-�� � �������� �� �������������
		if (not is_chot) {
			cout << "��� ������� ��������";
		}
		else if (not is_chot) {
			cout << "��� ��������� ��������";
		}
		else {
			int d;
			d = m[i_mi][j_mi];
			m[i_mi][j_mi] = m[i_ma][j_ma];
			m[i_ma][j_ma] = d;
		}
		// ����� ��������� ������� � ��������
		if (is_chot and is_nechot) {
			cout << "�������� �������:\n";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << m[i][j] << " ";
				}
				cout << endl;
			}
		}
		else cout << endl;
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