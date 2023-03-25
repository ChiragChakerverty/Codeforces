#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n; cin>>n;
    long long int x; cin>>x;
    long long int icecreams=x;
    long long int child=0;
    char c; long long int d;
    while(n--)
    {
        cin>>c>>d;
        if(c=='+') icecreams=icecreams+d;
        else 
        {
            if(d>icecreams) child++;
            else icecreams=icecreams-d;
        }
    }
    cout<<icecreams<<" "<<child<<endl;
    return 0;
}