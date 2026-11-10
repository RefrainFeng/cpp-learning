#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    cout << num << endl;
    cout << ++num << endl; // 前置递增
    cout << num++ << endl; // 后置递增
    cout << num << endl;

    system("pause");

    return 0;
}