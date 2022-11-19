/*
* 1321: 现代版哥德巴赫猜想
* http://oj.ryipedu.com/problem.php?id=1321
*
* 任一大于5的整数都可写成三个素数之和。
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

    // search answer
    int v = 0;
    for (int i = 0; i < ai; i++)
    {
        for (int j = 0; j < ai; j++)
        {
            v = a[i] + a[j];
            if(v > n) 
            {
                break;
            }
            for (int k = 0; k < ai; k++)
            {
                v = a[i] + a[j] + a[k];
                if(v > n)
                {
                    break;
                }
                else if (v == n)
                {
                    // sort answer
                    int b[] = {a[i], a[j], a[k]};
                    for (int l = 0; l < 3; l++) 
                    {
                        for (int m = 0; m < 3; m++)
                        {
                            if(b[l] < b[m])
                            {
                                int t = b[l];
                                b[l] = b[m];
                                b[m] = t;
                            }
                        }
                    }

                    // print a answer
                    for (int n = 0; n < 3; n++)
                    {
                        cout << b[n] << " ";
                    }
                    cout << endl; // remember end line

                    return 0;
                }
            }
        }  
    }

    return 0;
}
