grid=[]
for i in range(0,21):
    grid.append([])
    grid[i]=[0]*21
for i in range(0,20):
    grid[i][20]=grid[20][i]=1#setting bottom and right boundaries to 1-indicating that there is one way to get to these positions
for i in range(19,-1,-1):
    for j in range(19,-1,-1):
        grid[i][j]=grid[i][j+1]+grid[i+1][j]#to get to [i][j], add ways to get to right and bottom positions
print(grid[0][0])
