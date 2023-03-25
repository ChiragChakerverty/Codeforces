#include"bits/stdc++.h"
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
bool comp(pair<int, int> a, pair<int,int> b){
    return a.second <= b.second;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int t = lcm((int)s1.size(),(int)s2.size());
        // cout << t << endl;
        // cout << s1 << " " << s2 << endl;
        string s1_ = s1, s2_ = s2;
        for(int i = (int)s1.size(); i < t; i += (int)s1.size()){
            s1_ += s1;
        }
        for(int i = (int)s2.size(); i < t; i += (int)s2.size()){
            s2_ += s2;
        }
        // cout << s1_ << " " << s2_ << endl;
        if(s1_ == s2_) cout << s1_ << endl;
        else cout << -1  << endl;
    }
}