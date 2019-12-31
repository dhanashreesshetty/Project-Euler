class javaprog
{
	public static void main(String args[])
	{
		long grid[][]=new long[21][21];
		int i,j;
		for(i=0;i<20;i++)
			grid[i][20]=grid[20][i]=1;//setting bottom and right boundaries to 1-indicating that there is one way to get to these positions
		for(i=19;i>=0;i--)
			for(j=19;j>=0;j--)
				grid[i][j]=grid[i][j+1]+grid[i+1][j];//to get to [i][j], add ways to get to right and bottom positions
		System.out.print(grid[0][0]);
	}
}