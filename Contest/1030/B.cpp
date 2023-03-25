#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;

float area(int x1,int y1, int x2 , int y2, int x3,int y3)
{
    float ans=abs(((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2.0);
    return ans;
}

int main()
{
    float n,d; cin>>n>>d;
    float m; cin>>m;
    // area of rectangle 2 triangles ka area
    float area1=area(0,d,d,0,n,n-d);
    float area2=area(0,d,n-d,n,n,n-d);
    float area_of_rectangle=area1+area2;
    //cout<<area1<<" "<<area2<<" "<<area_of_rectangle<<endl;
    while(m--)
    {
        float x,y; cin>>x>>y;
        float a1=area(x,y,d,0,n,n-d);
        float a2=area(x,y,0,d,d,0);
        float a3=area(0,d,x,y,n-d,n);
        float a4=area(x,y,n-d,n,n,n-d);
        if((a1+a2+a3+a4)==area_of_rectangle) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}