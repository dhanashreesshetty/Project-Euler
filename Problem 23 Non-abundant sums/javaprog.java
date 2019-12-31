class javaprog
{
	static boolean calculate(int n)
	{
		int i, sum=0;
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
				sum+=i;
		}
		if(sum>n)
			return true;
		else
			return false;
	}
	
	public static void main(String args[])
	{
		int abun[]=new int[28000];//all abundant numbers
		boolean numbers[]=new boolean[28124];//this array will tell whether the number(which is the index) can be written as the sum of two abundant numbers
		int i, j=0, k, sum=0;
		for(i=12;i<28124;i++)
		{
			if(calculate(i))//if i is abundant
			{
				abun[j]=i;//add i to the list of abundant numbers
				j++;
			}
		}
		for(i=0;i<j;i++)
		{
			for(k=i;k<j;k++)
			{
				if(abun[i]+abun[k]<=28123)          //if the sum is greater than the limit, we break, because now greater sums
					numbers[abun[i]+abun[k]]=true;  //will follow all of which can be written as the sum of two abundant numbers
				else
					break;
			}
		}
		for(i=1;i<=28123;i++)
		{
			if(!numbers[i])//if the number cannot be written as the sum of two abundant numbers
				sum+=i;
		}
		System.out.print(sum);
	}
}