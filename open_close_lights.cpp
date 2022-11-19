// 1202 开关灯
// 有 n 盏灯、m 个人；第1人关闭所有灯；第2人打开所有2的倍数的灯；第3人及以后，都对各自倍数的灯，做相反操作。
// 问最后有几盏灯亮着？
#include <iostream>

using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    // 第1个人把灯都关了
    bool lights[n] = {false};

    // 打开2的倍数的灯
    for (int i = 2; i < n; i++){
        if(i % 2 == 0){
            lights[i] = true;
        }
    }

    // 对于 3 及 3 以后
    for (int i = 3; i <= m; i++)
    {
        for (int j = 3; j <= n; j++)
        {
            if (j % i == 0)
            {
                // 相反操作
                lights[j] = !lights[j]; 
            }
        }
    }

    // 统计有几个灯是亮着的
    int count = 0;
    for (int i = 1; i <= n; i++){
        if(lights[i] == true)
            count++;
    }

    cout << count << endl;
    return 0;
}