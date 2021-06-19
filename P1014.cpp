// [NOIP1999 普及组] Cantor 表
#include <iostream>
using namespace std;

int main()
{
    long long N,
    l=0,            // 第几层
    sum_n=0;        // 前n项和

    cin >> N;

    for(long long i =  1; ; i++){
        // 等差数列前 n 项和
        sum_n = i * (i + 1) / 2;
        // 前n项和正好大于等于给定N
        if(sum_n >= N){
            l = i;
            break;
        }
    }

    // 前 n - 1 项的和
    long long sum_n_1 = l * (l - 1) / 2;

    long long x = l - (sum_n - N);
    long long y = l - (N - sum_n_1) + 1;
    if(l%2 == 0) {
        // 偶数层
        cout << x << "/" << y << endl;
    } else {
        // 奇数层
        cout << y << "/" << x << endl;
    }

    return 0;
}
