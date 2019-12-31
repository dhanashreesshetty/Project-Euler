/*For every year we start from the first day.
The first day of 1 Jan 1901 was a Tuesday, so i=2.
(2 is not divisible by 7, thats how we know it wasn't a Sunday.)
We add the days of the current month to i to jump to the first day
of the next month. We check i for divisibility of 7 again, and the process continues.*/
#include<stdio.h>

int isLeapYear(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}

void main()
{
    int i=2, y, count=0;
    for(y=1901;y<2001;y++)
    {
        if(i%7==0)
            count++;
        i+=31;
        if(i%7==0)
            count++;
        if(isLeapYear(y))
            i+=29;
        else
            i+=28;
        if(i%7==0)
            count++;
        i+=31;
        if(i%7==0)
            count++;
        i+=30;
        if(i%7==0)
            count++;
        i+=31;
        if(i%7==0)
            count++;
        i+=30;
        if(i%7==0)
            count++;
        i+=31;
        if(i%7==0)
            count++;
        i+=31;
        if(i%7==0)
            count++;
        i+=30;
        if(i%7==0)
            count++;
        i+=31;
        if(i%7==0)
            count++;
        i+=30;
        if(i%7==0)
            count++;
        i+=31;
    }
    printf("%d",count);
}
