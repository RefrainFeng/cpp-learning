#include <iostream>
using namespace std;

int main()
{
    int num1 = 3;
    int num2 = 4;

    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;
    cout << num1 / num2 << endl; // 直接去除小数部分，且除数不能为0

    double num3 = 3.14;
    double num4 = 2.1;
    cout << num3 / num4 << endl; // 俩小数可以直接除，且依然是小数

    system("pause");

    return 0;
}