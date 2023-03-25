#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        if(n==1) cout<<0<<endl;
        else if(n==3) cout<<2<<endl;
        else
        {   
            long long int count_2=0;
            long long int count_3=0;
            int a=n;
            while(n>0)
            {
                if(n%2==0)
                {
                    count_2++;
                    n=n/2;
                }
                else if(n%3==0)
                {
                    count_3++;
                    n=n/3;
                }
                else n=n/10;
            }
            //cout<<count_2<<" "<<count_3<<endl;
            if((pow(3,count_3))*(pow(2,count_2))!=a) cout<<-1<<endl;
            else if(count_2>count_3) cout<<-1<<endl;
            else 
            {
                cout<<(2*count_3)-count_2<<endl;
            }
        }
    }
    return 0;
}