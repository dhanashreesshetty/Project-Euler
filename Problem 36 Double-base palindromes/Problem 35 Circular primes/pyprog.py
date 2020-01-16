import math
def length(n):
    count=0
    while n>0:
        n//=10
        count+=1
    return count

def isPrime(n):
    for i in range(2,int(math.sqrt(n)+1)):
        if n%i==0:
            return False
    return True


count=13#there are 13 circular primes less than 100
for i in range(101,1000000):
    l=length(i)
    num=i
    t=int(math.pow(10,l-1))#t=100 for 3 digit number, 1000 for 4 digit number
    loop=0
    while loop<l:
        if isPrime(num)==False:
            break
        end=num%10#last digit
        num//=10
        num=num+end*t#last digit comes first
        loop+=1
    if loop==l:
        count+=1
print(count)

