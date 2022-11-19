#include <iostream>
#include <string>

using namespace std;

int main()
{
    // �ܹ�32���ؼ���
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

    // ����1��Ԫ��
    if (c[0] >= '0' && c[0] <= '9')
    {
        // ���ֿ�ͷ����� no ���˳�����
        cout << "no" << endl;
        return 0;
    }

    // �����ֿ�ͷ
    for (int i = 0; i < strlen(c); i++)
    {
        // �жϵ�ǰ�ַ����Ƿ�Ϸ�
        bool is_legal = (c[i] >= '0' && c[i] <= '9') 
                    || (c[i] >= 'a' && c[i] <= 'z') 
                    || (c[i] >= 'A' && c[i] <= 'Z') 
                    || (c[i] == '_');
        if (!is_legal)
        {
            // ���ǺϷ��ַ������no���˳�����
            cout << "no" << endl;
            return 0;
        }
    }

    // ����ִ�е������ζ�Ÿ����ַ����������ֿ�ͷ�����������ַ����Ϸ���
    // ʣ�µľ��Ǽ���Ƿ��� C �Ĺؼ�����
    for (int i = 0; i < 32; i++)
    {
        if(strcmp(c, identity[i]) == 0) {
            // �����ַ�����ĳ�� C �Ĺؼ��֣���� no ���˳�����
            cout << "no" << endl;
            return 0;
        }
    }

    // �Ϸ��ַ���
    cout << "yes" << endl;
    return 0;
}
