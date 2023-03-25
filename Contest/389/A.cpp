#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int func(int a, int b)
{
    int ans=__gcd(a,b);
    return ans;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int lets=arr[0];
    for(int i=1;i<n;i++)
    {
        lets=func(lets,arr[i]);
    }
    cout<<lets*n<<endl;
    return 0;
}