#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
int main()
{
    //ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    ll a;
    cin >> a;
 
    for (int i = 1; i <= 16; i++)
    {
        int num = a + i;
        if(num<0) num=num*(-1);
        int flag = 1;
        while (num > 0)
        {
            int rem = num % 10;
            if (rem == 8)
            {
                flag = 0;
                break;
            }
            num = num / 10;
        }
        if (flag == 0)
        {
            cout << i << endl;
            break;
        }
    }
 
    return 0;
}