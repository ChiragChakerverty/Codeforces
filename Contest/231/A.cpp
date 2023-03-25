#include<iostream>

using namespace std;

int main()
{
    int n;
    int i,j,k;
    cin>>n;
    int sum[n];
    int arr[n][3];
    int problems;
    problems=0;
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    k=0;
    while(k<n){
        {
            sum[k]=0;
            sum[k]=arr[k][0]+arr[k][1]+arr[k][2];
            if(sum[k]>=2)
            problems++;
        }
        k++;
    }

    cout<<problems;
    
}