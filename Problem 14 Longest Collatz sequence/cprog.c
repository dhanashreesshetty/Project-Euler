#include<stdio.h>
void main()
{
    int i,len,max=0,num;
    long k;
    for(i=2;i<1000000;i++)
    {
        k=(long)i;
        len=1;
        while(k>1)
        {
            if(k%2==0)
                k/=2;
            else
                k=3*k+1;
            len++;
        }
        if(len>max)
        {
            num=i;
            max=len;
        }
    }
    printf("%d",num);
}
