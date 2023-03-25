#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin>>s;
    int count=0;
    for(int i=0;i<int(s.size())-2;i++)
    {
        if(s[i]=='Q')
        {
            for(int j=i+1;j<int(s.size())-1;j++)
            {
                if(s[j]=='A')
                {
                    for(int k=j+1;k<int(s.size());k++)
                    {
                        if(s[k]=='Q')
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }
    
    cout<<count<<endl;
    return 0;
}