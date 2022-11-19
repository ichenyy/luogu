#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int m, n; // m ���У�n ����
    cin >> m >> n;

    // ��ά�����ŵ��������
    int h[10][10]; 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> h[i][j];
        }
    }

    // ����ͬѧ�����һά���飬������ 10*10=100��ͬѧ
    int a[100];
    // һά������±��0��ʼ
    int a_index = 0;
    // ������ߵĺͣ���������ƽ�����
    int total_height = 0;

    // ��������Ķ�ά����
    // ע�⣺����ѭ�����ȱ����С��ٱ����У��� n��m �Ե������� j��i �Ե�
    for (int i = 0; i < n; i++)
    {
        int column_max = 0; // ��������
        for (int j = 0; j < m; j++)
        {
            int current = h[j][i];
            
            a[a_index++] = current;  // ת��һά���飬ע�� a_index++ ��ʾ��ֵ���±������ƶ�
            total_height += current; // �ۼ������˵����

            if (current > column_max)
            {
                column_max = current;
            }
        }
        // 1. ���ÿһ�е����ֵ
        cout << column_max << endl;
    }

    // 2. ��������߽������򣬼�ð��
    for (int i = 0; i < m * n; i++)
    {
        for (int j = 0; j < m * n; j++)
        {
            // �Ӹߵ���
            if(a[j] < a[i]) {
                // ���� a[i] a[j]
                int ai = a[i];
                a[i] = a[j];
                a[j] = ai;
            }
        }
    }
    // �Ӹߵ��ͣ���һ��������������
    for (int i = 0; i < m * n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // 3.��ƽ����߲����
    // round ��������������ȡ���ı�׼�⺯��
    // ��1.0��Ϊ�˰�������ɸ���������������ͬѧ������ʱ������С����
    int average = round((total_height * 1.0) / (m * n));
    cout << average << endl;

    // 4. �����С��ƽ����ߵ�ͬѧ����
    int count = 0;
    for (int i = 0; i < m * n; i++)
    {
        if(a[i] >= average){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
