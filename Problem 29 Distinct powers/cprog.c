#include<stdio.h>
#include<math.h>

double array[9801];

int check(double n, int i)
{
    int k;
    for(k=0;k<=i;k++)
        if(array[k]==n)
            return 0;
    return 1;
}

void main()
{
    double a, b, num;
    int i=0;
    for(a=2;a<101;a+=1)
    {
        for(b=2;b<101;b+=1)
        {
            num=pow(a,b);
            if(check(num,i))//if number is already present in array
                array[i++]=num;
        }
    }
    printf("%d",i);
}
