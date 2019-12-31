class javaprog
{
	static boolean isPrime(int n)
	{
		int i;
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0)
				return false;
		}
		return true;
	}
	
	static int check(int a, int b)
	{
		int i=1, count=1;
		while(isPrime(Math.abs(i*i+a*i+b)))
		{
			count++;
			i++;
		}
		return count;
	}
	
	public static void main(String args[])
	{
		int i, j, count, maxcount=0, product=0;
		for(i=-999;i<1000;i++)
		{
			for(j=-1000;j<1001;j++)
			{
				if(isPrime(Math.abs(j)))//go ahead only if b in n*n+n*a+b=0 is prime, since we start from n=0
				{
					count=check(i,j);
					if(count>maxcount)
					{
						product=i*j;
						maxcount=count;
					}
				}
			}
		}
		System.out.print(product);
	}
}