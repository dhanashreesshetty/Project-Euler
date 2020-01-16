class javaprog
{
	static boolean isDecPalindrome(int n)
	{
		int a=n,rev=0;
		while(a>0)
		{
			rev=rev*10+a%10;
			a/=10;
		}
		if(rev==n)
			return true;
		else
			return false;
	}

	static boolean isBinPalindrome(int n)
	{
		int i=0,k=0;
		int array[]=new int[20];
		while(n>0)
		{
			array[k++]=n%2;
			n/=2;
		}
		k--;
		while(i<=k)
			if(array[i++]!=array[k--])
				return false;
		return true;
	}
	
	public static void main(String args[])
	{
		int i,sum=0;
		for(i=1;i<1000000;i++)
		{
			if(isDecPalindrome(i))
				if(isBinPalindrome(i))
					sum+=i;
		}
		System.out.print(sum);
	}
}