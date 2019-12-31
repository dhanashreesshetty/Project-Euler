/* 'n' numbers can be arranged in n! ways. (Permutation)
In the lexicographic order, the first set of numbers will
begin with 0, then the second set with 1, and so on.
The size of the first set will be 9!, since we have 10
digits to choose from, and the first digit being chosen,
we are left with 9 digits for permutation. 9!=362880. Hence,
the first 362880 permutations start with 0, permutations 362881
to 725760 start with 1, and 725761 to 1088640 start with 2.
Here we have crossed the limit. This says that the millionth
permutation starts with 2. So, the number in the first
position of the millionth permutation is 2. We do the same
for all remaining positions*/
#include<stdio.h>
void main()
{
    int digits, sum, limit=1000000, temp, i;
    char number[10];//this will hold the millionth permutation
    int fact[]={0,1,2,6,24,120,720,5040,40320,362880};
    int chosen[]={0,0,0,0,0,0,0,0,0,0};//this list will tell us whether a digit has already been included in the number
    for(digits=9;digits>0;digits--)
    {
        temp=sum=0;//temp is for the digit to be chosen, sum is for adding number of permutations
        while(chosen[temp])//if this digit is chosen, find the closest unused digit
            temp++;
        while(sum<limit)
        {
            i=temp;//i holds the temp from the previous loop
            sum+=fact[digits];//we are adding the total permutations of the remaining number of digits
            temp++;
            while(chosen[temp])
                temp++;
        }
        sum-=fact[digits];
        limit=limit-sum;
        number[9-digits]=(char)(i+48);
        chosen[i]=1;
    }
    i=0;
    /*the for loop runs correctly only for 9 to 1 positions,
    so we find the only unused digit through this loop and put it in the last position of number*/
    while(chosen[i])
        i++;
    number[9]=(char)(i+48);//adding 48 for ascii adjustment
    printf("%s",number);
}
