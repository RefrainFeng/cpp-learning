#include <iostream>
using namespace std;

int main()
{
    int a;

    cin >> a;

    switch (a)
    {
    case 1:
        cout << "夯" << endl;
        break;
    case 2:
        cout << "顶级" << endl;
        break;
    case 3:
        cout << "人上人" << endl;
        break;
    case 4:
        cout << "NPC" << endl;
        break;

    default:
        cout << "拉完了" << endl;
        break;
    }

    system("pause");

    return 0;
}