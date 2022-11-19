#include <iostream>

using namespace std;

int main()
{
    char c[100000];
    cin.getline(c, 100000);
    int n = strlen(c);

    for (int i = 0; i < n; i++) {
        int f = 0; // 出现次数
        for (int j = 0; j < n;j++) {
            if(c[i] == c[j] && i != j) {
                // 至少出现2次，在第 i, j 两个位置
                f += 1;
            }
        }

        if(f == 0){
            // 仅出现一次，输出并退出程序
            cout << c[i] <<endl;
            return 0;
        }
    }

    // 所有字符都出现不止一次
    cout << "no" << endl;
    return 0;
}
