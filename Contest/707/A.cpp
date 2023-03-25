#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int a=n*m;
    char arr[a];
    for(int i=0;i<a;i++) cin>>arr[i];
    set<int> s(arr,arr+a); 
     s.erase('W');
     s.erase('B');
     s.erase('G');
    if(s.size()==0) cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;
    return 0;

}