#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, z1, z2;

    cout << "Enter a = ";
    cin >> a;

    z1 = (cos(a) + sin(a)) / (cos(a) - sin(a));
    z2 = tan(2 * a) + 1 / cos(2 * a);

    cout << "z1 = " << z1 << endl;
    cout << "Результат z2 = " << z2 << endl;

    return 0;
}