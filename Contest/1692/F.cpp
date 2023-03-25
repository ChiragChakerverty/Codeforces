#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
#define int long long

const ll mod = 1e9 + 7;


bool find3Numbers(vector<int> abhinav, int n, int sum)
{
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (abhinav[i] + abhinav[j] + abhinav[k] == sum)
				{
					return true;
				}
			}
		}
	}
	return false;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            x=x%10;
            m[x]++;
        }
        vector<int> abhinav;
        for(auto it=m.begin();it!=m.end();++it)
        {   
            int a=3;
            if(it->second>=3)
            {
                while(a--) abhinav.push_back(it->first);
            }
            else
            {
                while(it->second--) abhinav.push_back(it->first);
            } 
            a=3;
        }

        n=abhinav.size();

        bool ans=false;
        if(find3Numbers(abhinav,n,3)) ans=true;
        if(find3Numbers(abhinav,n,13)) ans=true;
        if(find3Numbers(abhinav,n,23)) ans=true;
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}