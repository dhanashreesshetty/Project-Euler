#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
bool digits[10];//this array will tell whether a digit is present or not

bool mark(int a)
{
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
    return true;//digits present were marked successfully (in the digits array) and no repetitions were present
}

bool pandigital(int m1, int m2, int p)
{
    int i;
    memset(digits,false,10*sizeof(bool));
    if(!mark(m1)||!mark(m2)||!mark(p))//if any out of the three had problems (had a zero or there were any repetitions) this is not pandigital
        return false;
    i=1;
    for(;i<10;i++)
        if(!digits[i])
            return false;//if any digit from 1-9 not present, it's not pandigital
    return true;//pandigital
}

void main()
{
    int i, j, sum=0, p, m, k=0;
    int products[100];//contains all pandigital products, using this so we dont add the same product twice
    for(i=1;i<2000;i++)//found this limit by finding the last pandigital numbers
    {
        for(j=1;j<9876;j++)//mathblog
        {
            p=i*j;
            if(floor(log10(i))+floor(log10(j)+floor(log10(p)+3!=9))
               continue;
            if(pandigital(i,j,p))
            {
                products[k++]=p;
                sum+=p;
                for(m=0;m<k-1;m++)//this loop will find if this product had been added before to sum-if that is the case, we subtract the added product
                {
                    if(products[m]==p)
                    {
                        sum-=p;
                        k--;
                        break;
                    }
                }
            }
        }
    }
    printf("%d %d",sum,log10((double)456));
}
