#include <iostream>

using namespace std;

int main()
{
	int d;
	do {
		setlocale(LC_ALL, "Rus");
		// ������������� ��c����
		int n;
		cout << "������� n: ";
		cin >> n;
		int* m = new int[2*n];
		// ���� ��-�� ������� � �
		cout << "������� �������� �������:" << endl;
		for (int i = 0; i < (n); i++) {
			cin >> m[i];
		}
		int x;
		cout << "������� �: ";
		cin >> x;
		// ��������� ������� (��� ���������� ������������ ��-�� ��������
		// ��� ��-�� ����� ���� �� 1 ����� � ���������� � �������� ���� �����
		int c = 0;
		for (int i = 0; i < n + c; i++) {
			if (m[i] == x) {
				for (int j = n + c - 1; j >= i; j--) {
					m[j + 1] = m[j];
				}
				c++;
				i++;
			}
		}
		// ����� ���������� �������
		cout << "������ c ������������ �:\n";
		for (int i = 0; i < n + c - 1; i++) {
			cout << m[i] << ", ";
		}
		cout << m[n + c - 1] << endl;
		// �������� �������
		delete[]m;

		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> d;
	} while (d);
	return 0;
}