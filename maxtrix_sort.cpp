#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int m, n; // m 是行，n 是列
    cin >> m >> n;

    // 二维数组存放的身高数据
    int h[10][10]; 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> h[i][j];
        }
    }

    // 所有同学的身高一维数组，最多就是 10*10=100个同学
    int a[100];
    // 一维数组的下标从0开始
    int a_index = 0;
    // 所有身高的和，用来计算平均身高
    int total_height = 0;

    // 遍历输入的二维数组
    // 注意：两重循环是先遍历列、再遍历行，即 n、m 对调，并且 j、i 对调
    for (int i = 0; i < n; i++)
    {
        int column_max = 0; // 列最大身高
        for (int j = 0; j < m; j++)
        {
            int current = h[j][i];
            
            a[a_index++] = current;  // 转成一维数组，注意 a_index++ 表示赋值后下标往后移动
            total_height += current; // 累加所有人的身高

            if (current > column_max)
            {
                column_max = current;
            }
        }
        // 1. 输出每一列的最大值
        cout << column_max << endl;
    }

    // 2. 对所有身高进行排序，简单冒泡
    for (int i = 0; i < m * n; i++)
    {
        for (int j = 0; j < m * n; j++)
        {
            // 从高到低
            if(a[j] < a[i]) {
                // 交换 a[i] a[j]
                int ai = a[i];
                a[i] = a[j];
                a[j] = ai;
            }
        }
    }
    // 从高到低，在一行内输出所有身高
    for (int i = 0; i < m * n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // 3.求平均身高并输出
    // round 是四舍五入向上取整的标准库函数
    // 乘1.0是为了把整数变成浮点数，这样除以同学的人数时，才有小数点
    int average = round((total_height * 1.0) / (m * n));
    cout << average << endl;

    // 4. 输出不小于平均身高的同学人数
    int count = 0;
    for (int i = 0; i < m * n; i++)
    {
        if(a[i] >= average){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
