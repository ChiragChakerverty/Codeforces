#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
      if (n==0)
      {
         cout<<"O-|-OOOO"<<endl; 
      }
      
    while (n>0)
    {
        int lastdigit = n%10;
        if (lastdigit==0)
        {
            cout<<"O-|-OOOO"<<endl;
        }
        if (lastdigit==1)
        {
            cout<<"O-|O-OOO"<<endl;
        }if (lastdigit==2)
        {
            cout<<"O-|OO-OO"<<endl;
        }if (lastdigit==3)
        {
            cout<<"O-|OOO-O"<<endl;
        }if (lastdigit==4)
        {
            cout<<"O-|OOOO-"<<endl;
        }if (lastdigit==5)
        {
            cout<<"-O|-OOOO"<<endl;
        }if (lastdigit==6)
        {
            cout<<"-O|O-OOO"<<endl;
        }if (lastdigit==7)
        {
            cout<<"-O|OO-OO"<<endl;
        }if (lastdigit==8)
        {
            cout<<"-O|OOO-O"<<endl;
        }if (lastdigit==9)
        {
            cout<<"-O|OOOO-"<<endl;
        }
        
         
        
        n = n/10;
    }
    
    return 0;
}