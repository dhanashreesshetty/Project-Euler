#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,p,k,key;
    double c;
    int perimeter[1001];
    for(a=0;a<1001;a++)
        perimeter[a]=0;
    for(a=1;a<=400;a++)
    {
        for(b=1;b<=400;b++)
        {
            c=sqrt(a*a+b*b);
            if(floor(c)==c)//checking for perfect square condition
            {
                p=a+b+(int)c;
                if(p<=1000)
                    perimeter[p]++;//even repetitions will be added, but that won't make a difference in getting the max, because this will happen for all perimeters
            }
        }
    }
    int max=0;
    for(a=1;a<1001;a++)
    {
        if(perimeter[a]>max)
        {
            max=perimeter[a];
            p=a;
        }
    }
    printf("%d",p);
}

