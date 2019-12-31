/*Logic is correct, but can't obtain correct
result due to fault in long double division*/
#include<stdio.h>
#include<math.h>
void main()
{
    long double n=pow(2,1000);
    int sum=0;
    while(n>0)
    {
        sum+=(int)fmodl(n,10);
        n=floorl(n/10);//fault
    }
    printf("%d",sum);
}
