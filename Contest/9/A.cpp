#include<bits/stdc++.h>

using namespace std;

int main()
{
    int y,w; cin>>y>>w;
    int res=max(y,w);
    if(res==1) cout<<"1/1";
    else if(res==2) cout<<"5/6";
    else if(res==3) cout<<"2/3";
    else if(res==4) cout<<"1/2";
    else if(res==5) cout<<"1/3";
    else if(res==6) cout<<"1/6";
    return 0;
}