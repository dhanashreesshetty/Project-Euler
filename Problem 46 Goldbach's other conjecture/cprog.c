#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isComposite(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return 1;
    return 0;
}

int GoldbachDoesntWork(int n)
{
    /*odd composite number=prime+2*(square of a number)
    In the variable i, we store the closest possible
    square root that might satisfy this equation, and
    keep decreasing its value until satisfied. If we
    reach i=0, it means the conjecture failed.*/
    int i=(int)floor(sqrt(n/2));
    int num=n-2*i*i;
    while(i>0&&isComposite(num))
    {
        i--;
        num=n-2*i*i;
    }
    if(i==0)
        return 1;
    return 0;
}

void main()
{
    int i;
    for(i=9;;i+=2)
    {
        if(isComposite(i))
        {
            if(GoldbachDoesntWork(i))
            {
                printf("%d",i);
                exit(0);
            }
        }
    }
}
