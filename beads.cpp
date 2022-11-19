/*
ID: geekr1
TASK: beads
LANG: C++
*/
#include <iostream>
#include <string>

using namespace std;

char neckless[350];

int main()
{
    int size;
    cin >> size;
    cout << "size=" << size << endl;

    for (int i = 0; i <= size; i++)
    {
        char c = getchar();
        if(c == ' ')
            continue;

        neckless[i] = c;
        cout << neckless[i] << endl;
    }

    return 0;
}