#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int a, b, n;
        cin >> a >> b >> n;
        long int count=0;
        long long int c,d;
        c=min(a,b);
        d=max(a,b);
        int x=100;
        while(x--)
        {
            c=c+d; 
            count++;
            if(c>n) break;
            d=d+c; count++;
            if(d>n) break;
        }
        cout<<count<<endl;
    }
    return 0;
}