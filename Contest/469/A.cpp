#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    int a[p];
    for(int i=0;i<p;i++) cin>>a[i];
    int y; cin>>y;
    int b[y];
    for(int i=0;i<y;i++) cin>>b[i];
    vector<int> v(p+y);
    for(int i=0;i<p;i++)
    {
        v[i]=a[i];
    }
    for(int i=0;i<y;i++)
    {
        v[p+i]=b[i];
    }
    set<int> s(v.begin(),v.end());
    if(s.size()==n) cout<<"I become the guy."<<endl;
    else  cout<<"Oh, my keyboard!"<<endl;
    return 0;
}