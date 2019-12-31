import math

def isprime(a):
    for i in range(2,int(math.sqrt(a))+1):
        if a%i==0:
            return False
    return True

k=1
sum=5
while k<=333333:
    i=6*k-1
    if isprime(i):
        sum+=i
    i=6*k+1
    if isprime(i):
        sum+=i
    k=k+1
print(sum)
