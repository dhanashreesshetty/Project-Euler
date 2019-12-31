class javaprog
{
	
	static boolean palindrome(int n)
	{
		int rev=0, a;
		a=n;
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
	
	public static void main(String args[])
	{
		int maxpal=0, product, i;
		for(i=999;i>99;i--)
		{
			product=i*i;
			while(product>=i*100)
			{
				if(product>maxpal)
					if(palindrome(product))
						maxpal=product;
				product-=i;
			}
		}
		System.out.print(maxpal);
	}
}
		