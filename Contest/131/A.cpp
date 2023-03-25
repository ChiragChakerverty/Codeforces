#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int flag = 0;
    for (int i = 1; i < s.size(); i++)
    {
       if (s[i]>96)
       {
          flag = 1;
          break;
       }
       
       
       
    }
    if (flag == 1)
    {
        cout<<s;
    }
    else
    {
     
     if (s[0] >96)
     {
         s[0] -= 32;
     }
     else
     {
         s[0] += 32;
     }
     
     cout<<s[0];
     for (int i = 1; i < s.size(); i++)
     {
         if (s[i]<96)
         {
             s[i] += 32;
             cout<<s[i];
         }
         
     }
     
     
    }
    
    
    return 0;
}