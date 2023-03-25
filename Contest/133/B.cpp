#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;

int power(int n)
{  
   ull ans=1;
   while(n--)
   {
      ans=(ans*2)%mod;
   }
   return ans%mod;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string p; cin>>p;
   string s="";
   
   for(int i=0;i<p.size();i++)
   {
      if(p[i]=='>') s=s+"1000";
      else if(p[i]=='<') s=s+"1001";
      else if(p[i]=='+') s=s+"1010";
      else if(p[i]=='-') s=s+"1011";
      else if(p[i]=='.') s=s+"1100";
      else if(p[i]==',') s=s+"1101";
      else if(p[i]=='[') s=s+"1110";
      else if(p[i]==']') s=s+"1111";
   }
   int n=s.size();
   ull ans=0;
   for(int i=0;i<n;i++)
   {  
      int multiplier=s[i]-'0';
      ans=(ans+(power(n-i-1)*multiplier))%mod;
   }
   cout<<ans%mod<<endl;
   return 0;
}