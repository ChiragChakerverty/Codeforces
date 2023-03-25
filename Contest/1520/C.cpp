#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n==1) cout<<1<<endl;
        else if(n==2) cout<<-1<<endl;
        else 
        {
            int a=n*n;
            vector<int> v(a);
            if(a%2==0)
            {
                for(int i=1,k=0;k<a/2;i=i+2,k++) v[k]=i;
                for(int i=2,k=(a/2);k<a;i=i+2,k++) v[k]=i;
            }
            else if(a%2)
            {
                for(int i=1,k=0;k<=a/2;i=i+2,k++) v[k]=i;
                for(int i=2,k=((a/2)+1);k<a;i=i+2,k++) v[k]=i;
            }
            int x=0;
            for(int i=0;i<a;i++)
            {
                cout<<v[i]<<" ";
                x++;
                if(x%n==0) cout<<endl;
            }
        }
    }
    return 0;
}