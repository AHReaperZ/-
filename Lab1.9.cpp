#include <iostream>
#include <cmath>

using namespace std;

int main() {

    const double pi = 3.1415926535;

    setlocale(LC_ALL, "Russian");
    cout << "Данная программа находит момент времени T, в который отклонение маятника максимально при введенных параметрах частоты маятника и отношения амплитуды к коорденате х в начальный момент времени."<< endl;

    double w = 0.0; //Частота маятника

    do {

        cout << "Введите частоту маятника (вещественное число): ";
        cin >> w;

        if (!cin.good()) {
                    cin.clear();
                    cin.ignore();
                    cout << "Введен неверный параметр." << endl;
		} else break;

	} while (true);

	double k = 0.0; //Во сколько раз координата х меньше амплитуды А в начальный момент времени

	do {

        cout << "Введите k (вещественное число): ";
        cin >> k; //час искал ошибку, тут было w :(

        if (!cin.good()) {
                    cin.clear();
                    cin.ignore();
                    cout << "Введен неверный параметр." << endl;
		} else break;

	} while (true);

    double t = ( (pi / 2) - asin(1 / k) ) / w; // Тот самый момент времени


    cout << "Отклонение маятника максимально в момент времени T = " << t << endl;
}
