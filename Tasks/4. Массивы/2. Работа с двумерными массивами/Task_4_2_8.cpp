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
		// 1) ����� ������ ������ � ������������ ��-��
		int ma = INT_MIN, i_ma = -1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (m[i][j] > ma) {
					i_ma = i;
					ma = m[i][j];
				}
			}
		}
		// 2) ����� ������ ������ � ����������� ��-��
		int mi = INT_MAX, i_mi = -1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (m[i][j] < mi) {
					i_mi = i;
					mi = m[i][j];
				}
			}
		}
		// 3) ������������ ������� ����� (����� ����������)
		int* d;
		d = m[i_mi];
		m[i_mi] = m[i_ma];
		m[i_ma] = d;
		// ����� ��������� �������
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