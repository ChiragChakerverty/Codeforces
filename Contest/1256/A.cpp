#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        if(s%n>b) cout<<"NO"<<endl;
        else if(s>((a*n)+b)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}