/*
题目描述
有 R 个红色盒子和 B 个蓝色盒子，还有 R 个红色小球和 B 个蓝色小球。每个盒子只能装一个小球，每个小球都要放在一个盒子里。

如果把一个红色小球放在一个红色盒子里，那么得分是 C。如果把一个蓝色小球放在一个蓝色盒子里，那么得分是 D。如果把一个红色小球放在一个蓝色盒子里，那么得分是 E。如果把一个蓝色小球放在一个红色盒子里，那么得分也是 E。

现在给出 R，B，C，D，E。应该如何放置这些小球进盒子，才能使得总得分最大？输出最大的总得分。

输入格式
一行，5 个整数，分别是 R，B，C，D，E。

输出格式
一个整数，最大总得分。 

输入 #1
2 3 100 400 200
输出 #1 
1400

输入 #2
2 3 100 400 300
输出 #2
1600
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int red, blue, c, d, e, ans = 0, tmp = 0;
    cin >> red >> blue >> c >> d >> e;

    // 1、各自放
    tmp = red * c + blue * d;
    if (tmp > ans)
        ans = tmp;

    // 2、混合放
    if (red >= blue)
    {
        tmp = blue * e + (red - blue) * c + blue * d;
        if (tmp > ans)
            ans = tmp;
    }
    else
    {
        tmp = red * e + (blue - red) * d + blue * e;
        if (tmp > ans)
            ans = tmp;
    }

    cout << ans << endl;
    return 0;
}