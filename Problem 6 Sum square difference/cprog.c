#include <stdio.h>
void main()
{
    int i;
    double sumsq=0, sqsum=0;
    for(i=1;i<=100;i++)
    {
        sumsq+=i*i;
        sqsum+=i;
    }
    sqsum*=sqsum;
    printf("%lf",sqsum-sumsq);
}
