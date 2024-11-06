#include <iostream>

using namespace std;

int main11()
{
	int d;
	do {
		setlocale(LC_ALL, "Rus");
		// ������������� ������� � ������
		int n;
		cout << "������� ����������� �������: ";
		cin >> n;
		int** m = new int* [n];
		for (int i = 0; i < n; i++) {
			m[i] = new int[n];
		}
		// ���� �������� �������
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
		// 1) ����� �������� ��������
		int mi = INT_MAX;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (m[i][j] < mi) {
					mi = m[i][j];
				}
			}
		}
		// 2) ����� �������� � �������, ���� ������� ���� 1 ��� ������ �� ������
		// �������� �� 1 � ���������� ��� � ��������
		int c = 0;
		bool is_min = false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (m[i][j] == mi) {
					is_min = true;
					break;
				}
			}
			if (is_min) {
				for (int j = i - 1; j >= 0; j--) {
					m[j + 1] = m[j];
				}
				c++;
				is_min = false;
			}
		}
		// ����� ��������� �������
		cout << "�������� �������:\n";
		for (int i = c; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
		// �������� �������
		for (int i = c; i < n; i++) {
			delete[]m[i];
		}
		delete[]m[0];
		delete[]m;
		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> d;
	} while (d);
	return 0;
}