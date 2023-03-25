#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,k; cin>>n>>k;
    if(ceil(n/2.0)>=k)
    {   
        cout<<(2*k)-1<<endl;
    }
    else 
    {   if(n%2==0)
        {   
            k=k-(n/2);
            cout<<2*k<<endl;
        }
        else
        {   
            k=k-(n/2)-1;
            cout<<2*k<<endl;
        }
    }
    return 0;

}