#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int sum=240;
    sum=sum-k;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum-5*i;
        if(sum>0) count++;
        else if(sum==0)
        {
            count++; 
            break;
        }
        else break;
    }
    cout<<count<<endl;
    return 0;
}