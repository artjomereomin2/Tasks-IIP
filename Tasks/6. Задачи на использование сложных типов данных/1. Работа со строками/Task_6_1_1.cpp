#include <iostream>
#include <string>

using namespace std;

int main1()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		string str, ret = "";
		cout << "�������� ������: \n";
		getline(cin, str);
		while (str.find_first_not_of(ret) != string::npos) {
			ret += str[str.find_first_not_of(ret)];
		}
		cout << ret << endl;
		cout << "������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
		cin.get();
	} while (x);
	return 0;
}