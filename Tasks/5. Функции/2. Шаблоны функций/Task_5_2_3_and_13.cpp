#include <iostream>

using namespace std;

// ������� �������

template <typename X> // ����� �������
void print_m(X** matrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

template <typename X> // ������������� � ���������� �������
X** create_and_paste(X type_el, int n, int m) {
	X** matrix = new X* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new X [m];
	}
	cout << "������� �������� ������� ����:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % 10000 * 0.01 + 5;
			// cin >> matrix[i][j];
		}
	}
	print_m(matrix, n, m);
	return matrix;
}

template <typename X>
X** change_matrix_3(X** matrix, int n, int m) { // ��������� �������
	for (int i = 0; i < n / 2 * 2; i += 2) {
		X* d;
		d = matrix[i];
		matrix[i] = matrix[i + 1];
		matrix[i + 1] = d;
	}
	return matrix;
}

template <typename X>
X** change_matrix_13(X** matrix, int n, int m, X max_s) { // ��������� �������
	// ����� ������������� ��-�
	int ind_m;
	for (int i = 0; i < n; i += 1) {
		X s = 0;
		for (int j = 0; j < m; j += 1) {
			s += matrix[i][j];
		}
		if (s > max_s) {
			ind_m = i;
		}
	}
	// ����� �����
	X* d;
	d = matrix[0];
	matrix[0] = matrix[ind_m];
	matrix[ind_m] = d;
	return matrix;
}

int main21()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		int number;
		cout << "������� ����� ������: ";
		cin >> number;
		// ���������� ����������� �������, ��� ����, ������ ������� ������ ��� int, double � char
		int n, m;
		cout << "������� n � m ����� ������: ";
		cin >> n >> m;

		int i = 0; // int
		cout << "int\n";
		int** matrix_int = create_and_paste(i, n, m);
		if (number == 3) matrix_int = change_matrix_3(matrix_int, n, m);
		else matrix_int = change_matrix_13(matrix_int, n, m, INT_MIN);
		cout << "��������� ������ ��� int:\n";
		print_m(matrix_int, n, m);

		double d = 5.0; // double
		cout << "double\n";
		double** matrix_double = create_and_paste(d, n, m);
		if (number == 3) matrix_double = change_matrix_3(matrix_double, n, m);
		else matrix_double = change_matrix_13(matrix_double, n, m, DBL_MIN);
		cout << "��������� ������ ��� double:\n";
		print_m(matrix_double, n, m);

		char c = '0'; // char
		char mi = 0;
		cout << "char\n";
		char** matrix_char = create_and_paste(c, n, m);
		if (number == 3) matrix_char = change_matrix_3(matrix_char, n, m);
		else matrix_char = change_matrix_13(matrix_char, n, m, mi);
		cout << "��������� ������ ��� char:\n";
		print_m(matrix_char, n, m);

		cout << "\n������� ����� ����� ��� ����������� (����� ����): ";
		cin >> x;
	} while (x);
	return 0;
}