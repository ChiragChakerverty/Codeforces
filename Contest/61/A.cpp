#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int arr[n];
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-b[i])==1)
        arr[i]=1;
        else  
        arr[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;

}