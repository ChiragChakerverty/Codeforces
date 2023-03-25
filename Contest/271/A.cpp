#include<bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    cin>>y;
    for(int j=y+1;j<=10000;j++)
    {   
        int i=j;
        int ones,tens,hundreds,thousand;
        ones=i%10;
        i=i/10;
        tens=i%10;
        i=i/10;
        hundreds=i%10;
        i=i/10;
        thousand=i;
        if(ones!=tens && tens!=hundreds && hundreds!=thousand && ones!=hundreds && ones!=thousand && tens!=thousand)
        {
            cout<<j<<endl;
            break;
        }
    }
    return 0;
}