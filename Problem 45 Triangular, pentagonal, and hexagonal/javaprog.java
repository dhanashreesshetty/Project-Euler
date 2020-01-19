class javaprog
{
	public static void main(String args[])
	{
		long i, num;
		double d;
		for(i=144;;i++)//h143=40755
		{
			num=i*(2*i-1);//generates hexagonal number for n=i
			/*here onwards we check if the hexagonal number
			generated is pentagonal as well. We need not check
			for triangle condition because every hexagonal
			number is triangle as well*/
			d=Math.sqrt(1+24*num);
			if(d==Math.floor(d))
			{
				if((1+(int)d)%6==0)
				{
					System.out.print(num);
					System.exit(0);
				}
			}
		}
	}
}