#include <iostream>

using namespace std;

int main()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		int n;
		cout << "������� n: ";
		cin >> n;
		double y1 = 0.9, y2 = 1.1, yn; // ��������� ������, ������ � n-�� ����
		if (n > 0) {
			cout << "1: " << y1 << endl; // ������� ������ ����
		}
		if (n > 1) {
			cout << "2: " << y2 << endl; // ������� ������ ����
		}
		if (n > 2) {
			for (int i = 3; i <= n; i++) {
				yn = y2 / i + y1 / (i * i); // ��������� i-�� ����
				cout << i << ": " << yn << endl; // ������� i-�� ����
				y1 = y2; // ��������� ���������� ��������
				y2 = yn;
			}
		}
		cout << endl << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}