#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > c)
    {
        if (a > b)
        {
            cout << "a" << endl;
        }
        else
        {
            cout << "b" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b" << endl;
        }
        else
        {
            cout << "c" << endl;
        }
    }

    system("pause");

    return 0;
}