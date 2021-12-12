/*
    Patrick Goodwin
    C++ Tutorial #2
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    int b = 3;

    int num_add = a + b;
    int num_subtract = a - b;
    int num_multiply = a * b;
    int num_divide = a / b;

    int c = 4;

    int num_divide_2 = a / c;
    int num_modulo = a % c;

    cout << "9 + 3 = " << num_add << endl;
    cout << "9 - 3 = " << num_subtract << endl;
    cout << "9 * 3 = " << num_multiply << endl;
    cout << "9 / 3 = " << num_divide << endl;

    cout << "9 / 5 = " << num_divide_2 << endl;
    cout << "9 % 5 = " << num_modulo << endl;

    return 0;
}