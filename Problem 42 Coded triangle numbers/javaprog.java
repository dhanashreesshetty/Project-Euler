import java.util.*;
import java.io.*;
class javaprog
{
	static boolean isTriangle(int n)
	{
		double s=Math.sqrt(n);
		if(s==Math.floor(s))
			return false;
		int a=(int)Math.floor(s);
		int b=(int)Math.ceil(s);
		if(a*b==n)
			return true;
		else
			return false;
	}
	
	public static void main(String args[]) throws IOException
	{
		String words=new String();
		try{
			File fp=new File("words.txt");
			Scanner sc=new Scanner(fp);
			words=sc.next();
		}
		finally{}
		int i=1,value,count=0;
		while(i<words.length()&&words.charAt(i)!='\0')
		{
			value=0;
			while(words.charAt(i)!='"')
				value+=((int)words.charAt(i++)-64);
			if(isTriangle(value*2))
				count++;
			i+=3;
		}
		System.out.print(count);
	}
}