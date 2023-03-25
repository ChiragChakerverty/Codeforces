#include<bits/stdc++.h>

using namespace std;

int main()
{
    int chest=0,biceps=0,back=0;
    int n;
    cin>>n;
    vector<int> v(n+10,0);
    for(int i=1;i<=n;i++) cin>>v[i];
   // for(int i=1;i<=n+1;i++) cout<<v[i]<<" ";
    
    int i,j,k;
    for(i=1,j=2,k=3;i<n+3;i=i+3,j=j+3,k=k+3)
    {   
        chest=chest+v[i];
        biceps=biceps+v[j];
        back=back+v[k];
      //  cout<<" "<<chest<<" "<<biceps<<" "<<back<<endl;
    }
  // cout<<chest<<" "<<biceps<<" "<<back<<endl;
    int ans=max(chest,max(biceps,back));
    if(ans==chest) cout<<"chest"<<endl;
    else if(ans==biceps) cout<<"biceps"<<endl;
    else if(ans==back) cout<<"back"<<endl;
    return 0;
}