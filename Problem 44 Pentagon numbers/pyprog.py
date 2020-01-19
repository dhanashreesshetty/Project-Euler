import sys
def isPentagonal(n):
    d=(1+24*n)**(0.5)
    if d==int(d):
        if (1+int(d))%6==0:
            return True
    return False

pentagonal=[0]*3001
for i in range(1,3000):
    pentagonal[i]=(i*(3*i-1)/2)
    for j in range(1,i):
        s=pentagonal[i]+pentagonal[j]
        if isPentagonal(s):
            d=pentagonal[i]-pentagonal[j]
            if isPentagonal(d):
                print(int(d))
                sys.exit(0)
