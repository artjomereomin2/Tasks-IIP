#include <iostream>

using namespace std;

int main()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		// ������������� ����������� �������
		int n, k;
		cout << "������� n � k (����� ������): ";
		cin >> k >> n;
		int** p = new int*[n + 1];
		for (int i = 0; i < (n + 1); i++) {
			p[i] = new int[i + 1];
		}
		// ���������� ������������ �������
		p[0][0] = p[1][0] = p[1][1] = 1;
		for (int i = 2; i < (n + 1); i++) {
			for (int j = 1; j < i; j++) {
				p[i][j] = p[i - 1][j] + p[i - 1][j - 1];
			}
			p[i][0] = p[i][i] = 1;
		}
		// ����� ���-�� ���������
		cout << "���������� ��������� ����� " << p[n][k] << endl;
		// �������� �������
		for (int i = 0; i < (n + 1); i++) {
			delete[]p[i];
		}
		delete[]p;

		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}