#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,a,b,c,d; cin>>n>>a>>b>>c>>d;
        int lower=a-b; int higher=a+b;
        int low_pack=c-d; int high_pack=c+d;
        if(lower*n>=low_pack && lower*n<=high_pack) cout<<"Yes"<<endl;
        else if(higher*n>=low_pack && lower*n<=high_pack) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}