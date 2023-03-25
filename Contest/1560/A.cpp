#include <bits/stdc++.h>

using namespace std;

int arr[1001];


int main()
{
    int res = 1;
for(int i = 1; i <= 1000; res++){
    if(res%3 == 0 || res%10 == 3);
    else {
        arr[i] = res;
        i++;
    }
}
   int t;
   cin >> t;
   while(t--){
       int k;
       cin >> k;
       cout << arr[k] << endl;;
   }
}