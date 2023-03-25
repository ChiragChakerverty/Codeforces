#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int maximum,minimum,index_low,index_high;
        maximum=*max_element(v.begin(),v.end());
        minimum=*min_element(v.begin(),v.end());
        
        for(int i=0;i<n;i++)
        {
            if(v[i]==maximum) index_high=i;
            if(v[i]==minimum) index_low=i;
        }
        //cout<<index_low<<" "<<index_high<<endl;
        int ans1,ans2,ans3,ans4;
        if(index_high>index_low) ans1=index_high+1;
        else if(index_low>index_high) ans1=index_low+1;
        if(index_high>index_low) ans2=n-index_low;
        else if(index_low>index_high) ans2=n-index_high;
        ans3=index_low+1+n-index_high;
        ans4=n-index_low+index_high+1;
       // cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<endl;
        int ans=min(ans4,(min(ans3,(min(ans1,ans2)))));
        cout<<ans<<endl;
    }
    return 0;
}