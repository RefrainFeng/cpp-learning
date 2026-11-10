#include <iostream>
using namespace std;

int main()
{
    // sizeof(数字类型/变量)
    long long numLong = 1;
    cout << sizeof(long) << endl;

    cout << sizeof(numLong) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(short) << endl;
    // short < int = long < long long (占用字节数)

    system("pause");

    return 0;
}