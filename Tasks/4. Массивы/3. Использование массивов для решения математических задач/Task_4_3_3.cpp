#include <iostream>

using namespace std;

int main()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		// ������������� ��c����
		int n;
		cout << "������� n: ";
		cin >> n;
		int* p = new int[n + 1];
		int* p1 = new int[n];
		int* p_p_p1 = new int[n + 1];
		// ���� �������������
		cout << "������� ������������ ����������:" << endl;
		for (int i = 0; i < (n + 1); i++) {
			cin >> p[i];
		}
		// ���������� 2-�� ������� (�� ����� i-�� ������������ ������������ i-� ����������� ����������� �� ����������, 0-� ����������� ���������
		for (int i = 1; i < (n + 1); i++) {
			p1[i - 1] = p[i] * i;
		}
		// ���������� 3-�� �������
		for (int i = 0; i < n; i++) {
			p_p_p1[i] = p[i] + p1[i];
		}
		p_p_p1[n] = p[n];
		// ����� ���������� �������
		cout << "������������:\n";
		for (int i = 0; i < n; i++) {
			cout << p_p_p1[i] << ", ";
		}
		cout << p_p_p1[n] << endl;
		// �������� �������
		delete[]p;
		delete[]p1;
		delete[]p_p_p1;

		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}