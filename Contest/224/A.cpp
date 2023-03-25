#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s1,s2,s3; cin>>s1>>s2>>s3;
    int a,b,c;
    a=sqrt((s1*s2)/s3);
    b=sqrt((s2*s3)/s1);
    c=sqrt((s1*s3)/s2);
    int ans=4*(a+b+c);
    cout<<ans<<endl;
    return 0;
}