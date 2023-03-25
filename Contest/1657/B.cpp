#include <stdio.h>
#include <math.h>
 
int main()
{
    int a, b, c, d, e, n, x, y;
    long long int sum;
    scanf("%d", &a);
    while (a--)
    {	c=0;
        sum = 0;
        scanf("%d %d %d %d", &n, &b, &x, &y);
      for(int i =0;i<=n;i++){
          sum+=c;
          if(c+x<=b){
              c+=x;
          }
          else{c-=y;}
      }
      printf("%lld\n",sum);
    }
    return 0;
}