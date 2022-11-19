#include <iostream>
#include <string>

using namespace std;

int main()
{
    char c[200];
    cin.getline(c, 200);
    int n = strlen(c);

    bool is_space = false;
    for (int i = 0; i < n; i++)
    {
        if(c[i] != ' '){
            // 当前字符不是空格直接输出
            cout << c[i];
            is_space = false;
        }
        else if (!is_space)
        {
            // 当前字符是空格，并且是第1个空格
            cout << c[i];
            is_space = true;
        }
    }

    // 最后输出个换行符号是个好习惯
    cout << endl;

    return 0;
}
