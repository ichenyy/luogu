// http://oj.ryipedu.com/problem.php?id=1245 
// ��ӡ���ξ��� (������ʾ��ʵ��һ�����ξ��󡢻��ξ���)
#include <iostream>
#include <iomanip>

using namespace std;

const int N = 100;
int a[N][N];

int main()
{
    int n;      // �����ά��
    cin >> n;

    int index,  // ÿ�����ӵı��
        i,      // �к�
        j;      // �к�
    i = j = 0;
    index = 1; 

    // ģ����ξ�������ɹ���
    while (index <= n*n)
    {
        // ����������һ��
        while(a[i][j] == 0 && j < n)
            a[i][j++] = index++;
        i++; // ����һ��
        j--; // ����һ��

        // ���ϵ�������һ��
        while (a[i][j] == 0 && i < n)
            a[i++][j] = index++;
        i--;
        j--;

        // ���ҵ�������һ��
        while(a[i][j] == 0 && j >= 0)
            a[i][j--] = index++;
        i--;
        j++;

        // ���µ�������һ��
        while(a[i][j] == 0 && i >= 0)
            a[i--][j] = index++;
        i++;
        j++;
    }

    // �������
    for (i = 0; i < n; i++) {
        for (j = 0; j < n;j++){
            cout <<setw(3)<< a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
