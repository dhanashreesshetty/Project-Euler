class javaprog
{
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

	static boolean isPrime(int n)
	{
		int i;
		if(n==1)
			return false;
		for(i=2;i*i<=n;i++)
			if(n%i==0)
				return false;
		return true;
	}

	static boolean isLeftTruncatable(int n)
	{
		int len,div;
		while(isPrime(n)&&n>0)
		{
			len=length(n);
			div=(int)Math.pow(10,len-1);
			n%=div;
		}
		if(n==0)
			return true;
		else
			return false;
	}

	static boolean isRightTruncatable(int n)
	{
		while(isPrime(n)&&n>0)
			n/=10;
		if(n==0)
			return true;
		else
			return false;
	}
	
	public static void main(String args[])
	{
		int i=11, count=11, sum=0;
		while(count>0)
		{
			if(isLeftTruncatable(i))
			{
				if(isRightTruncatable(i))
				{
					sum+=i;
					count--;
				}
			}
			i++;
		}
		System.out.print(sum);
	}
}