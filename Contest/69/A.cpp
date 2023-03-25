#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y,z,sum1=0,sum2=0,sum3=0;
    while(n--)
    {
        cin>>x>>y>>z;
        sum1=x+sum1;
        sum2=y+sum2;
        sum3=z+sum3;
    }
    if(sum1==0 && sum2==0 && sum3==0) cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
    return 0;
}
// physics ki vajah se h error chill //