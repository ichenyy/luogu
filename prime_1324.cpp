/*
* 1324: 素数问题（一）
* http://oj.ryipedu.com/problem.php?id=1324
*
* 给定 n 个（n<1000）小于 1000 的正整数，把其中的质数按升序输出。
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

bool is_contains(int *arr, int arr_len, int x)
{
    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n, m, a[1000], ai = 0;
    cin >> n;

    // find all prime less than n
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (is_prime(m) && !is_contains(a, ai, m))
        {
            a[ai++] = m;
        }
    }

    for (int i = 0; i < ai; i++)
    {
        for (int j = 0; j < ai; j++)
        {
            if(a[i] < a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for (int i = 0; i < ai; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}