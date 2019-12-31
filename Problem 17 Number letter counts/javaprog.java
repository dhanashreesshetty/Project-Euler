class javaprog
{
	public static void main(String args[])
	{
		int uni[]={0,3,3,5,4,4,3,5,5,4};//lengths to be added when digit corresponding to uni[] index is found in unit's place (eg. 'one'-3)
		int ten[]={0,6,9,9,8,8,8,10,9,9};//lengths to be added when digit corresponding to ten[] index is found in ten's place (eg. 'and ten'-6)
		int one[]={3,6,6,8,8,7,7,9,8,8};//for 10, 11, 12,... 
		int hun[]={0,10,10,12,11,11,10,12,12,11};//lengths to be added when digit corresponding to hun[] index is found in hundred's place (eg. 'one hundred'-20)
		int i,n,sum,temp1,temp2,total=11;//11->one thousand
		for(i=1;i<1000;i++)
		{
			n=i;
			sum=uni[n%10];
			temp1=n%10;
			n/=10;
			if(n>0)
			{
				if(n%10==1)
					sum=one[temp1]+3;//length of 'and'=3 (eg. 'and eleven')
				else
					sum+=ten[n%10];
				temp2=n%10;
				n/=10;
				if(n>0)
				{
					if(temp1!=0&&temp2==0)//if unit's place wasn't 0 whereas ten's place was-> eg. one hundred "and" one
						sum+=3;
					sum+=hun[n%10];
					n/=10;
				}
				else
					sum-=3;//remove the length of and because there's nothing in hundred's place
			}
			total+=sum;
		}
		System.out.print(total);
	}
}