#include <iostream>

using namespace std;

// ����������� �������
int strings(int n, int z, char start) {
	int i, c = 1;
	if (z < n) { i = z; }
	else if (z <= n * 2) { i = n - (z - n); c -= 2; }
	else { return 0; }

	for (int j = 0; j <= (n - i); j++) cout << ' ';
	for (int j = 0; j <= i; j++) cout << start;
	for (int j = 0; j < n - i; j++) cout << '-';
	for (int j = 0; j < i * 2 + 1; j++) cout << start;
	for (int j = 0; j < n - i; j++) cout << '-';
	for (int j = 0; j <= i; j++) cout << start;
	cout << endl;
	return strings(n, z + 1, start + c); // ����������� ��������� 
}

int main()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		// ���������� n, �� ���� � ����� ����������
		int n;
		char char_start = 'A';
		cout << "������� ���������� �������� ����� �(� ������� �� 6): ";
		cin >> n;
		cout << "�������� ������:\n";
		strings(n, 0, char_start);
		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}