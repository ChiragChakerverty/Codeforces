#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,b; cin>>n>>m>>a>>b;
    int arr[3];
    arr[0]=n*a;
    if(n%m!=0) arr[1]=((n/m)+1)*b;
    else if(n%m==0) arr[1]=(n/m)*b;
    int rides=n%m;
    n=n/m;
    arr[2]=(rides*a)+(n*b);
    int ans=*min_element(arr,arr+3);
    cout<<ans<<endl;
    return 0;
}