#include <iostream>
#include <fstream>
#include <string>

class Student {
private:
	std::string FIO;
	int year, count;
	int* grades;
	void setPersonality(std::string fio, int y_of_born, int c, int* grad) {
		FIO = fio;
		year = y_of_born;
		count = c;
		grades = grad;
	}
public:
	Student(std::string FIO, int year, int count, int* grades) {
		setPersonality(FIO, year, count, grades);
	}
	bool is_session() {
		bool is_sess = true;
		for (int i = 0; i < count; i++) {
			if (grades[i] < 3) {
				is_sess = false;
				break;
			}
		}
		return is_sess;
	}
};

int main2_2()
{
	int x;
	do {
		setlocale(LC_ALL, "Rus");
		std::ofstream out;
		int c;
		std::cout << "Введите количество студентов: ";
		std::cin >> c;
		out.open("file.txt");
		for (int i = 0; i < c; i++) {
			std::string fio;
			std::cout << "Введите ФИО:\n";
			std::cin.get();
			std::getline(std::cin, fio);
			int year;
			std::cout << "Введите год рождения:\n";
			std::cin >> year;
			int count;
			std::cout << "Введите количество оценок и сами оценки (на разных строках):\n";
			std::cin >> count;
			int* grades = new int[count];
			for (int j = 0; j < count; j++) {
				std::cin >> grades[j];
			}
			Student students(fio, year, count, grades);
			if (students.is_session()) {
				out << fio << " " << year << std::endl;
			}
		}
		out.close();

		std::cout << "Введите любое число для продолжения (кроме нуля): ";
		std::cin >> x;
	} while (x);
	return 0;
}