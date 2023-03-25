#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> odd,even;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            if((x%2)==0) even.push_back(x);
            else odd.push_back(x); 
        }
        int a=even.size();
        int b=odd.size();
        while(a--)
        {
            ans=ans+n-1;
            n--;
        }
        for(int i=0;i<b-1;i++)
        {
            for(int j=i+1;j<b;j++)
            {
                int c=__gcd(odd[i],2*odd[j]);
                if(c>1) ans++;
            }
        }
        cout<<ans<<endl;
    }
}