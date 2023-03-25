#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n; cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    long int k=1; long int max=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>=arr[i])
        {
            k++;
            if(k>max) max=k;
        }
        else k=1;
    }
    cout<<max<<endl;
    return 0;
}