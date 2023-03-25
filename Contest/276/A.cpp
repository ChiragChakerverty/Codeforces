#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


int main()
{
    ll n,k; cin>>n>>k;
       ll joy=0,max_joy=-99999999999999999;
       while(n--)
       {
           ll f,t; cin>>f>>t;
           if(t>k) joy=f-(t-k);
           else joy=f;
           if(joy>max_joy) max_joy=joy;
       }
       cout<<max_joy<<endl;
    
    return 0;
}