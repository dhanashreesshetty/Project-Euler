#include<stdio.h>
#include<math.h>

int isprime(int a)
{
    int i;
    for(i=2;i<=sqrt(a);i++)
        if(a%i==0)
            return 0;
    return 1;
}

void main()
{
    int i, k=1;
    double sum=5;
    while(k<=333333)
    {
        i=6*(double)k-1;
        if(isprime(i))
            sum+=i;
        i=6*(double)k+1;
        if(isprime(i))
            sum+=i;
        k++;
    }
    printf("%lf",sum);
}
