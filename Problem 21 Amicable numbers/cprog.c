#include<stdio.h>

int calculate(int n)
{
    int j, sum=0;
    for(j=1;j<=n/2;j++)
        if(n%j==0)
            sum+=j;
    return sum;
}

void main()
{
    int i=4, temp, sum, amic_sum=0;
    while(i<10001)
    {
        sum=calculate(i);//calculates sum of divisors
        if(sum>i&&sum<10001)//if the sum is greater than the number itself and doesn't exceed 10000, calculate sum of factors for that
        {
           temp=calculate(sum);
           if(i==temp)//if both are found to be amicable
           {
               printf("\n%d %d",i,sum);//prints all amicable numbers
               amic_sum=amic_sum+i+sum;
           }
        }
        ++i;
    }
    printf("\n\n%d",amic_sum);
}
