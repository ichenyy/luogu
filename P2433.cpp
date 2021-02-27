#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int problem;
    cin >> problem;

    switch (problem)
    {
    case 1:
        cout << "I love Luogu!" << endl;
        break;
    case 2:
        cout << 6 << " " << 4 << endl;
        break;
    case 3:
        cout << 3 << " " << 12 << " " << 2 << endl;
        break;
    case 4:
        printf("%3.3f", double(500 / 3));
        break;
    case 5:
        cout << 13 << endl;
        break;
    case 6:
        cout << sqrt(6 * 6 + 9 * 9) << endl;
        break;
    case 7:
        cout << 110 << endl
             << 90 << endl
             << 90 << endl
             << endl;
        break;
    case 8:
    {
        float pi = 3.141593, r = 5;
        cout << pi * 2 * r << endl
             << pi * r * r << endl
             << (4 / 3) * pi * r * r * r << endl;
        break;
    }
    case 9:
        cout << 22 << endl;
        break;
    case 10:
        cout << "I love Luogu!" << endl;
        break;
    case 11:
        cout << "I love Luogu!" << endl;
        break;
    case 12:
    {
        char c = 'A';
        for (int i = 1; i < 26; i++)
        {
            c += 1;
            if (c == 'M')
                cout << i << endl;
        }
        cout << char(c + 18) << endl;
        break;
    }
    case 13:
        cout << "I love Luogu!" << endl;
        break;
    case 14:
        cout << "I love Luogu!" << endl;
        break;
    }

    return 0;
}
