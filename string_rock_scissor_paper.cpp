#include <iostream>
#include <string>

using namespace std;

string check(const string &s1, const string &s2)
{
    // 两个玩家不同
    if (s1 == "Paper" && s2 == "Rock")
    {
        return "Player1";
    }
    else if (s1 == "Paper" && s2 == "Scissors")
    {
        return "Player2";
    }
    else if (s1 == "Rock" && s2 == "Paper")
    {
        return "Player2";
    }
    else if (s1 == "Rock" && s2 == "Scissors")
    {
        return "Player1";
    }
    else if (s1 == "Scissors" && s2 == "Paper")
    {
        return "Player1";
    }
    else if (s1 == "Scissors" && s2 == "Rock")
    {
        return "Player2";
    }

    // 两个玩家相同
    return "Tie";
}

int main() 
{
    int n;
    cin >> n;

    string input[102][2];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i][0] >> input[i][1];
    }

    for (int i = 0; i < n;i++){
        cout << check(input[i][0], input[i][1]) << endl;
    }

    return 0;
}