#include <iostream>

using namespace std;

int main8_1()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		// ������������� ��c�����
		int n;
		cout << "������� n: ";
		cin >> n;
		int* p = new int[n + 1];
		int* p1 = new int[n];
		int* p_x_p1 = new int[2 * n];
		// ���� �������������
		cout << "������� ������������ ����������:" << endl;
		for (int i = 0; i < (n + 1); i++) {
			cin >> p[i];
		}
		for (int i = 0; i < 2 * n; i++) {
			p_x_p1[i] = 0;
		}
		// ���������� 2-�� ������� (����������� �� ����������)
		for (int i = 1; i < (n + 1); i++) {
			p1[i - 1] = p[i] * i;
		}
		// ���������� 3-�� ������� (������������ 2 �����������)
		for (int i = 0; i < 2 * n; i++) {
			if (i < n) {
				for (int j = 0; j <= i; j++) {
					p_x_p1[i] += p[j] * p1[i - j];
				}
			}
			else {
				for (int j = i - n; j <= i and j < n; j++) {
					p_x_p1[i] += p1[j] * p[i - j];
				}
			}
		}
		// ����� 3-�� �������
		cout << "������������ ������������ ���������� � ��� �����������:\n";
		for (int i = 0; i < 2 * n - 1; i++) {
			cout << p_x_p1[i] << ", ";
		}
		cout << p_x_p1[2 * n - 1] << endl;
		// �������� ��������
		delete[]p;
		delete[]p1;
		delete[]p_x_p1;

		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}