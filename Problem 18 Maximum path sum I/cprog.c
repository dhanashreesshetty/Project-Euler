/*We follow a bottom-up approach.
First we load the last row into arr. Then we go to the upper (Second-last) row.
For every element in this row, we have two paths-lft and right. We check which path gives
larger result for each element, and replace that element, by the sum of that element and the max path.
These replacements are stored in arr and are updated with every iteration (we go up the triangle)
*/
#include<stdio.h>
void main()
{
    int sum=0, max=0, temp, i, j, arr[15];
    int triangle[15][15]={{75,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                       {95,64,0,0,0,0,0,0,0,0,0,0,0,0,0},
                       {17,47,82,0,0,0,0,0,0,0,0,0,0,0,0},
                       {18,35,87,10,0,0,0,0,0,0,0,0,0,0,0},
                       {20,4,82,47,65,0,0,0,0,0,0,0,0,0,0},
                       {19,1,23,75,3,34,0,0,0,0,0,0,0,0,0},
                       {88,2,77,73,7,63,67,0,0,0,0,0,0,0,0},
                       {99,65,4,28,6,16,70,92,0,0,0,0,0,0,0},
                       {41,41,26,56,83,40,80,70,33,0,0,0,0,0,0},
                       {41,48,72,33,47,32,37,16,94,29,0,0,0,0,0},
                       {53,71,44,65,25,43,91,52,97,51,14,0,0,0,0},
                       {70,11,33,28,77,73,17,78,39,68,17,57,0,0,0},
                       {91,71,52,38,17,14,91,43,58,50,27,29,48,0,0},
                       {63,66,4,68,89,53,67,30,73,16,69,87,40,31,0},
                       {4,62,98,27,23,9,70,98,73,93,38,53,60,4,23}};
    for(i=0;i<=14;i++)
        arr[i]=triangle[14][i];//copy the last row of triangle into arr

    for(i=13;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])//if the first path gives larger result than second path
                arr[j]=triangle[i][j]+arr[j];
            else
                arr[j]=triangle[i][j]+arr[j+1];
        }
    }
    printf("%d",arr[0]);
}
