#include<stdio.h>
void main()
{
    int i=0, sum=0, a=1, b=2, c;
    while(a<4000000)
    {
        if(a%2==0)
            sum+=a;
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",sum);
}
