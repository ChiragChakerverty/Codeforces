#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
typedef vector<int> vi;
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
	ll test=1;
	//cin>>test;
	while(test--)
	{
		int n,t; cin>>n>>t;
		if(n==1 and t==10){cout<<-1; return 0;}
		if(t==10)
		{
			cout<<1;
			n--;
			while(n--)cout<<0; return 0;
		}
		while(n--)cout<<t;
	}
	return 0;
}