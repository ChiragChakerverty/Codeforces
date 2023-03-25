#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s, t;
   cin >> s >> t;
   int n1 = s.size();
   int n2 = t.size();
   if (n1 == n2)
   {
      sort(s.begin(), s.end());
      sort(t.begin(), t.end());
      if (s == t)
      {
         cout << "array" << endl;
         return 0;
      }
   }
   if (n1 >= n2)
   {  
      int count=0;
      for(int i=0,j=0;(i<n1 && j<n2);i++)
      {
         if(t[j]==s[i])
         {
            j++;
            count++;
         }
      }
      if(count==n2)
      {
         cout<<"automaton"<<endl;
         return 0;
      }
      for (int i = 0; i < n2; i++)
      {
         auto it = find(s.begin(), s.end(), t[i]);
         if (it == s.end())
         {
            cout << "need tree" << endl;
            return 0;
         }
         else
         {
            s.erase(it);
         }
      }
      cout << "both" << endl;
   }
   else cout<<"need tree"<<endl;
   return 0;
}