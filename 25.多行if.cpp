#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cin >> score;

    cout << "the score is " << score << endl;

    if (score > 600)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    system("pause");

    return 0;
}