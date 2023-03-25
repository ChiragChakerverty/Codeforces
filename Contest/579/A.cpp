#include<bits/stdc++.h>

using namespace std;

long long int bsdecay(long long int a)
{
    long long int bact=1;
    while(bact<=a)
    {
        bact=bact*2;
    }
    if(bact==a) a=0;
    else
    {
        bact=bact/2;
        a=a-bact;
    }
   // cout<<a<<endl;
    return a;
}

int main()
{
    long long int x; cin>>x;
    int count=0;
    while((x!=0) && (x!=1))
    {
        x=bsdecay(x);
        count++;
    }
    if(x==0) cout<<count<<endl;
    else if(x==1) cout<<count+1<<endl;
    return 0;
}