#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n,v; cin>>n>>v;
    int sellers=0;
    int i=1;
    vector<int> ans;
    while(n--)
    {
        int k; cin>>k;
        int arr[k]; for(int j=0;j<k;j++) cin>>arr[j];
        sort(arr,arr+k);
        if(arr[0]<v)
        {
            sellers++;
            ans.push_back(i);
        }
        i++;
    }
    cout<<sellers<<endl;
    if(sellers!=0)
    for(int x=0;x<ans.size();x++) cout<<ans[x]<<" ";
    return 0;
}