#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isPentagonal(int n)//P=n*(3n-1)/2 => n=(1+sqrt(1+24*P))/6
{
    double d=sqrt(1+24*n);
    if(d==floor(d))
        if((1+(int)d)%6==0)
            return 1;
    return 0;
}

void main()
{
    int i,j,s,d;
    int pentagonal[3000];
    for(i=1;;i++)
    {
        pentagonal[i]=i*(3*i-1)/2;
        for(j=1;j<i;j++)
        {
            s=pentagonal[i]+pentagonal[j];
            if(isPentagonal(s))//if sum is pentagonal
            {
                d=pentagonal[i]-pentagonal[j];
                if(isPentagonal(d))//if difference is pentagonal
                {
                    printf("%d",d);//the first one we find will be the minimum
                    exit(0);
                }
            }
        }
    }
}
