#include<bits/stdc++.h>
#define spc <<' '<<
#define vi vector<int>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
void opv(vector<int> &v) {for(auto i:v) cout<<i<<' '; cout<<endl;}
void ipv (vector<int> &v) {for(int i=0;i<v.size();i++) cin>>v[i];}
void oppv(vector<pair<int,int>> &v){for(auto i:v){cout<<i.first<<' '<<i.second; cout<<endl;}}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
    ll test=1;
    //cin>>test;
    while(test--)
    {
        ll n,m; cin>>n>>m;
        ll r=n%m;
        ll kmax=((n-m)*(n-m+1))/2;
        ll secondpart=((m-r)*(((n/m))*((n/m)-1)))/2;
        ll kmin=(r*ceil(((n*1.0)/m))*(ceil(((n*1.0)/m))-1))/2;
        // cout<<"kmin"<<kmin<<endl;
        // cout<<"second"<<secondpart<<endl;
        if(secondpart>0)kmin+=secondpart;
        cout<<kmin spc kmax;
 
    }
    return 0;
}