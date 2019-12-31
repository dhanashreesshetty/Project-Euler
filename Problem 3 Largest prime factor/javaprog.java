/*Every composite number has a unique prime factorization.
In this solution, we divide the given number by its prime factors,
starting from the smallest-we chose to start from 3 here because
the given number is odd. We keep dividing the number by that factor
until it no longer divides it-we then proceed to the next factor.
At the end, the factor that, when divided by the number, will make it 1,
will be the largest prime factor.
Here we do not have to check whether a factor is prime. To prove this, let's
take an example-since we're iterating through odd numbers, we will also encounter
9, which is not prime-however, since we already divided the number by 3 for as long
as it could be divided, 9 won't be able to divide the number.*/
import java.math.*;
class javaprog
{
	public static void main(String args[])
	{
		BigInteger n=new BigInteger("600851475143");
		BigInteger zero=new BigInteger("0");
		BigInteger one=new BigInteger("1");
		BigInteger two=new BigInteger("2");
		BigInteger i=new BigInteger("3");
		while(n.compareTo(one)==1)
		{
			while((n.mod(i)).compareTo(zero)==0)
				n=n.divide(i);
			i=i.add(two);
		}
		System.out.print(i.subtract(two));//since i was already incremented by 2 before checking condition
	}
}