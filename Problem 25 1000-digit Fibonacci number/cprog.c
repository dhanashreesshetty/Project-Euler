#include<stdio.h>
#include<math.h>

void main()
{
    long double a=1.0, b=1.0, c;
    long double p=powl(10,999);
    int i=1;
    while(fmodl(a,p)==a)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    printf("%d",i);
}
