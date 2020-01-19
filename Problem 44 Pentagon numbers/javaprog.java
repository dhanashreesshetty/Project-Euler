class javaprog
{
	static boolean isPentagonal(int n)//P=n*(3n-1)/2 => n=(1+sqrt(1+24*P))/6
	{
		double d=Math.sqrt(1+24*n);
		if(d==Math.floor(d))
			if((1+(int)d)%6==0)
				return true;
		return false;
	}

	public static void main(String args[])
	{
		int i,j,s,d;
		int pentagonal[]=new int[3000];
		for(i=1;;i++)
		{
			pentagonal[i]=i*(3*i-1)/2;
			for(j=1;j<i;j++)
			{
				s=pentagonal[i]+pentagonal[j];
				if(isPentagonal(s))//if sum is pentagonal
				{
					d=pentagonal[i]-pentagonal[j];
					if(isPentagonal(d))//if difference is pentagonal
					{
						System.out.print(d);//the first one we find will be the minimum
						System.exit(0);
					}
				}
			}
		}
	}
}