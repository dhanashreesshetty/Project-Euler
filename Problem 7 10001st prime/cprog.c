#include <stdio.h>
#include<math.h>
void main()
{
    int i=1, no=2, factor;
    while(i!=10001)
    {
        no++;
        factor=2;
        while(factor<=(int)sqrt(no))
        {
            if(no%factor==0)
                break;
            factor++;
        }
        if(factor==(int)(sqrt(no)+1))
            i++;
    }
    printf("%d",no);
}
