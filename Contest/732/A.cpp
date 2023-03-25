#include<stdio.h>
 
int main(){
    int a,b, c,d,n;
    
        scanf("%d %d",&b,&c);
        n=1;
        while(n<11)
        {
            if(((n*b)%10==0)||((n*b)%10==c))
            {
                break;
            }
            n++;
        }
 
       
printf("%d\n",n);
    
    return 0;
}