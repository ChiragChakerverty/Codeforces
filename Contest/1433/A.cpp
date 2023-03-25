#include<bits/stdc++.h>

using namespace std;

int digits(int a)
{   
    int count=0;
    while(a>0)
    {
        int rem=a%10;
        count++;
        a=a/10;
    }
    return count;
}
int main()
{
    vector<int> v={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
    int t; cin>>t;
    while(t--)
    {   
        int ans=0;
        int x; cin>>x;
        for(int i=0;i<v.size();i++)
        {
            ans=ans+digits(v[i]);
            if(v[i]==x) break;
        }
        cout<<ans<<endl;
    }
    return 0;
}