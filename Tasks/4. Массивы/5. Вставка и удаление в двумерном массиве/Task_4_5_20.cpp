#include <iostream>

using namespace std;

int main()
{
	int d;
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
		// ���� �������� ������� � �
		cout << "������� ��-�� ������� (����� ������, ������ ������� �� ��������� �������)\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				// cin >> m[i][j];
				m[i][j] = rand() % 90 + 10;
			}
		}
		cout << "�������:\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
		int x;
		cout << "������� �: ";
		cin >> x;
		// ��������� �������:
		// ����� �����, �������������� �� � � ��������, ���� �� ������� �� 1, ��� ������� �� �������
		// �������� �� 1 � ���������� ��� � ��������
		int c = 0;
		bool is_x = false;
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				if (m[i][j] % 10 == x) {
					is_x = true;
					break;
				}
			}
			if (is_x) {
				for (int i = 0; i < n; i++) {
					for (int j1 = j - 1; j1 >= 0; j1--) {
						m[i][j1 + 1] = m[i][j1];
					}
				}
				c++;
				is_x = false;
			}
		}
		// ����� ��������� �������
		cout << "�������� �������:\n";
		for (int i = 0; i < n; i++) {
			for (int j = c; j < n; j++) {
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
		// �������� ������� � ������
		for (int i = 0; i < n; i++) {
			delete[]m[i];
		}
		delete[]m;
		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> d;
	} while (d);
	return 0;
}