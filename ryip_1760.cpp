#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j, k;
    double s, a, b, l, r;
    double t1, t2, t11, t12, t21, t22, t23;
    cin >> s >> a >> b;

    l = 0, r = s;
    while (l <= r)
    {
        double mid = (l + r) / 2;

        t11 = mid / b;
        t12 = (s - mid) / a;
        t1 = t11 + t12;

        t21 = mid / b;
        t22 = (mid - mid / b * a) / (a + b);
        t23 = (s - t22 * a - t21 * a) / b;
        t2 = t21 + t22 + t23;
        
        if (abs(t1 - t2) <= 0.001)
        {
            cout << fixed << setprecision(2) << t1 << endl;
            return 0;
        }
        else if (t1 < t2)
            r = mid;
        else if (t1 > t2)
            l = mid;
    }

    return 0;
}