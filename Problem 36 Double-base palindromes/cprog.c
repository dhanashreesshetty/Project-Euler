#include<stdio.h>

int isDecPalindrome(int n)
{
    int a=n,rev=0;
    while(a>0)
    {
        rev=rev*10+a%10;
        a/=10;
    }
    if(rev==n)
        return 1;
    else
        return 0;
}

int isBinPalindrome(int n)
{
    int i=0,k=0;
    int array[20];
    while(n>0)
    {
        array[k++]=n%2;
        n/=2;
    }
    k--;
    while(i<=k)
        if(array[i++]!=array[k--])
            return 0;
    return 1;
}

void main()
{
    int i,sum=0;
    for(i=1;i<1000000;i++)
    {
        if(isDecPalindrome(i))
            if(isBinPalindrome(i))
                sum+=i;
    }
    printf("%d",sum);
}
