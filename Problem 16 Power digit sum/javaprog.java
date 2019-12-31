import java.math.*;
class javaprog
{
	public static void main(String args[])
	{
		BigDecimal n=new BigDecimal("2");
		BigDecimal ten=new BigDecimal("10");
		BigDecimal zero=new BigDecimal("0");
		n=n.pow(1000);
		BigDecimal sum=new BigDecimal("0");
		while(n.compareTo(zero)==1)
		{
			sum=sum.add(n.remainder(ten));
			n=n.divide(ten);
			n=n.setScale(0,RoundingMode.FLOOR);
		}
		System.out.print(sum);
	}
}