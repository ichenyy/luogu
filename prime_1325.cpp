/*
* 1325: 素数问题（二）
* http://oj.ryipedu.com/problem.php?id=1325
*
* 给定 5个大于1的正整数（输入时用户控制，程序不作判断），
* 请判断它们是否为素数（素数也称质数，只能被1和它本身整除的整数）。
*
*/
#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int x)
{
    int val = sqrt(x);
    for (int i = 2; i <= val; i++)
        if (!(x % i))
            return false;
    return true;
}

int main()
{
    int n[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    // find all prime less than n
    for (int i = 0; i < 5; i++)
    {
        cout << is_prime(n[i]);
    }
    cout << endl;

    return 0;
}