#include<stdio.h>
#include<stdlib.h>
int num=1, den=1;

void check(int a, int b, int c, int d)
{
    if(b!=0&&d!=0)//denominator can't be zero
    {
       if(((double)a/(double)b)==((double)c/(double)d))
       {
           num*=a;
           den*=b;
       }
    }
}

void main()
{
    int i,j,it,iu,jt,ju;
    for(i=10;i<100;i++)
    {
        for(j=i+1;j<100;j++)//i+1 because fraction value is less than 1
        {
            it=i/10;
            iu=i%10;
            jt=j/10;
            ju=j%10;
            //1st condition checks for the required condition
            //2nd condition is applied since the value of the required fractions is less than 1
            if(iu==jt&&it<ju)
                check(i,j,it,ju);
        }
    }
    if(den%num==0)
    {
        printf("%d",den/num);
        exit(0);
    }
    int n=num, d=den;
    while(n!=d)//this loop finds the gcd
    {
        if(n>d)
            n-=d;
        else
            d-=n;
    }
    printf("%d",den/d);
}
