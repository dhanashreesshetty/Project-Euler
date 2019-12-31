#include <stdio.h>

int palindrome(int n)
{
    int rev=0, a;
    a=n;
    while(a>0)
    {
        rev=rev*10+a%10;
        a/=10;
    }
    if(rev==n)
        return 1;
    else
        return 0;
}

int main()
{
    int maxpal=0, product, i;
    for(i=999; i>99; i--)
    {
        product=i*i;
        while(product>=i*100)
        {
            if(product>maxpal)
                if(palindrome(product))
                    maxpal=product;
            product-=i;
        }
    }
    printf("%d",maxpal);
}
