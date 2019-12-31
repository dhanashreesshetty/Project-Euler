/*left_up and other variables represent the difference between the first number i.e. 1,
and the other numbers in the direction specified. To get the next number in the same direction,
you need to add the this difference (which increases by 8 for every iteration) to the current number*/
#include<stdio.h>
void main()
{
    int left_up=6, left_bot=4, right_up=8, right_bot=2;
    int i, sum=1, element=1;
    element+=left_up;
    for(i=1;i<=500;i++)
    {
        sum+=element;
        left_up+=8;
        element+=left_up;
    }
    element=1+right_bot;
    for(i=1;i<=500;i++)
    {
        sum+=element;
        right_bot+=8;
        element+=right_bot;
    }
    element=1+right_up;
    for(i=1;i<=500;i++)
    {
        sum+=element;
        right_up+=8;
        element+=right_up;
    }
    element=1+left_bot;
    for(i=1;i<=500;i++)
    {
        sum+=element;
        left_bot+=8;
        element+=left_bot;
    }
    printf("%d",sum);
}
