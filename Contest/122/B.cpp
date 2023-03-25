#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s; cin>>s;
   int count_4=0,count_7=0;
   for(int i=0;i<s.size();i++)
   {
      if(s[i]=='4') count_4++;
      else if(s[i]=='7') count_7++;
   }
   if(count_4==0 && count_7==0) cout<<-1<<endl;
   else if(count_4>=count_7) cout<<4<<endl;
   else cout<<7<<endl;
   return 0;
}