#include<bits/stdc++.h>

using namespace std;


int main()
{   
    map<int,int> m;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
    {
    cin>>arr[i];
    m[arr[i]]=i;
    }
    long long int count_vasya=0,count_petya=0;
    int q;
    cin>>q;
    while(q--)
    {
        int query;
        cin>>query;
        count_vasya=count_vasya+m[query]+1;
        count_petya+=n-m[query];
    }

   

   /* for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            
            if(queries[j]==arr[i])
            {   
                count_vasya++;
                count_petya=count_petya+n-i;
                break;
            }
            count_vasya++;
        }
    }*/

    cout<<count_vasya<<" "<<count_petya<<endl;
    return 0;
}