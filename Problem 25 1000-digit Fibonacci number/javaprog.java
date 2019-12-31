import java.math.BigDecimal;
class javaprog
{
	public static void main(String args[])
	{
		BigDecimal a=new BigDecimal(1.0);
		BigDecimal b=new BigDecimal(1.0);
		BigDecimal t=new BigDecimal(10.0);
		BigDecimal p=t.pow(999);
		BigDecimal c;
		int i=1;
		while((a.remainder(p)).compareTo(a)==0)
		{
			c=a.add(b);
			a=b;
			b=c;
			i++;
		}
		System.out.print(i);
	}
}