#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cin >> score;

    cout << score << endl;

    if (score > 200)
    {
        if (score > 600)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no yes" << endl;
        }
    }
    else
    {
        cout << "no" << endl;
    }

    system("pause");

    return 0;
}