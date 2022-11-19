/*
* 1323: 素数对
* http://oj.ryipedu.com/problem.php?id=1323
*
* 两个相差为2 的素数成为素数对，5和7，17和19，求出不大于n的素数对,没有输出“empty”。
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
    int n, a[1000], ai = 0;
    cin >> n;

    // find all prime less than n
    for (int i = 2; i < n; i++)
    {
        if (is_prime(i))
        {
            a[ai++] = i;
        }
    }

    for (int i = 0; i < ai - 1; i++)
    {
        if(a[i] + 2 == a[i+1])
        {
            cout << a[i] << " " << a[i+1] << endl;
        }
    }

    return 0;
}