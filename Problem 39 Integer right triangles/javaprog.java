class javaprog
{
	public static void main(String args[])
	{
		int a,b,p=0,k,key;
		double c;
		int perimeter[]=new int[1001];//this will store the count for the index as perimeter
		for(a=0;a<1001;a++)
			perimeter[a]=0;
		for(a=1;a<=400;a++)
		{
			for(b=1;b<=400;b++)
			{
				c=Math.sqrt(a*a+b*b);
				if(Math.floor(c)==c)//checking for perfect square condition
				{
					p=a+b+(int)c;
					if(p<=1000)
						perimeter[p]++;//even repetitions will be added, but that won't make a difference in getting the max, because this will happen for all perimeters
				}
			}
		}
		int max=0;
		for(a=1;a<1001;a++)
		{
			if(perimeter[a]>max)
			{
				max=perimeter[a];//highest count is stored in max
				p=a;//corresponding perimeter for max is stored in p
			}
		}
		System.out.print(p);
	}
}