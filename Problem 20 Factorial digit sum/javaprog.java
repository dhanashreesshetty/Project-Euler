import java.math.BigInteger;
class javaprog
{
	public static void main(String args[])
	{
		BigInteger fact=new BigInteger("1");
		BigInteger i=new BigInteger("100");
		BigInteger ten=new BigInteger("10");
		BigInteger one=new BigInteger("1");
		BigInteger zero=new BigInteger("0");
		while(i.compareTo(one)==1)//while i>1
		{
			fact=fact.multiply(i);//fact*=i
			i=i.subtract(one);//i--
		}
		int sum=0;
		while(fact.compareTo(zero)==1)//while fact>0
		{
			sum+=(fact.mod(ten)).intValue();//sum+=(fact%10)
			fact=fact.divide(ten);//fact/=10
		}
		System.out.print(sum);
	}
}