
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;cin>>t;
    while(t--){
     long long int n,x,i,y,z=0;
     cin>>x>>n;
     y=n%4;
     if(y==1) z=z-n;
     else if(y==2) z=1;
     else if(y==3) z=n+1;
     if(abs(x)%2==1) cout<<x-z<<endl;
     else cout<<x+z<<endl;
    }
return 0;
}