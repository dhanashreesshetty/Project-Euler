class javaprog
{
	public static void main(String args[])
	{
		int i;
		double sumsq=0, sqsum=0;
		for(i=1;i<=100;i++)
		{
			sumsq+=i*i;
			sqsum+=i;
		}
		sqsum*=sqsum;
		System.out.print(sqsum-sumsq);
	}
}
