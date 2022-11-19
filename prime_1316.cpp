/*
* 1316: 函数练习-1
* http://oj.ryipedu.com/problem.php?id=1316
* 
* 编写一个函数，其功能是判断一个正整数是否为素数。
* 输入一个正整数，如果它是素数，函数返回值为1，否则返回值为0。
*/
#include <iostream>
#include <math.h>

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
    int m, n;
    std::cin >> m >> n;

    for (int i = m; i <= n; i++) {
        if (is_prime(i))
            std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}