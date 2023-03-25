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
        ll arr[4];
        int odd=0;
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
            if(arr[i]%2) odd++;
        }
        if(odd==0 || odd==1) 
        {
            cout<<"YES"<<endl;
            continue;
        }
        else 
        {   
            if(arr[0]!=0 && arr[1]!=0 && arr[2]!=0)
            {
            arr[0]=arr[0]-1;
            arr[1]=arr[1]-1;
            arr[2]=arr[2]-1;
            arr[3]=arr[3]+(3*1);
            int new_odd=0;
            for(int i=0;i<4;i++)
            {
                if(arr[i]%2) new_odd++;
            }
            if(new_odd==0 || new_odd==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;}
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}