#include <iostream>
using namespace std;

int main()
{
    // 实型(浮点型) " 默认情况下，显示6位数字(包括整数部分) "
    // 1. 单精度 float 4Byte
    float numFloat = 3.14159265358979323f; // f代表float，否则默认double
    cout << numFloat << endl;
    cout << sizeof(numFloat) << endl;

    // 2. 双精度 double 8Byte
    double numDouble = 33.14159265358979323; // 默认double，所以不写f
    cout << numDouble << endl;
    cout << sizeof(numDouble) << endl;

    // 科学计数法
    float sciNum = 3e-2; // 3 * 0.1 ^ 2 = 0.03
    cout << sciNum << endl;

    system("pause");

    return 0;
}