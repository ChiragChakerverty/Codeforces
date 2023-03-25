#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int size=0;
    int i=1;
    int j=0;
    while(n>0)
    {
        n=n-i;
        size++;
        j++;
        i=i+j;
        i++;
    }
    if(n==0) cout<<size<<endl;
    else cout<<size-1<<endl;
    return 0;
}