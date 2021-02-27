#include <iostream>

using namespace std;

int main()
{
    int m, t, s, answer;
    cin >> m >> t >> s;

    if (t == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    answer = s / t;
    if (answer >= m)
    {
        cout << 0 << endl;
    }
    else if (s % t == 0)
    {
        cout << m - s / t << endl;
    }
    else
    {
        cout << m - s / t - 1 << endl;
    }

    return 0;
}
