import java.util.*;
class javaprog
{
	static boolean pandigital(int a)
	{
		boolean digits[]=new boolean[10];//this array will tell whether a digit is present or not
		int i;
		Arrays.fill(digits,false);
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

	static int length(int n)
	{
		int count=0;
		while(n>0)
		{
			n/=10;
			count++;
		}
		return count;
	}
	
	public static void main(String args[])
	{
		int i=1,j,p,product,totallength,len,max=0;
		while(length(i)<5)//5 digit numbers will exceed limit when multiplied by 2
		{
			j=1;
			product=0;
			totallength=0;
			while(true)
			{
			   p=i*j;
			   len=length(p);
			   if(len+totallength>9)
					break;
			   product=product*(int)Math.pow(10,len)+p;//concatenation
			   totallength+=len;
			   j++;
			}
			if(totallength==9)
				if(pandigital(product))
					if(product>max)
						max=product;
			i++;
		}
		System.out.print(max);
	}
}