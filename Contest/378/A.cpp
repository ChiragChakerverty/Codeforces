#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    int a_win = 0, draw = 0, b_win = 0;
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    {
        int player1 = abs(i - a);
        int player2 = abs(i - b);
        if (player1 < player2)
            a_win++;
        else if (player2 < player1)
            b_win++;
        else if (player1 == player2)
            draw++;
    }
    cout << a_win << " " << draw << " " << b_win << endl;
    return 0;
}