#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int l, m;
    cin >> l >> m;

    int L = l + 1; // 树木的总数
    int trees[L];
    fill(trees, trees + L, 1); // 有树的位置标记为1

    int u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u;
        cin >> v;

        for (int j = u; j <= v; j++)
        {
            trees[j] = 0; // 被移走树的位置标记为0
        }
    }

    // 合计剩余的树木数量
    int remains = 0;
    for (int k = 0; k < L; k++)
    {
        remains = remains + trees[k];
    }

    cout << remains << endl;
    return 0;
}
