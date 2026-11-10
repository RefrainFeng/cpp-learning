#include <iostream>
using namespace std;

int main()
{
    // 1. 换行 \n
    cout << "hello world\n";

    // 2. 反斜杠 两个'\'
    cout << "\\\n";

    // 3. 水平制表符(8字节一个单位，使得输出整齐) \t
    cout << "hello\tworld\n";

    system("pause");

    return 0;
}