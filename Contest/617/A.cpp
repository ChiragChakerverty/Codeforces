#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int pos=0;
    int count=0;
    while(pos!=x)
    {
        if(x-pos>=5)
        {
            pos=pos+5;
            count++;
        }
        else if(x-pos>=4)
        {
            pos=pos+4;
            count++;
        }
        else if(x-pos>=3)
        {
            pos=pos+3;
            count++;
        }
        else if(x-pos>=2)
        {
            pos=pos+2;
            count++;
        }
        else if(x-pos>=1)
        {
            pos=pos+1;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}