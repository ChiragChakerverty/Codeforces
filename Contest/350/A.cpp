#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


int main()
{
    int n,m; cin>>n>>m;
    int correct[n],incorrect[m];
    for(int i=0;i<n;i++) cin>>correct[i];
    for(int i=0;i<m;i++) cin>>incorrect[i];
    sort(correct,correct+n);
    sort(incorrect,incorrect+m);
    int v=-1;
    for(int i=correct[n-1];i<incorrect[0];i++)
    {
        v=i;
        if(v>=2*(correct[0])) break;
        if(i==incorrect[0]-1)
        {
            if(v<(2*correct[0])) v=-1;
        }
    }
    cout<<v<<endl;
    return 0;

    
}