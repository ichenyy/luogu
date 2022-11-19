// 矩阵加法
#include <iostream>

using namespace std;

int main() 
{
    int a[3][4], b[3][4];
    for (int i = 0; i < 3;i++ ) {
        for (int j = 0; j < 4;j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}