/*Every composite number has a unique prime factorization.
In this solution, we divide the given number by its prime factors,
starting from the smallest-we chose to start from 3 here because
the given number is odd. We keep dividing the number by that factor
until it no longer divides it-we then proceed to the next factor.
At the end, the factor that, when divided by the number, will make it 1,
will be the largest prime factor.
Here we do not have to check whether a factor is prime. To prove this, let's
take an example-since we're iterating through odd numbers, we will also encounter
9, which is not prime-however, since we already divided the number by 3 for as long
as it could be divided, 9 won't be able to divide the number.*/
#include<stdio.h>
void main()
{
    long long num=600851475143;
    int i=3;
    while(num!=1)
    {
        while(num%i==0)
            num/=i;
        i+=2;
    }
    printf("%d",i-2);//since i was already incremented by 2 before checking condition
}
