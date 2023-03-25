#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int capacity=0;
    int max=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        max=max+b-a;
        if(max>capacity)
        capacity=max;
    }
    cout<<capacity<<endl;
    return 0;
}