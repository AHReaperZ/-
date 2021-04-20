#include <iostream>
#include <math.h>
using namespace std;

class VectorM
{
public:
    double x = 0;
    double y = 0;
    double z = 0;

    double modul()
    {
        return(sqrt(x*x+y*y+z*z));
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    VectorM vector_a {};

    vector_a.x = 4.5; 
    vector_a.y = 1.3;
    vector_a.z = -2.5;

    cout << "Модуль вектора = " << vector_a.modul();

    return 0;
}
