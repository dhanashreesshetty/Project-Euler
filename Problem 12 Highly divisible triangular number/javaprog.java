import java.lang.Math.*;
class javaprog
{
	public static void main(String args[])
	{
		int dvrs, j, i, no=0;
		for(i=1;;i++)
		{
			no+=i;
			dvrs=0;
			j=1;
			while(j*j<=no)//https://stackoverflow.com/questions/26753839/efficiently-getting-all-divisors-of-a-given-number/26753963
			{
				if(no%j==0)
					dvrs+=2;//explanation in above link
				j++;
			}
			if(Math.pow(Math.sqrt(no),2)==no)
				dvrs--;
			if(dvrs>500)
				break;
		}
		System.out.print(no);
	}
}
