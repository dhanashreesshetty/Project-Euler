class javaprog
{
	public static boolean isPrime(int a)
	{
		int i;
		for(i=2;i<=Math.sqrt(a);i++)
			if(a%i==0)
				return false;
		return true;
	}
	
	public static void main(String args[])
	{
		int i, k=1;
		double sum=5;
		while(k<=333333)
		{
			i=6*k-1;
			if(isPrime(i))
				sum+=i;
			i=6*k+1;
			if(isPrime(i))
				sum+=i;
			k++;
		}
		System.out.print(sum);
	}
}