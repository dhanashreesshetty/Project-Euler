class javaprog
{
	public static void main(String args[])
	{
		int i=1, no=2, factor;
		while(i!=10001)
		{
			no++;
			factor=2;
			while(factor<=Math.floor(Math.sqrt(no)))
			{
				if(no%factor==0)
					break;
				factor++;
			}
			if(factor==Math.floor(Math.sqrt(no)+1))
				i++;
		}
		System.out.print(no);
	}
}