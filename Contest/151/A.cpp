#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toasts=0;
    int drinks=k*l;
    int slices=c*d;
    int salt=p;
    int a=32000;
    while(a--)
    {
        drinks=drinks-nl;
        slices=slices-1;
        salt=salt-np;
        // cout<<drinks<<" "<<slices<<" "<<salt<<endl;
        if(drinks>0 && slices>0 && salt>0)
        toasts++;
        else if(drinks==0 && slices==0 && salt==0 )
        {
            toasts++;
            break;
        }
        else if((drinks>0 && slices==0 && salt==0)|| (drinks==0 && slices>0 && salt==0) || (drinks==0 && slices==0 && salt>0))
        {
            toasts++;
            break;
        }
        else if((drinks>0 && slices>0 && salt==0)|| (drinks==0 && slices>0 && salt>0) || (drinks>0 && slices==0 && salt>0))
        {
            toasts++;
            break;
        } 
        if(drinks<=0 || slices<=0 || salt<=0)
        break;
    }
    cout<<toasts/n<<endl;
    return 0;   
}