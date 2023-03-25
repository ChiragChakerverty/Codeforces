#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int cmp[100000] = {0};
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
 
    pair<int,int> arr[n];
    pair<int,int> ans[n];
 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].first>>arr[i].second;
        cmp[arr[i].first]++;
        ans[i].first = n-1;
        ans[i].second = 0;
    }
    for (int i = 0; i < n; i++)
    {
         
        ans[i].first += cmp[arr[i].second];
        ans[i].second += (n-1-cmp[arr[i].second]);
         
    }
    
    
   for (int i = 0; i < n; i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    
 
    return 0;
}