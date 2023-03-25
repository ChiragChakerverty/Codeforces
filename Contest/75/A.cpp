#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll a, b;
    cin >> a >> b;
    ll sum = a + b;
    string num1 = to_string(a);
    string num2 = to_string(b);
    string num3 = to_string(sum);
    string c = "", d = "", e = "";
    for (int i = 0; i < num1.size(); i++)
    {
        if (num1[i] != '0')
            c = c + num1[i];
    }
    for (int i = 0; i < num2.size(); i++)
    {
        if (num2[i] != '0')
            d = d + num2[i];
    }
    for (int i = 0; i < num3.size(); i++)
    {
        if (num3[i] != '0')
            e = e + num3[i];
    }
    a = stoi(c);
    b = stoi(d);
    sum = stoi(e);
    if (a + b == sum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}