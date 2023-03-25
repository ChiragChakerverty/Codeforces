#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b; cin>>a>>b;
    int hours=0;
    int c=b;
    while(a--)
    {
        hours++;
        b--;
        if(b==0) 
        {
            a++;
            b=c;
        }
    }
    cout<<hours<<endl;
    return 0;
}