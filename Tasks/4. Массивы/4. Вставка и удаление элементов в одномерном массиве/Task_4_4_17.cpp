#include <iostream>

using namespace std;

int main17()
{
	int d;
	do {
		setlocale(LC_ALL, "Rus");
		// ������������� ��c����
		int n;
		cout << "������� n: ";
		cin >> n;
		int* m = new int[2 * n];
		// ���� ��-�� �������, � � Y
		cout << "������� �������� �������:" << endl;
		for (int i = 0; i < (n); i++) {
			cin >> m[i];
		}
		int x;
		cout << "������� �: ";
		cin >> x;
		int y;
		cout << "������� Y: ";
		cin >> y;
		// ��������� ������� (��� ���������� ������������ ��-�� ��������
		// ��� ��-�� ����� ���� �� 1 ����� � ���������� � �������� ���� �����
		int c = 0;
		for (int i = 0; i < n + c; i++) {
			if (abs(m[i]) % 10 == x) {
				for (int j = n + c - 1; j >= i; j--) {
					m[j + 1] = m[j];
				}
				m[i] = y;
				c++;
				i++;
			}
		}
		// ����� ���������� �������
		cout << "������ c Y ����� X:\n";
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