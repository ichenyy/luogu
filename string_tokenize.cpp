#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string tok = ":"; // 分隔符
    vector<string> split; // 字符串数组，用来存放 H、M、S 的字符串
    string ins = s + tok; // 方便分割出 秒数
    
    // 找到第一个冒号在字符串中的位置
    size_t pos = ins.find(tok);
    size_t size = ins.size();

    // 只要冒号所在位置不是字符串的最后
    while (pos != string::npos)
    {
        // 从字符串 ins 的位置 0 到位置 pos 取出子串 sp
        string sp = ins.substr(0, pos);
        // 把子串添加到字符串数组
        split.push_back(sp);

        // 找下一个冒号
        ins = ins.substr(pos + 1, size);
        pos = ins.find(tok);
    }

    int H = stoi(split[0]); // 小时
    int M = stoi(split[1]); // 分钟
    int S = stoi(split[2]); // 秒

    cout << "输出结果：";
    cout << H << ":" << M << ":" << S << endl;
    return 0;
}
