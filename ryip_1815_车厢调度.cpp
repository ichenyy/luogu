#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int b[1010], c[1010];
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    int top = 0, cur=1;
    for (int i = 1; i <= n; i++)
    {
        // 进栈
        while (cur <= b[i])
        {
            c[top++] = cur++;
        }

        // 出栈
        if(c[top-1] == b[i]) {
            top--;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
