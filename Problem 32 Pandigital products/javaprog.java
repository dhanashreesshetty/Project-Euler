import java.util.*;
class javaprog
{
	static boolean digits[]=new boolean[10];//this array will tell whether a digit is present or not

	static boolean mark(int a)
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

	static boolean pandigital(int m1, int m2, int p)
	{
		int i;
		Arrays.fill(digits,false);
		if(!mark(m1)||!mark(m2)||!mark(p))//if any out of the three had problems (had a zero or there were any repetitions) this is not pandigital
			return false;
		i=1;
		for(;i<10;i++)
			if(!digits[i])
				return false;//if any digit from 1-9 not present, it's not pandigital
		return true;//pandigital
	}
	
	public static void main(String args[])
	{
		int i, j, sum=0, p, m, k=0;
		int products[]=new int[100];//contains all pandigital products, using this so we dont add the same product twice
		for(i=1;i<2000;i++)//found this limit by finding the last pandigital numbers
		{
			for(j=1;j<9876;j++)//mathblog
			{
				p=i*j;
				if(pandigital(i,j,p))
				{
					if(k<100)//added condition for ArrayIndexOutOfBoundsException
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
		System.out.print(sum);
	}
}
	