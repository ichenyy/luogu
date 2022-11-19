/*
* 1322: 欧拉版哥德巴赫猜想
* http://oj.ryipedu.com/problem.php?id=1322
*
* 任一大于2的偶数都可写成两个素数之和.
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

    for (int i = 0; i < ai; i++)
    {
        for (int j = 0; j < ai; j++)
        {
            if(a[i] + a[j] == n) 
            {
                if(a[i] <= a[j]) {
                    cout << a[i] << " " << a[j] << endl;
                } else {
                    cout << a[j] << " " << a[i] << endl;
                }
                
                return 0;
            }
        }
    }

    return 0;
}
