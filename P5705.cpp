#include <iostream>

using namespace std;

int main()
{
    char input[5];

    cin >> input;
    for (int i = 5; i >= 0; i--)
    {
        cout << input[i];
    }
    cout << endl;

    return 0;
}
