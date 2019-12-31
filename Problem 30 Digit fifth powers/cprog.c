#include<stdio.h>
#include<math.h>
#include<limits.h>
void main()
{
    int i, sum, n, total=0;
    for(i=10;i<=355000;i++)
    {
        sum=0;
        n=i;
        while(n>0)
        {
            sum+=pow(n%10,5);
            n/=10;
        }
        if(sum==i)
          total+=sum;
    }
    printf("%d",total);
}
