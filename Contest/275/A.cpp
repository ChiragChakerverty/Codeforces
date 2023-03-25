#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++) arr[i][j]=1;
    }
    int in[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++) cin>>in[i][j];
    }
   
    if(in[0][0]%2==1)
    {
        if(arr[0][0]==0) arr[0][0]++;
        else arr[0][0]--;
        if(arr[0][1]==0) arr[0][1]++;
        else arr[0][1]--;
        if(arr[1][0]==0) arr[1][0]++;
        else arr[1][0]--;
    }

    if(in[0][1]%2==1)
    {
        if(arr[0][1]==0) arr[0][1]++;
        else arr[0][1]--;
        if(arr[0][0]==0) arr[0][0]++;
        else arr[0][0]--;
        if(arr[1][1]==0) arr[1][1]++;
        else arr[1][1]--;
        if(arr[0][2]==0) arr[0][2]++;
        else arr[0][2]--;
    }



    if(in[0][2]%2==1)
    {
        if(arr[0][1]==0) arr[0][1]++;
        else arr[0][1]--;
        if(arr[1][2]==0) arr[1][2]++;
        else arr[1][2]--;
        if(arr[0][2]==0) arr[0][2]++;
        else arr[0][2]--;
    }


    if(in[1][0]%2==1)
    {
        if(arr[0][0]==0) arr[0][0]++;
        else arr[0][0]--;
        if(arr[1][0]==0) arr[1][0]++;
        else arr[1][0]--;
        if(arr[1][1]==0) arr[1][1]++;
        else arr[1][1]--;
        if(arr[2][0]==0) arr[2][0]++;
        else arr[2][0]--;
    }

    if(in[1][1]%2==1)
    {
        if(arr[0][1]==0) arr[0][1]++;
        else arr[0][1]--;
        if(arr[1][0]==0) arr[1][0]++;
        else arr[1][0]--;
        if(arr[2][1]==0) arr[2][1]++;
        else arr[2][1]--;
        if(arr[1][2]==0) arr[1][2]++;
        else arr[1][2]--;
        if(arr[1][1]==0) arr[1][1]++;
        else arr[1][1]--;
    }

    if(in[1][2]%2==1)
    {
        if(arr[0][2]==0) arr[0][2]++;
        else arr[0][2]--;
        if(arr[1][1]==0) arr[1][1]++;
        else arr[1][1]--;
        if(arr[2][2]==0) arr[2][2]++;
        else arr[2][2]--;
        if(arr[1][2]==0) arr[1][2]++;
        else arr[1][2]--;
    }

    if(in[2][0]%2==1)
    {
        if(arr[1][0]==0) arr[1][0]++;
        else arr[1][0]--;
        if(arr[2][1]==0) arr[2][1]++;
        else arr[2][1]--;
        if(arr[2][0]==0) arr[2][0]++;
        else arr[2][0]--;
    }

    if(in[2][1]%2==1)
    {
        if(arr[1][1]==0) arr[1][1]++;
        else arr[1][1]--;
        if(arr[2][0]==0) arr[2][0]++;
        else arr[2][0]--;
        if(arr[2][2]==0) arr[2][2]++;
        else arr[2][2]--;
        if(arr[2][1]==0) arr[2][1]++;
        else arr[2][1]--;
    }

    if(in[2][2]%2==1)
    {
        if(arr[1][2]==0) arr[1][2]++;
        else arr[1][2]--;
        if(arr[2][1]==0) arr[2][1]++;
        else arr[2][1]--;
        if(arr[2][2]==0) arr[2][2]++;
        else arr[2][2]--;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}