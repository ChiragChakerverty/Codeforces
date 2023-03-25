#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d1,d2,d3; cin>>d1>>d2>>d3;
    int a=2*(d1+d2);
    int b=d1+d2+d3;
    int c=2*(d1+d3);
    int d=2*(d2+d3);
    int x=min(d,(min(c,(min(a,b)))));
    cout<<x<<endl;
    return 0;
}