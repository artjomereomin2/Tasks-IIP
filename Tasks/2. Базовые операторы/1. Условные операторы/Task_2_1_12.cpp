#include <iostream>

using namespace std;

int main12()
{
	int n;
	do {
		setlocale(LC_ALL, "Rus");
		int d, m, y;
		cin >> d >> m >> y;// ���� ������
		int err_m, max_d;// err_m - ��, ������� ���� ����� �������� � 28, ����� �������� ���������� ���� � ������ ������(����� �������), max_d - ���������� ���� � ������ ������
		bool vis = (y % 4 == 0 and y % 100 != 0 or y % 400 == 0);// vis - ��������� �� ���
		switch (m)
		{
		case 2:
			err_m = 0;
			break;
		case 4: case 6: case 9: case 11: err_m = 2; break; // 28 + 2 = 30
		default:
			err_m = 3; // 28 + 3 = 31
			break;
		}
		max_d = 28 + (vis and m == 2) + err_m; // 28 + ����������� � ������� + err_m
		if (y < 1) {
			cout << "������������ ���"; // �� ��������� ���� �� �. �.
		}
		else if (m < 1 or m > 12) {
			cout << "������������ �����"; // ������������ �����
		}
		else if (d < 1 or d > max_d) {
			cout << "������������ ����"; // ������������ ����
		}
		else {
			cout << d;
			switch (m)
			{
			case 1: cout << " ������ "; break;
			case 2: cout << " ������� "; break;
			case 3: cout << " ����� "; break;
			case 4: cout << " ������ "; break;
			case 5: cout << " ��� "; break;
			case 6: cout << " ���� "; break;
			case 7: cout << " ���� "; break;
			case 8: cout << " ������� "; break;
			case 9: cout << " �������� "; break;
			case 10: cout << " ������� "; break;
			case 11: cout << " ������ "; break;
			default:
				cout << " ������� ";
				break;
			}
			cout << y << " ����" << endl;
			cout << max_d - d;
		}
		cout << endl << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> n;
	} while (n);
	return 0;
}