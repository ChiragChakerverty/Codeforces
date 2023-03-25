#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

bool isprime(int n)
{
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) count++;
    }
    if(count==0) return true;
    else return false;
}
int main()
{
    int n; cin>>n;
    int ans=0;
    vector<int> prime;
    prime.push_back(2);
    for(int i=3;i<=n;i++)
    {
        if(isprime(i)) prime.push_back(i);
    }
    for(int i=3;i<=n;i++)
    {
        int count_of_prime_num=0;
        for(int j=0;j<prime.size();j++) 
        {
            if(i%prime[j]==0) count_of_prime_num++;
        }
        if(count_of_prime_num==2) ans++;
    }
    cout<<ans<<endl;
    return 0;
}