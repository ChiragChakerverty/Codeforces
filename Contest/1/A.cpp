#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n,m,a; cin>>n>>m>>a;
    long long int b=(ceil(m/a))*(ceil(n/a));
    cout<<b<<endl;
    return 0;
}