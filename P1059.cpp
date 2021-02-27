#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;

    int numbers[count];
    for (int i = 0; i < count; i++)
    {
        cin >> numbers[i];
    }

    // 第一步：去重
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i != j && numbers[i] == numbers[j] && numbers[i] != -1)
            {
                // 重复的值标为-1
                numbers[j] = -1;
            }
        }
    }

    // 第二步：排序(冒泡)
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i != j && numbers[i] < numbers[j])
            {
                int tmp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = tmp;
            }
        }
    }

    // 第三步：输出结果
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        if (numbers[i] != -1)
        {
            total += 1;
        }
    }
    cout << total << endl;

    for (int i = 0; i < count; i++)
    {
        if (numbers[i] != -1)
            cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
