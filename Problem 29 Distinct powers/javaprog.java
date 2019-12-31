class javaprog
{
	static double array[]=new double[9801];
	static boolean check(double n, int i)
	{
		int k;
		for(k=0;k<=i;k++)
			if(array[k]==n)
				return false;
		return true;
	}
	
	public static void main(String args[])
	{
		double a, b, num;
		int i=0;
		for(a=2;a<101;a+=1)
		{
			for(b=2;b<101;b+=1)
			{
				num=Math.pow(a,b);
				if(check(num,i))//if number is already present in array
					array[i++]=num;
			}
		}
		System.out.print(i);
	}
}