#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        if(n%2==0) cout<<0<<endl;
        else 
        {
            string s;
            s=to_string(n);
            if(s[0]%2==0) cout<<1<<endl;
            else  
            {
                for(int i=1;i<s.size();i++)
                {
                    if(s[i]%2==0)
                    {
                        cout<<2<<endl;
                        count++;
                        break;
                    }
                }
                if(count==0)
                cout<<-1<<endl;
            }
        }
        
    }
    return 0;
}