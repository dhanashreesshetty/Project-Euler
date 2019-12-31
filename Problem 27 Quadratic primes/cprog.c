#include<stdio.h>
#include<stdlib.h>

int isPrime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int check(int a,int b)
{
    int i=1, count=1;
    while(isPrime(abs(i*i+a*i+b)))
    {
        count++;
        i++;
    }
    return count;
}

void main()
{
    int i, j, count, maxcount=0, product;
    for(i=-999;i<1000;i++)
    {
        for(j=-1000;j<1001;j++)
        {
            if(abs(isPrime(j)))//go ahead only if b in n*n+n*a+b=0 is prime, since we start from n=0
            {
                count=check(i,j);
                if(count>maxcount)
                {
                    product=i*j;
                    maxcount=count;
                }
            }
        }
    }
    printf("%d",product);
}

