#include <iostream>

using namespace std;

int main()
{
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    int h, m;
    if (m2 < m1)
    {
        h = h2 - h1 - 1;
        m = m2 + 60 - m1;
    }
    else
    {
        h = h2 - h1;
        m = m2 - m1;
    }

    cout << h << " " << m << endl;
    return 0;
}
