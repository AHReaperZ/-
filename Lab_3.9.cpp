#include <iostream>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	cout << "Данная программа находит момент порядка K случайной величины E" << endl;

	int n;

	do {
		cout << "Введите n (целое положительное число): ";
		cin >> n;

		if (!cin.good() || (n<0)) {
			cin.clear();
			cin.ignore();
			cout << "Введен неверный параметр." << endl;
		}
		else break;

	} while (true);

	int k;

	do {
		cout << "Введите порядок момента K (целое положительное число): ";
		cin >> k;

		if (!cin.good() || (n < 0)) {
			cin.clear();
			cin.ignore();
			cout << "Введен неверный параметр." << endl;
		}
		else break;

	} while (true);

	double *e = new double[n];

	for (int i = 0; i < n; i++) {
		do {
			cout << "Введите E" << i+1 << ": ";
			cin >> e[i];

			if (!cin.good()) {
				cin.clear();
				cin.ignore();
				cout << "Введен неверный параметр." << endl;
			}
			else break;

		} while (true);
	}
	
	int* p = new int[n];
	int v = 0;

	for (int i = 0; i < n; i++) {
		do {
			cout << "Введите вероятности p в %" << i + 1 << ": ";
			cin >> p[i];
			//cout << "V = " << v << endl;
			if ( (!cin.good()) || ((v+p[i]) > 100 ) ) {
				cin.clear();
				cin.ignore();
				cout << "Введен неверный параметр." << endl;
				cout << "Сумма вероятностей больше 100%!" << endl;
			}
			else {
				v = v + p[i];
				break;
			}
		} while (true);
	}

	double sum = 0.0; 

	for (int i = 0; i < n; i++) {
	
		sum += pow(e[i], k) / 100 * p[i];
	
	}

	cout << "Момент порядка К случайной величины Е = " << sum << endl;

	delete[] e;
	delete[] p;
}
