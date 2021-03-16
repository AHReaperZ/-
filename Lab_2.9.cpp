#include <iostream>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	cout << "Данная программа находит произведения (1+(1/2)^n)" << endl;

	int n;

	do {
	cout << "Введите верхнюю границу (целое положительное число): ";
	cin >> n;

		if (!cin.good()) {
			cin.clear();
			cin.ignore();
			cout << "Введен неверный параметр." << endl;
		}
		else break;

	} while (true);

	double sum = 2;


	for (int i = 0; i < n; i++){
	
		sum = sum * (1 + pow(0.5, (2 * (i+1))));
	}
	
	cout << "Произведение = " << sum << endl;

}
