#include <iostream>

using namespace std;

int main7()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		int n, start, end; // ���������� ������� �������, ������ � ����� ���������
		bool iss; // ���������� �����
		cout << "������� n: ";
		cin >> n; // ���� �������
		int* m = new int[n]; // ���������� �������
		cout << "������� ��-�� �������, ������ ��-� �� ��������� ������\n";
		for (int i = 0; i < n; i++) { // ��������� �������
			cin >> m[i];
		}
		cout << "������� ������ � ����� ��������� ����� ������: ";
		cin >> start >> end; // ���� ������ � ����� ���������
		for (int i = 0; i < n; i++) {
			if (m[i] % 4 == 0 and m[i] >= start and m[i] <= end) { // �������� �� ��������� 4 � �� ��������� � ��������
				iss = true; // ������ ���� true
				cout << i << " "; // ������� ������
			}
		}
		if (not iss) {
			cout << "����� ��������� ���"; // ����� ����, ��� ����� ��-�� ���
		}
		delete[]m; // �������� �������
		cout << "\n������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}