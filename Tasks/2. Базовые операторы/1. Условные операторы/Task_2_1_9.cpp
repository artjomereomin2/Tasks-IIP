#include <iostream>
#include <cmath>

using namespace std;
int main9()
{
	int n;
	do {
		setlocale(LC_ALL, "Rus");
		double x;
		cout << "������� �: ";
		cin >> x;
		double del_0 = x * x - 9; // �����������
		double kor_otr = (x - 5) / del_0; // �������� ��� ������
		double nepol_ln = x * x + x * 2 + 1; // �������� ��� ����������
		if (abs(del_0) < DBL_EPSILON) {// == 0
			cout << "������� �� ����";
		}
		else if (kor_otr < 0) { // < 0
			cout << "������ �� �������������� �����";
		}
		else if (nepol_ln < DBL_EPSILON) { // <= 0
			cout << "�������� �� ���������������� �����";
		}
		else {
			double F = sqrt(kor_otr) + log(nepol_ln); // �������� ���������
			cout << F;
		}
		cout << endl << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> n;
	} while (n);
	return 0;
}