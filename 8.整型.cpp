#include <iostream>
using namespace std;

int main()
{

    // 1. 短整型short 2Byte -32768 ~ 32767
    short numShort = 32768;
    cout << numShort << endl;

    // 2. 整形int 4Byte -2^31 ~ 2^31 - 1
    int numInt = 2147483648;
    cout << numInt << endl;

    // 3. 长整型long 4Byte - 2^31 ~ 2^31 - 1(Windows)
    long numLong = 2147483648;
    cout << numLong << endl;

    // 4. 长长整型long long 8Byte -2^63 ~ 2^63 - 1
    long long numLongLong = 9223372036854775808;
    cout << numLongLong << endl;

    system("pause");

    return 0;
}