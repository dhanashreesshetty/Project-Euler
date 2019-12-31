#include<stdio.h>
void main()
{
    int c, b, a, key=0;
    for(c=335; c<=997; c++)
    {
        a=(1000-c)/2;
        b=1000-a-c;
        if(a==b)
        {
            b++;
            a--;
        }
        while(a>0&&b<c)
        {
            if((a*a+b*b)==c*c)
            {
                key=1;
                break;
            }
            b++;
            a--;
        }
        if(key==1)
            break;
    }
    printf("%d %d %d\n%d", a,b,c,a*b*c);
}
