/*
* 1327: 回文质数
* http://oj.ryipedu.com/problem.php?id=1327
*
*/
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

// 判断给定数是否素数
bool is_prime(int x)
{
    int val = sqrt(x);
    for (int i = 2; i <= val; i++)
        if (!(x % i))
            return false;
    return true;
}

// 判断给定数是否回文数
// 思路：先把数字转成字符串 s1，再逆转字符串 s1 得到 s2，最后比较 s1 和 s2。
bool is_plalindrome(int n)
{
    // 数字转字符串
    string s1 = to_string(n);
    
    // 逆转字符串
    string s2;
    for (int i = s1.size() - 1; i >= 0; i--)
    {
        s2 += s1[i];
    }

    // 比较原始字符串和逆转字符串是否相同
    if(s1.compare(s2) == 0)
        return true;

    return false;
}

int main()
{
    int a, b;
    cin >> a >> b;

    // find all prime between [a, b]
    for (int i = a; i < b; i++)
    {
        if (is_plalindrome(i) && is_prime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}