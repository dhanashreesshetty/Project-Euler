class javaprog
{
	public static void main(String args[])
	{
		int i;
		for(i=2520;;i+=2520)
		{
			if(i%11==0&&i%13==0&&i%16==0&&i%17==0&&i%19==0)
				break;
		}
		System.out.print(i);
	}
}