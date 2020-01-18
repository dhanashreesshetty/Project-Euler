#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

bool pandigital(int a)
{
    int i;
    bool digits[10];//this array will tell whether a digit is present or not
    memset(digits,false,10*sizeof(bool));
    while(a>0)
    {
        if(a%10==0)//we don't want zero
            return false;
        if(!digits[a%10])//if we're encountering the digit for the first time
            digits[a%10]=true;
        else
            return false;//digit repeated, discard.
        a/=10;
    }
    i=1;
    for(;i<10;i++)
        if(!digits[i])
            return false;//if any digit from 1-9 not present, it's not pandigital
    return true;//pandigital
}

int length(int n)
{
    int count=0;
    while(n>0)
    {
        n/=10;
        count++;
    }
    return count;
}

void main()
{
    int i=1,j,p,product,totallength,len,max=0;
    while(length(i)<5)//5 digit numbers will exceed limit when multiplied by 2
    {
        j=1;
        product=0;
        totallength=0;
        while(1)
        {
           p=i*j;
           len=length(p);
           if(len+totallength>9)
                break;
           product=product*ceil(pow(10,len))+p;//concatenation
           totallength+=len;
           j++;
        }
        if(totallength==9)
            if(pandigital(product))
                if(product>max)
                    max=product;
        i++;
    }
    printf("%d",max);
}

