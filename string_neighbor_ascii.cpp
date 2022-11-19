#include <iostream>

using namespace std;

int main()
{
    char c[101];
    cin.getline(c, 101);

    int n = strlen(c);
    for (int i = 0; i < (n - 1); i+=1)
    {
        // 当前字符 + 后一个字符
        char cc = c[i] + c[i + 1];
        cout << cc;
    }

    // 最后一个字符 + 第一个字符
    char last = c[n - 1] + c[0];
    cout << last << endl;

    return 0;
}
