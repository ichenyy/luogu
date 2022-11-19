/**
 * 1036: 逆序输出三位数
 * http://oj.ryipedu.com/problem.php?id=1036
 *  
 */
#include <iostream>
#include <string>

using namespace std;

// 求指定整数的逆序数
void print_reverse(int n)
{
    int m;
    while (true)
    {
        int r = n % 10;
        cout << r;

        n = n / 10;

        if (n == 0)
            break;
    }
    cout << endl;
}

string reverse_to_string(int n)
{
    string s = "";
    while (true)
    {
        int r = n % 10;
        s += to_string(r);

        n = n / 10;

        if (n == 0)
            break;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;

    print_reverse(n);

    return 0;
}
