/*
* 1326: 密码质数
* http://oj.ryipedu.com/problem.php?id=1326
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
    int n, idx[1000], a[5000], ai = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> idx[i];
    }

    // find all prime less than 5000
    for (int i = 2; i < 5000; i++)
    {
        if (is_prime(i))
            a[ai++] = i;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[idx[i] - 1] << endl;
    }

    return 0;
}