#include <iostream>
using namespace std;

int main()
{
    int ge, shi, bai;
    int Ge, Shi, Bai;
    int num = 99;

    do
    {
        num++;
        // 计算个位
        ge = num % 10;
        Ge = ge * ge * ge;
        // 计算十位
        shi = num / 10 % 10;
        Shi = shi * shi * shi;
        // 计算百位
        bai = num / 100;
        Bai = bai * bai * bai;

        if (Ge + Shi + Bai == num)
        {
            cout << num << endl;
        }
    } while (num < 999);

    system("pause");

    return 0;
}