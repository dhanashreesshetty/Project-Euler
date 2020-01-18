#include<stdio.h>
#include<math.h>

int length(int n)
{
    int count=0;
    while(n>0)
    {
        n/=10;
        count++;
    }
    return count;
}

int isPrime(int n)
{
    int i;
    if(n==1)
        return 0;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}

int isLeftTruncatable(int n)
{
    int len,div;
    while(isPrime(n)&&n>0)
    {
        len=length(n);
        div=ceil(pow(10,len-1));
        n%=div;
    }
    if(n==0)
        return 1;
    else
        return 0;
}

int isRightTruncatable(int n)
{
    while(isPrime(n)&&n>0)
        n/=10;
    if(n==0)
        return 1;
    else
        return 0;
}

void main()
{
    int i=11, count=11, sum=0;
    while(count>0)
    {
        if(isLeftTruncatable(i))
        {
            if(isRightTruncatable(i))
            {
                sum+=i;
                count--;
            }
        }
        i++;
    }
    printf("%d",sum);
}
