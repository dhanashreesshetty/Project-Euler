import math
def isPrime(n):
    for i in range(2,int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return True

def check(a,b):
    i=1
    count=1
    while isPrime(abs(i*i+a*i+b)):
        count+=1
        i+=1
    return count

maxcount=0
for i in range(-999,1000):
    for j in range(-1000,1001):
        if isPrime(abs(j)): #go ahead only if b in n*n+n*a+b=0 is prime, since we start from n=0
            count=check(i,j)
            if count>maxcount:
                product=i*j
                maxcount=count
print(product)
