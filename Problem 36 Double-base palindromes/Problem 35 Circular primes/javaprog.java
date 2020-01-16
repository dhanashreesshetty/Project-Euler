class javaprog
{
	static int length(int n)
	{
		int count=0;
		while(n>0)
		{
			n/=10;
			count++;
		}
		return count;
	}

	static boolean isPrime(int n)
	{
		int i;
		for(i=2;i*i<=n;i++)
			if(n%i==0)
				return false;
		return true;
	}
	
	public static void main(String args[])
	{
		int i,num,len,count=13,t,end,loop;//there are 13 circular primes less than 100
		for(i=101;i<1000000;i++)
		{
			len=length(i);
			num=i;
			t=(int)Math.pow(10,len-1);//t=100 for 3 digit number, 1000 for 4 digit number
			loop=0;
			while(loop<len)
			{
				if(!isPrime(num))
					break;
				end=num%10;//last digit
				num/=10;
				num=end*t+num;//last digit comes first
				loop++;
			}
			if(loop==len)
				count++;
		}
		System.out.print(count);
	}
}