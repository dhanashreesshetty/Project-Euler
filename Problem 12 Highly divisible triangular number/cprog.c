#include<stdio.h>
#include<math.h>
void main()
{
    int dvrs, j, i, no=0;
    for(i=;i;i++)
    {
        no+=i;
        dvrs=0;
        j=1;
        while(j*j<=no)//https://stackoverflow.com/questions/26753839/efficiently-getting-all-divisors-of-a-given-number/26753963
        {
            if(no%j==0)
                dvrs+=2;//explanation in above link
            j++;
        }
        if(pow(sqrt(no),2)==no)
            dvrs--;
        if(dvrs>500)
            break;
    }
    printf("%d",no);
}

