#include <iostream>

using namespace std;

int main2()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		// ������������� ��c����
		int n;
		cout << "������� n: ";
		cin >> n;
		int* p = new int[n + 1];
		// ���� �������������
		cout << "������� ������������ ����������:" << endl;
		for (int i = 0; i < (n + 1); i++) {
			cin >> p[i];
		}
		// ��������� ������� (�� ����� i-�� ������������ ������������ i-� ����������� ����������� �� ����������, 0-� ����������� ���������
		for (int i = 1; i < (n + 1); i++) {
			p[i - 1] = p[i] * i;
		}
		// ����� ����������� �������
		cout << "������������ �����������:\n";
		for (int i = 0; i < n - 1; i++) {
			cout << p[i] << ", ";
		}
		cout << p[n - 1] << endl;
		// �������� �������
		delete[]p;

		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}