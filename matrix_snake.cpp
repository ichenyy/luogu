// http://oj.ryipedu.com/problem.php?id=1245 
// 打印蛇形矩阵 (样例显示其实是一个回形矩阵、环形矩阵)
#include <iostream>
#include <iomanip>

using namespace std;

const int N = 100;
int a[N][N];

int main()
{
    int n;      // 矩阵的维度
    cin >> n;

    int index,  // 每个格子的编号
        i,      // 行号
        j;      // 列号
    i = j = 0;
    index = 1; 

    // 模拟回形矩阵的生成过程
    while (index <= n*n)
    {
        // 从左到右生成一行
        while(a[i][j] == 0 && j < n)
            a[i][j++] = index++;
        i++; // 下移一行
        j--; // 回退一格

        // 从上到下生成一列
        while (a[i][j] == 0 && i < n)
            a[i++][j] = index++;
        i--;
        j--;

        // 从右到左生成一行
        while(a[i][j] == 0 && j >= 0)
            a[i][j--] = index++;
        i--;
        j++;

        // 从下到上生成一列
        while(a[i][j] == 0 && i >= 0)
            a[i--][j] = index++;
        i++;
        j++;
    }

    // 输出矩阵
    for (i = 0; i < n; i++) {
        for (j = 0; j < n;j++){
            cout <<setw(3)<< a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
