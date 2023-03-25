#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='h')
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]=='e')
                {
                    for(int k=j+1;k<s.size();k++)
                    {
                        if(s[k]=='l')
                        {
                            for(int x=k+1;x<s.size();x++)
                            {
                                if(s[x]=='l')
                                {
                                    for(int q=x+1;q<s.size();q++)
                                    {
                                        if(s[q]=='o')
                                        {
                                            cout<<"YES"<<endl;
                                            return 0;
                                        }

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}