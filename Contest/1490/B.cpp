#include "bits/stdc++.h"
 
using namespace std;
 
#define fastI_O ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef unsigned long long ull;
typedef long long ll;
 
 
int main(){ fastI_O
    int t;
    cin >> t;      
    while(t--){
        int n;
        cin >> n;
        vector<int> rem(n,0);
        int arr[3] = {0};
        for(int i = 0; i < n; i++) {
            cin >> rem[i];
            arr[rem[i]%3]++;
        }
        int ans = 0;
        int c = n/3;
        if(arr[0] == arr[1] && arr[1] == arr[2]) cout << 0 << endl;
        else{
            if(arr[0] > c){
                int temp = arr[0] - c;
                if(arr[1] < c) {
                    ans += min(temp, c - arr[1]);
                    arr[1] += min(temp, c - arr[1]);
                    temp -= min(temp, c - arr[1]);
                }
                if(arr[2] < c) {
                    ans += min(temp, c - arr[2]) * 2;
                    arr[2] += min(temp, c - arr[2]);
                    temp -= min(temp, c - arr[2]);
                }
            }
            if(arr[1] > c){
                int temp = arr[1] - c;
                if(arr[2] < c) {
                    ans += min(temp, c - arr[2]);
                    arr[2] += min(temp, c - arr[2]);
                    temp -= min(temp, c - arr[2]);
                }
                if(arr[0] < c) {
                    ans += min(temp, c - arr[0]) * 2;
                    arr[0] += min(temp, c - arr[0]);
                    temp -= min(temp, c - arr[0]);
                }
            }
            if(arr[2] > c){
                int temp = arr[2] - c;
                if(arr[0] < c) {
                    ans += min(temp, c - arr[0]);
                    arr[0] += min(temp, c - arr[0]);
                    temp -= min(temp, c - arr[0]);
                }
                if(arr[1] < c) {
                    ans += min(temp, c - arr[1]) * 2;
                    arr[1] += min(temp, c - arr[1]);
                    temp -= min(temp, c - arr[1]);
                }
            }
            cout << ans << endl;
        }
    }           
}