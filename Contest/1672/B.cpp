#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string s2;
        cin >> s2;
        string s1 = "";
        int flag = 1;
        if (s2.size() < 2)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {   
            int flag=1;
            int count_a = 0, count_b = 0;
            for (int i = 0; i < s2.size(); i++)
            {
                if (s2[i] == 'A')
                    count_a++;
                else
                    count_b++;
                if (count_b > count_a)
                {
                    flag=0;
                    break;
                }
            }
            if(count_b==0 || s2[s2.size()-1]=='A')
            flag=0;
            if(flag==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}