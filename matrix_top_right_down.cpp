// 折角矩阵。从左到右、再从上到下。
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, a[20][20];
    cin >> n;

    int v = 1;
    // 逐行输出。每行分成左右两部分
    for (int i = 0; i < n; i++)
    {
        // 输出左半部分
        int j = 0;
        for (; j < (n - i); j++)
        {
            a[i][j] = v++;
            cout << setw(4) << a[i][j];
        }

        // 输出右半部分
        for (; j < n; j++)
        {
            // 前一行相同列的元素+1
            a[i][j] = a[i - 1][j] + 1;
            cout << setw(4) << a[i][j];
        }

        // 换行
        cout << endl;
        // 调整 v 的取值
        v = v + n - i - 1;
    }

    return 0;
}
