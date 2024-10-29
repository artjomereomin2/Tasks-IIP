#include <iostream>
#include <cmath>

using namespace std;
int main13()
{
	int n;
	do {
		setlocale(LC_ALL, "Rus");
		double a, b, h;
		cout << "������� a, b � h (����� ������): ";
		cin >> a >> b >> h;
		for (int x = a; x <= b; x += h) {
			cout << x << " - ";
			double kor_otr = x * x - 4 * x + 4; // �������� ��� ������
			double del_0 = sqrt(kor_otr); // �����������
			double nepol_ln = x * x - 1; // �������� ��� ����������
			if (nepol_ln < DBL_EPSILON) { // <= 0
				cout << "�������� �� ���������������� �����";
			}
			else if (kor_otr < 0) { // < 0
				cout << "������ �� �������������� �����";
			}
			else if (abs(del_0) < DBL_EPSILON) {// == 0
				cout << "������� �� ����";
			}
			else {
				double F = log(nepol_ln) / del_0; // �������� ���������
				cout << F;
			}
			cout << endl;
		}
		cout << endl << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> n;
	} while (n);
	return 0;
}