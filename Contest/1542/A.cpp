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
        int a=2*n;
        int arr[a];
        for(int i=0;i<a;i++) cin>>arr[i];
        int even=0,odd=0;
        for(int i=0;i<a;i++)
        {
            if(arr[i]%2) odd++;
            else even++;
        }
        if(even==odd) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    return 0;
}