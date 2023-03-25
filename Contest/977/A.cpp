#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n,k;
    cin>>n>>k;
    while(k--)
    {
        long int num=n%10;
        if(num!=0)
        n--;
        else  
        n=n/10;
    }
    cout<<n<<endl;
    return 0;
}