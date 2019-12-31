class javaprog
{
	static int checkLength(int n)
	{
		int length, rem=1, i=1, num=1;//number is the dividend and its updated in every loop
		int array[]=new int[n];//array stores positions of obtained remainders-can be use to check if that remainder had occurred before as well as its position
		while(rem!=0&&i<=n)
		{
			rem=num%n;
			if(array[rem]!=0)//we check if the current remainder was obtained before. If it was, we found a pattern
			{
				length=i-array[rem];
				return length;
			}
			num=rem*10;
			array[rem]=i;
			i++;
		}
		return 0;
	}
	
	public static void main(String args[])
	{
		int i=3, max=0, num=0, temp;//max stores current maximum length and num stores corresponding number
		while(i<1000)
		{
			temp=checkLength(i);
			if(temp>max)
			{
				max=temp;
				num=i;
			}
			i++;
		}
		System.out.print(num);
	}
}
		