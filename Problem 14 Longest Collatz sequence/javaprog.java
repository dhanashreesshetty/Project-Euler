class javaprog
{
	public static void main(String args[])
	{
		int i,len,max=0,num=0;
		long k;
		for(i=2;i<1000000;i++)
		{
			k=Long.valueOf(i);
			len=1;
			while(k>1)
			{
				if(k%2==0)
					k/=2;
				else
					k=3*k+1;
				len++;
			}
			if(len>max)
			{
				max=len;
				num=i;
			}
		}
		System.out.print(num);
	}
}
