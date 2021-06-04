#include <iostream>

using namespace std;

int main()
{
    char input[100];
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};

    char c;
    while (cin >> std::noskipws >> c)
    {
        if (c == '\n')
            break;
        cout << c;

        // 搜索元音字符数组
        for (int j = 0; j < 5; j++)
        {
            if (c == vowel[j])
            {
                // 有找到的话，连续读取2个字符，但是不输出
                cin.ignore();
                cin.ignore();
                break;
            }
        }
    }

    cout << endl;
    return 0;
}