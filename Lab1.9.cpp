#include <iostream>
#include <cmath>

using namespace std;

int main() {

    const double pi = 3.1415926535;

    setlocale(LC_ALL, "Russian");
    cout << "������ ��������� ������� ������ ������� T, � ������� ���������� �������� ����������� ��� ��������� ���������� ������� �������� � ��������� ��������� � ���������� � � ��������� ������ �������."<< endl;

    double w = 0.0; //������� ��������

    do {

        cout << "������� ������� �������� (������������ �����): ";
        cin >> w;

        if (!cin.good()) {
                    cin.clear();
                    cin.ignore();
                    cout << "������ �������� ��������." << endl;
		} else break;

	} while (true);

	double k = 0.0; //�� ������� ��� ���������� � ������ ��������� � � ��������� ������ �������

	do {

        cout << "������� k (������������ �����): ";
        cin >> k; //��� ����� ������, ��� ���� w :(

        if (!cin.good()) {
                    cin.clear();
                    cin.ignore();
                    cout << "������ �������� ��������." << endl;
		} else break;

	} while (true);

    double t = ( (pi / 2) - asin(1 / k) ) / w; // ��� ����� ������ �������


    cout << "���������� �������� ����������� � ������ ������� T = " << t << endl;
}
