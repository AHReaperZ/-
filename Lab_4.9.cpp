#include <iostream>
#include <cmath>

using namespace std;

double func(double *, double *, int);

int main() {

	setlocale(LC_ALL, "Russian");
	cout << "Данная программа находит скалярное произведение векторов a и b" << endl;

	int n;

	do {
		cout << "Введите количество плоскостей в которых лежат вектора (целое положительное число): ";
		cin >> n;

		if (!cin.good() || (n < 0)) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Введен неверный параметр." << endl;
		}
		else break;

	} while (true);

	double* a = new double[n];

	for (int i = 0; i < n; i++) {
		do {
			cout << "Введите координату вектор a №" << i + 1 << ": ";
			cin >> a[i];

			if (!cin.good()) {
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Введен неверный параметр." << endl;
			}
			else break;

		} while (true);
	}

	double* b = new double[n];

	for (int i = 0; i < n; i++) {
		do {
			cout << "Введите координату вектор b №" << i + 1 << ": ";
			cin >> b[i];

			if (!cin.good()) {
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Введен неверный параметр." << endl;
			}
			else break;

		} while (true);
	}

	cout << "Скалярное произведение векторов a и b = " << func(a, b, n) << endl;

	delete[] a;
	delete[] b;
}

double func(double *a, double *b, int n) {

	double c = 0;
	for (int i = 0; i < n; i++) {
		
		c += a[i] * b[i];
	}
		return (c);
}
