#include <bits/stdc++.h>
using namespace std;
#define int long long
 
// Get strapped or get clapped ~ Hasbulla
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
      int t;
      cin>>t;
 
     while (t--)
    {
        int n,k;
        cin>>n>>k;
 
        int count = 1;
        int hrs = 0;
        
        while (count<n)
        {
            
           
            if (pow(2,hrs)<=k)
            {
                count *= 2;
                 hrs++;
            }
            else
            {
                break;
            }
            
            
            
        }
        if (count >= n)
        {
            cout<<hrs<<endl;
            continue;
        }
        
        if ((n-count) % k == 0)
        {
            hrs += (n-count)/k;
        }
        else
        {
            hrs += (n-count)/k;
            hrs++;
        }
        
        
 
        cout<<hrs<<endl;
        
 
    }
 
    return 0;
}