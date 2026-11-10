#include <iostream>
using namespace std;

int main()
{
    // 字符型 char 1Byte 存放字符的ASCII码
    char ch = 'a'; // 记得是单引号

    cout << ch << endl;
    cout << sizeof(char) << endl;
    cout << int(ch) << endl;  // a的ASCII码值 97
    cout << int('A') << endl; // A的ASCII码值 65

    system("pause");

    return 0;
}