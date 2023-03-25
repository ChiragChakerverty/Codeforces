#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a,b,c;

	for (int i = 0; i < n; i++){
		cin>>a;
		cin>>b;
		cin>>c;

		if (a + b == c)
		{
			cout<<"yes"<<endl;
		}
		else if(b + c == a)
		{
			cout<<"yes"<<endl;
		}
		else if(a + c == b)
		{
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
		
	}

	

	return 0;
}