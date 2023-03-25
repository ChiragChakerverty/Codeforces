#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
     int n,x; cin>>n>>x;
        int pos=1;
        int minutes=0;
        while(n--)
        {
            int l,r; cin>>l>>r;
            while(pos<l)
            {
                pos=pos+x;
            }
            if(pos==l)
            {
                pos=r+1;
                minutes=minutes+(r-l+1);
            }
            else 
            {
                pos=pos-x;
                minutes=minutes+(r-pos+1);
                pos=r+1;
            }
        }
        cout<<minutes<<endl;
    return 0;
}