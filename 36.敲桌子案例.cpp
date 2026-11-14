#include <iostream>
using namespace std;

int main()
{
    int num = 100;

    for (int i = 0; i < num; i++)
    {
        if (i % 7 == 0)
        {
            cout << "kick" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    system("pause");

    return 0;
}