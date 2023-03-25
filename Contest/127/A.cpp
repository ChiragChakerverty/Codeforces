#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n,k;
    cin>>n>>k;
    double x,y;
    cin>>x>>y;
    double dis=sqrt(x*x + y*y);
   // cout<<dis<<endl;
    double distance=0;
    for(int i=0;i<n-1;i++)
    {
        double a=x;
        double b=y;
        cin>>x>>y;
        distance=distance+sqrt((x-a)*(x-a)+(y-b)*(y-b));
       // cout<<"distance="<<distance<<endl;
    }
    double ans=(distance)/50;
    ans=ans*k;
    std::cout << std::fixed;
    std::cout << std::setprecision(9)<<ans<<endl;
    return 0;
}