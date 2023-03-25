#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float x,y;
        cin>>x>>y;
        int c1,c2;
        float d1,d2;
        for(c1=0;c1<=50;c1++)
        {   
            d1=c1;
            c2=(abs(x)+abs(y)-2*abs(c1))/2;
            d2=((x)+(y)-2*(d1))/2;
            if(c2==d2)
            {   
                if(2*(abs(x-c1)+abs(y-c2))==abs(x)+abs(y))
                {
                cout<<c1<<" "<<c2<<endl;
                break;}
            }
        }
        if(c2!=d2)
        cout<<-1<<" "<<-1<<endl;
    }
    return 0;
}