#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cin >> score;

    cout << score << endl;

    if (score > 600)
    {
        cout << "yes" << endl;
    }
    else if (score < 200)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "no yes";
    }

    system("pause");

    return 0;
}