#include <iostream>
using namespace std;

int main()
{
    bool a = true;
    bool b = false;

    cout << !a << endl;       // 非
    cout << (a && b) << endl; // 与
    cout << (a || b) << endl; // 或

    system("pause");

    return 0;
}