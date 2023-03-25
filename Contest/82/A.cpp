#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{  
    ll n; cin>>n;
    int counter=1;
    while(n>(5*counter))
    {
        n=n-(5*counter);
        counter=counter*2;
    }
    n=(n-1)/counter;
    string s[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cout<<s[n]<<endl;
    return 0;
}