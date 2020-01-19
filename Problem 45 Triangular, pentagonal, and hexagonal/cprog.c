#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    long long i, num;
    double d;
    for(i=144;;i++)//h143=40755
    {
        num=i*(2*i-1);//generates hexagonal number for n=i
        /*here onwards we check if the hexagonal number
        generated is pentagonal as well. We need not check
        for triangle condition because every hexagonal
        number is triangle as well*/
        d=sqrt(1+24*num);
        if(d==floor(d))
        {
            if((1+(long long)d)%6==0)
            {
                printf("%lld",num);
                exit(0);
            }
        }
    }
}
