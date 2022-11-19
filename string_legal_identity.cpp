#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 总共32个关键字
    const char *identity[] = {
        "int", "long", "short", "float", "double",
        "char", "unsigned", "signed", "const", "void",
        "volatile", "enum", "struct", "union", "if",
        "else", "goto", "switch", "case", "do",
        "while", "for", "continue", "break", "return",
        "default", "typedef", "auto", "register", "extern",
        "static", "sizeof"};

    char c[20];
    cin.getline(c, 20);

    // 检查第1个元素
    if (c[0] >= '0' && c[0] <= '9')
    {
        // 数字开头，输出 no 后退出程序
        cout << "no" << endl;
        return 0;
    }

    // 非数字开头
    for (int i = 0; i < strlen(c); i++)
    {
        // 判断当前字符，是否合法
        bool is_legal = (c[i] >= '0' && c[i] <= '9') 
                    || (c[i] >= 'a' && c[i] <= 'z') 
                    || (c[i] >= 'A' && c[i] <= 'Z') 
                    || (c[i] == '_');
        if (!is_legal)
        {
            // 不是合法字符，输出no后退出程序
            cout << "no" << endl;
            return 0;
        }
    }

    // 程序执行到这里，意味着给定字符串不是数字开头、并且所有字符都合法，
    // 剩下的就是检查是否是 C 的关键字了
    for (int i = 0; i < 32; i++)
    {
        if(strcmp(c, identity[i]) == 0) {
            // 给定字符串是某个 C 的关键字，输出 no 后退出程序
            cout << "no" << endl;
            return 0;
        }
    }

    // 合法字符串
    cout << "yes" << endl;
    return 0;
}
