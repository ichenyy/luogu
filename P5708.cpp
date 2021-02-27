#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("%0.1f\n", area);
    return 0;
}
