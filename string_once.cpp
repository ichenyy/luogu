#include <iostream>

using namespace std;

int main()
{
    char c[100000];
    cin.getline(c, 100000);
    int n = strlen(c);

    for (int i = 0; i < n; i++) {
        int f = 0; // ���ִ���
        for (int j = 0; j < n;j++) {
            if(c[i] == c[j] && i != j) {
                // ���ٳ���2�Σ��ڵ� i, j ����λ��
                f += 1;
            }
        }

        if(f == 0){
            // ������һ�Σ�������˳�����
            cout << c[i] <<endl;
            return 0;
        }
    }

    // �����ַ������ֲ�ֹһ��
    cout << "no" << endl;
    return 0;
}
