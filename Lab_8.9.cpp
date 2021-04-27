#include <iostream>
#include <math.h>
using namespace std;

class Complex_value
{
public:
    double x = 0;
    double y = 0;
};

void func(double, double);

int main()
{
    setlocale(LC_ALL, "Russian");
    Complex_value value_a {};

    value_a.x = 3;
    value_a.y = 2.1;
    func(value_a.x, value_a.y);
}

void func(double x, double y)
{
    double a = cos(x)*cosh(y);
    double b = sin(x)*sinh(y);

    cout << "Косинус комплексного числа = " << a << "+i" << b <<endl;
}
