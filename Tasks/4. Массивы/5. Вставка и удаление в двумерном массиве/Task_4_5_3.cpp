#include <iostream>

using namespace std;

int main3()
{
	int d;
	do {
		setlocale(LC_ALL, "Rus");
		// ������������� ������� � ������
		int n;
		cout << "������� ����������� �������: ";
		cin >> n;
		int** m = new int* [2 * n];
		for (int i = 0; i < 2 * n; i++) {
			m[i] = new int[n];
		}
		int* x = new int[n];
		int* del = new int[2 * n];
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
		// ���� ������ � Y
		cout << "������� ��-�� ������ (����� ������)\n";
		for (int i = 0; i < n; i++) {
			cin >> x[i];
		}
		int y;
		cout << "������� Y: ";
		cin >> y;
		// ��������� �������:
		// ����� Y � �������, ���� ������� ���� 1 ��� ������ ����� ������
		// �������� �� 1 � ���������� ��� � ��������, ��������� ������ �������� �� �
		int c = 0, a = 0;
		bool is_y = false;
		for (int i = 0; i < n + c; i++) {
			for (int j = 0; j < n; j++) {
				if (m[i][j] == y) {
					is_y = true;
					break;
				}
			}
			if (is_y) {
				for (int j = n + c - 1; j >= i; j--) {
					m[j + 1] = m[j];
				}
				m[i + 1] = x;
				del[a] = i + 1;
				a++;
				i += 1;
				c++;
				is_y = false;
			}
		}
		// ����� ��������� �������
		cout << "�������� �������:\n";
		for (int i = 0; i < n + c; i++) {
			for (int j = 0; j < n; j++) {
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
		// �������� ������� � ������
		a = 0;
		for (int i = 0; i < 2 * n; i++) {
			if (i == del[a]) { a++; }
			else { delete[]m[i]; }
		}
		delete[]m;
		delete[]x;
		delete[]del;
		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> d;
	} while (d);
	return 0;
}