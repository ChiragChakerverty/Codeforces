#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


bool isprime(ull n)
{
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i<=sqrt(n);i=i+6)
    {
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
       ull n;
        cin >> n;
        ull temp = sqrt(n);
        if (temp * temp == n && isprime(temp))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}