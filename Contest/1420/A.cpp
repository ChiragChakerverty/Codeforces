#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
const ll mod = 1e9 + 7;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int flag1=0,flag2=0;
        int n; cin>>n;
        unordered_set<int> s;
        int arr[n],copy[n];
        for(int i=0;i<n;i++)
        {   
            int x; cin>>x;
            arr[i]=x;
            copy[i]=x;
            s.insert(x);
        }
        if(s.size()==n) flag1=1;
        sort(arr,arr+n);
        reverse(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=copy[i])
            {
                flag2=1;
                break;
            }
        }
        if(flag1==1 && flag2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}