#include<stdio.h>
void main()
{
    int i,j;
    long grid[21][21];
    for(i=0;i<20;i++)
        grid[i][20]=grid[20][i]=1;//setting bottom and right boundaries to 1-indicating that there is one way to get to these positions
    for(i=19;i>=0;i--)
        for(j=19;j>=0;j--)
            grid[i][j]=grid[i+1][j]+grid[i][j+1];//to get to [i][j], add ways to get to right and bottom positions
    printf("%li",grid[0][0]);
}
