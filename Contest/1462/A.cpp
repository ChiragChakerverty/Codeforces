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
        int arr[n+1];
        for(int i=1;i<=n;i++) cin>>arr[i];
        vector<int> v(n+9);
        for(int i=1,j=1;i<=n/2+1;i++,j++)
        {   
            v[j]=arr[i];
            j++;
            v[j]=arr[n+1-i];
        }
        for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    }
    return 0;
}