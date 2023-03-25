#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    long long int arr[4]={s1,s2,s3,s4};
    int count_s1=0,count_s2=0,count_s3=0,count_s4=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]==s1)
        count_s1++;
    }

    for(int i=0;i<4;i++)
    {
        if(arr[i]==s2)
        count_s2++;
    }

    for(int i=0;i<4;i++)
    {
        if(arr[i]==s3)
        count_s3++;
    }

    for(int i=0;i<4;i++)
    {
        if(arr[i]==s4)
        count_s4++;
    }

    // cout<<count_s1<<" "<<count_s2<<" "<<count_s3<<" "<<count_s4<<endl;

    if((s1==s2 && s3==s4 && s1!=s4)|| (s1==s3 && s2==s4 && s1!=s2)|| (s1==s4 && s2==s3 && s1!=s2))
    {
        cout<<2<<endl;
        return 0;
    }
    int count=max(count_s4,max(count_s3,max(count_s1,count_s2)));
    if(count==4) cout<<3<<endl;
    else if(count==3) cout<<2<<endl;
    else if(count==2) cout<<1<<endl;
    else if(count==1) cout<<0<<endl;

    return 0;
}