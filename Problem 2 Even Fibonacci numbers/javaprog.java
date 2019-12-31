class javaprog
{
	public static void main(String args[])
	{
		int sum=0, a=1, b=2, c;
		while(a<4000000)
		{
			if(a%2==0)
				sum+=a;
			c=a+b;
			a=b;
			b=c;
		}
		System.out.print(sum);
	}
}