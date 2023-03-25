#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int people[n];
    for(int i=0;i<n;i++) cin>>people[i];
 // for(int i=0;i<n;i++) cout<<people[i]<<" ";
    int products[n][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<people[i];j++)
        {
            cin>>products[i][j];
        }
    }
    int min=INT_MAX;
    int time=0;
    for(int i=0;i<n;i++)
    {   
        int sum_products=0;
        for(int j=0;j<people[i];j++)
        {
            sum_products=sum_products+products[i][j];
           // cout<<products[i][j]<<" ";
           // cout<<j<<endl;
           // cout<<"people="<<people[i]<<endl;
        }
       // cout<<endl;
       // cout<<"sum of products="<<sum_products<<endl;
        time=(sum_products*5)+people[i]*15;
        if(time<min)
        min=time;
        //cout<<"time="<<time<<endl;
    }

  cout<<min<<endl;
    return 0;
}