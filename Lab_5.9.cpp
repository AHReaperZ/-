#include <iostream>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	cout << "Данная программа умножает матрицу на число" << endl;

	int n;

	do {
		cout << "Введите количество строк n (целое положительное число): ";
		cin >> n;

		if (!cin.good() || (n < 0)) {
			cin.clear();
			cin.ignore();
			cout << "Введен неверный параметр." << endl;
		}
		else break;

	} while (true);

	int m;

	do {
		cout << "Введите количество столбцов m (целое положительное число): ";
		cin >> m;

		if (!cin.good() || (m < 0)) {
			cin.clear();
			cin.ignore();
			cout << "Введен неверный параметр." << endl;
		}
		else break;

	} while (true);

	cout << endl;

	double** matr; 
	matr = new double* [n]; 

	for (int i = 0; i < n; i++) {
		matr[i] = new double[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Введите matr[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matr[i][j];
		}
		cout << endl;
	}

	double k;

	do {
		cout << "Введите число на которое нужно умножить матрицу: ";
		cin >> k;

		if (!cin.good()) {
			cin.clear();
			cin.ignore();
			cout << "Введен неверный параметр." << endl;
		}
		else break;

	} while (true);

	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matr[i][j] = matr[i][j] * k;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Элемент матрицы [" << i + 1 << "][" << j + 1 << "] = " << matr[i][j]<< endl;
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete matr[i];
	}
		
	delete[] matr;
}
