
#include <bits/stdc++.h>
using namespace std;

#define Chirag ios_base::sync_with_stdio(false); cin.tie(NULL);

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;

 
int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid,int right);

int mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}
 

int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left)
    {
        mid = (right + left) / 2;
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}
 

int merge(int arr[], int temp[], int left, int mid,int right)
{
    int i, j, k;
    int inv_count = 0;
    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else 
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }
    while (i <= mid - 1)
    temp[k++] = arr[i++];
    while (j <= right)
    temp[k++] = arr[j++]; 
    for (i = left; i <= right; i++)
    arr[i] = temp[i];
    return inv_count;
}
 



int32_t main()
{
   Chirag
   ll t;
   cin >> t;
   while(t--)
   {
      int n; cin>>n;
      int simple[n],left[n],right[n];
      for(int i=0;i<n;i++)
      {
        int x; cin>>x;
        simple[i]=x;
        left[i]=x;
        right[i]=x;
      }
      int ans1=mergeSort(simple,n);
      for(int i=0;i<n;i++)
      {
        if(left[i]==1) continue;
        else 
        {
            left[i]=1;
            break;
        }
      }
      int ans2=mergeSort(left,n);
      for(int i=n-1;i>=0;i--)
      {
        if(right[i]==0) continue;
        else 
        {
            right[i]=0;
            break;
        }
      }
      int ans3=mergeSort(right,n);
      cout<<max(ans1,max(ans2,ans3))<<endl;
   }
   return 0;
}