#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{  
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int count_25=0;
    int count_50=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==25) count_25++;
        if(arr[i]==50)
        {   
            count_50++;
            count_25--;
        }
        if(count_25<0 || count_50<0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(arr[i]==100)
        {
            if(count_50>0) 
            {
                count_50--;
                count_25--;
            }
            else count_25=count_25-3;
        }
        if(count_25<0 || count_50<0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}