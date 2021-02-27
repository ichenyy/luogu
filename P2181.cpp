#include <iostream>

using namespace std;

int main()
{
    // 输入凸多边形边的数量
    unsigned long long edges, points;
    cin >> edges;

    // 计算对角线的交点。
    // 根据邵勇老师的文章，求凸多边形的对角线交点数量，可转化为求凸多边形任意4个顶点组成4边形的数量，
    // 即求组合数C(n)(4)=n(n-1)(n-2)(n-3)/4!。
    // 这里的技巧是，需要分别除以2、3、4，要不然会溢出。
    points = edges * (edges - 1) / 2 * (edges - 2) / 3 * (edges - 3) / 4;

    cout << points << endl;
    return 0;
}