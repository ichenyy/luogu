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
            // ��ǰ�ַ����ǿո�ֱ�����
            cout << c[i];
            is_space = false;
        }
        else if (!is_space)
        {
            // ��ǰ�ַ��ǿո񣬲����ǵ�1���ո�
            cout << c[i];
            is_space = true;
        }
    }

    // �����������з����Ǹ���ϰ��
    cout << endl;

    return 0;
}
