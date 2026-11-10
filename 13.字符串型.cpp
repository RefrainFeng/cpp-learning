#include <iostream>
#include <string> // 一定记得引用!
using namespace std;

int main()
{
    // 1. C式字符串
    char strC[] = "hello world";
    cout << strC << endl;

    // 2. C++式字符串(需要引用头文件string)
    string strCpp = "hate you world";
    cout << strCpp << endl;

    system("pause");

    return 0;
}