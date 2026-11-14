#include <iostream>
using namespace std;

int main()
{
    int num = rand(); // 生成1~100之间的随机数
    int t = -1;
    cout << num << endl;

    while (t != num)
    {
        cin >> t;
        if (t > num)
        {
            cout << "to big" << endl;
        }
        else if (t < num)
        {
            cout << "to small" << endl;
        }
        else
        {
            cout << "yes" << endl;
            break;
        }
    }

    system("pause");

    return 0;
}