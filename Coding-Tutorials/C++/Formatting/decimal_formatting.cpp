/*
    Patrick Goodwin
    C++ Tutorial #4
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a = 9.846382043;
    double b = 2.938473824;

    double num_add = a + b;
    double num_subtract = a - b;
    double num_multiply = a * b;
    double num_divide = a / b;

    cout << "9.846382043 + 2.938473824 = " << num_add << endl;
    cout << "9.846382043 - 2.938473824 = " << num_subtract << endl;
    cout << "9.846382043 * 2.938473824 = " << num_multiply << endl;
    cout << "9.846382043 / 2.938473824 = " << num_divide << endl << endl;

    cout << "[FORMATTED] 9.846382043 + 2.938473824 = " << setprecision(3) << num_add << endl;
    cout << "[FORMATTED] 9.846382043 - 2.938473824 = " << setprecision(4) << num_subtract << endl;
    cout << "[FORMATTED] 9.846382043 * 2.938473824 = " << setprecision(5) << num_multiply << endl;
    cout << "[FORMATTED] 9.846382043 / 2.938473824 = " << setprecision(6) << num_divide << endl;

    return 0;
}