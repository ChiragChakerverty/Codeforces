#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    int n,a,b,c; cin>>n>>a>>b>>c;
    int count=0;
    for(int i=0;i<=4000;i++)
    {
        for(int j=0;j<=4000;j++)
        {
            int kc=n-(i*a + j*b);
            if(kc<0) break;
            if(kc%c==0)
            {
                int k=kc/c;
                count=max(count,i+j+k);
            }
        }
    }
    cout<<count<<endl;
    return 0;
}