#include<stdio.h>
void main()
{
    int i,j,k,prod,carry,fact[160];//factorial of 100 has 158 digits, at i=3 however, the computation seems to exceed the 158 boundary so taking 160
    fact[0]=1;//fact=1
    for(i=0;i<160;i++)
        fact[i]=-1;
    fact[0]=1;
    for(i=100;i>1;i--)
    {
        j=0;
        carry=0;
        while(fact[j]!=-1)
        {
            prod=fact[j]*i+carry;
            if(prod==0)
                fact[j++]=0;
            else
            {
                fact[j++]=prod%10;//store the last digit
                carry=prod/10;//the carry to be added to the next multiplication
                if(carry>0)
                    if(fact[j]==-1)//if there is carry and if there are no more digits in fact for multiplication, we'll change -1 to 0, so that the carry is not lost
                        fact[j]=0;
            }
        }
    }
    int sum=0;
    for(i=0;i<158;i++)
        sum+=fact[i];
    printf("%d",sum);
}
