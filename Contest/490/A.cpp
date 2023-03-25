#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n; cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int count_1=0,count_2=0,count_3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1) count_1++;
        else if(arr[i]==2) count_2++;
        else if(arr[i]==3) count_3++;
    }
    if(count_1==0 || count_2==0 || count_3==0) cout<<0<<endl;
    else 
    {
        int w=min(count_3,min(count_1,count_2));
        cout<<w<<endl;
        while(w--)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1)
                {
                    cout<<i+1<<" ";
                    arr[i]=100;
                    break;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(arr[i]==2)
                {
                    cout<<i+1<<" ";
                    arr[i]=100;
                    break;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(arr[i]==3)
                {
                    cout<<i+1<<" ";
                    arr[i]=100;
                    break;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}