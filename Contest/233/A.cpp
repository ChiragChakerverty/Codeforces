#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<-1;
        return 0;
    }

    
    vector<int> v(101);
    for(int i=1;i<=n;i++)
    v[i]=i;
    for(int i=2;i<=n;i=i+2)
    v[i]--;
    for(int i=1;i<=n;i=i+2)
    v[i]++;

    for(int i=1;i<=n;i++)
    cout<<v[i]<<" ";

    return 0;
}