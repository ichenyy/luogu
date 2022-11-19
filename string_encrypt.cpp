#include <iostream>

using namespace std;

int main()
{
    char c[80];
    cin.getline(c, 80);
    int n = strlen(c);

    for (int i = 0; i < n; i++)
    {
        if ((c[i] >= 'a' && c[i] <= 'y') || (c[i] >= 'A' && c[i] <= 'Y'))
        {
            c[i] += 1;
        }
        else if (c[i] == 'z' || c[i] == 'Z'){
            c[i] -= 26;
        }
        cout << c[i];
    }
    cout << endl;

    return 0;
}
