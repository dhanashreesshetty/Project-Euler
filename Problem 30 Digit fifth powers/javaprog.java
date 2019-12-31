class javaprog
{
	public static void main(String args[])
	{
		int i, sum, n, total=0;
		for(i=10;i<=355000;i++)
		{
			sum=0;
			n=i;
			while(n>0)
			{
				sum+=Math.pow(n%10,5);
				n/=10;
			}
			if(sum==i)
			  total+=sum;
		}
		System.out.print(total);
	}
}