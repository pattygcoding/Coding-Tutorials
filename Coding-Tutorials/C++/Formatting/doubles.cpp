/*
    Patrick Goodwin
    C++ Tutorial #3
*/
#include <iostream>
using namespace std;

int main()
{
    double a = 7.794;
    double b = 3.43;

    double num_add = a + b;
    double num_subtract = a - b;
    double num_multiply = a * b;
    double num_divide = a / b;

    cout << "7.794 + 3.43 = " << num_add << endl;
    cout << "7.794 - 3.43 = " << num_subtract << endl;
    cout << "7.794 * 3.43 = " << num_multiply << endl;
    cout << "7.794 / 3.43 = " << num_divide << endl;


    return 0;
}