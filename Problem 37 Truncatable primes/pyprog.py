import math
def length(n):
    count=0
    while n>0:
        n//=10
        count+=1
    return count

def isPrime(n):
    if n==1:
        return False
    for i in range(2,int(math.sqrt(n)+1)):
        if n%i==0:
            return False
    return True

def isLeftTruncatable(n):
    while isPrime(n)and n>0:
        l=length(n)
        div=10**(l-1)
        n%=div
    if n==0:
        return True
    else:
        return False

def isRightTruncatable(n):
    while isPrime(n)and n>0:
        n//=10
    if n==0:
        return True
    else:
        return False

i=11
count=11
total=0
while count>0:
    if isLeftTruncatable(i):
        if isRightTruncatable(i):
            total+=i
            count-=1
    i+=1
print(total)
