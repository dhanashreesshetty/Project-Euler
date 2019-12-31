class javaprog
{
	public static void main(String args[])
	{
		int c=0, b=0, a=0, key=0;
		for(c=335; c<=997; c++)
		{
			a=(1000-c)/2;
			b=1000-a-c;
			if(a==b)
			{
				b++;
				a--;
			}
			while(a>0&&b<c)
			{
				if((a*a+b*b)==c*c)
				{
					key=1;
					break;
				}
				b++;
				a--;
			}
			if(key==1)
				break;
		}
		System.out.println(a+" "+b+" "+c+"\n"+a*b*c);
	}
}