/* 1320: 哥德巴赫猜想
* http://oj.ryipedu.com/problem.php?id=1320
*
* 验证100以内任何一个大于6的偶数均可表示为2个素数之和｡
* 编写函数验证这一猜想，要求给定一个6到100的偶数，输出偶数等于两个素数之和的所有情况。
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
    int n, a[100], ai = 0;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if(is_prime(i)){
            a[ai++] = i;
        }
    }

    for (int i = 0; i < ai; i++)
    {
        for (int j = i + 1; j < ai; j++)
        {
            if (a[i] + a[j] == n)
            {
                cout << n << "=" << a[i] << "+" << a[j] << endl;
            }
        }
    }

    return 0;
}
