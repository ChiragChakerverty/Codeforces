#include "bits/stdc++.h"
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
template <typename ...T> 
void  input(T&... t){(void)std::initializer_list<int>{(std::cin >> t, 0)...};}
 
#define fastI_O ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define for_all(a, x, y) a.begin() + x, a.begin() + y
#define for_int(i, n) for(int i = 0; i < n; i++)
#define vec2d(a) vector<vector<a>>
#define put(...) __VA_ARGS__; input(__VA_ARGS__);
 
int ceil(const int& a, const int& b) {return a/b + (a%b != 0);}
ll ceil(const ll& a, const ll& b) {return a/b + (a%b != 0);}
ull ceil(const ull& a, const ull& b) {return a/b + (a%b != 0);}
 
template <typename T>
void vin(vector<T>& arr){
    for(int i = 0; i < (int)arr.size(); i++) cin >> arr[i];
}   
template <typename T>
void vout(vector<T> arr){
    for(auto it : arr) cout << it << " ";
}
template <typename T>
void v2in(vector<T>& arr){
    for(int i = 0; i < (int)arr.size(); i++) {
        for(int j = 0; j < (int)arr[i].size(); j++)
            cin >> arr[i][j];
    }
}   
template <typename T>
void v2out(vector<T> arr){
    for(int i = 0; i < (int)arr.size(); i++) {
        for(int j = 0; j < (int)arr[i].size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
 
int main(){ fastI_O
    int put(n, m);
    vector<bool> ans(n, false);
    vector<string> stud(n,"");
    vector<int> sub(m,0);
    for_int(i, n){
        cin >> stud[i];
        for_int(j, m){
            sub[j] = max(sub[j], int(stud[i][j] - '0'));
        }
    }
    // for(auto it : sub) cout << it << " ";
    for_int(j, m){
        for_int(i, n){
            if((stud[i][j] - '0') == sub[j]) ans[i] = true;
        }
    }
    cout << count(all(ans), true);
}