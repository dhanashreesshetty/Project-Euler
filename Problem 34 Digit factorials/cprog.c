#include<stdio.h>
void main()
{
    int i,n,sum,total=0,limit=2540161;//beyond this the number is bigger than the sum of factorials. This is 9!*7+1
    int fact[]={1,1,2,6,24,120,720,5040,40320,362880};
    for(i=3;i<limit;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            sum+=fact[n%10];
            n/=10;
        }
        if(sum==i)
            total+=i;
    }
    printf("%li",total);
}
