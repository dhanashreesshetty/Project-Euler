import math,sys
def isComposite(n):
    for i in range(2,int(math.sqrt(n)+1)):
        if n%i==0:
            return True
    return False

def GoldbachDoesntWork(n):
    #odd composite number=prime+2*(square of a number)
    #In the variable i, we store the closest possible
    #square root that might satisfy this equation, and
    #keep decreasing its value until satisfied. If we
    #reach i=0, it means the conjecture failed.
    i=int((n/2)**(0.5))
    num=n-2*i*i
    while i>0 and isComposite(num):
        i-=1
        num=n-2*i*i
    if i==0:
        return True
    return False

for i in range(9,6000,2):
    if isComposite(i):
        if GoldbachDoesntWork(i):
            print(i)
            sys.exit(0)
        
