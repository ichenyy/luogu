#include <iostream>

using namespace std;

int main()
{
    char c[101];
    cin.getline(c, 101);

    int n = strlen(c);
    for (int i = 0; i < (n - 1); i+=1)
    {
        // ��ǰ�ַ� + ��һ���ַ�
        char cc = c[i] + c[i + 1];
        cout << cc;
    }

    // ���һ���ַ� + ��һ���ַ�
    char last = c[n - 1] + c[0];
    cout << last << endl;

    return 0;
}
