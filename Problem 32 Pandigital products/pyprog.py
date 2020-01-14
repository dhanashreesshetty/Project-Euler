digits=[]
def mark(a):
    while a>0:
        if a%10==0:
            return False
        if a%10 not in digits:
            digits.append(a%10)
        else:
            return False
        a//=10
    return True

def pandigital(m1,m2,p):
    digits.clear()
    if mark(m1)==False or mark(m2)==False or mark(p)==False:
        return False
    for i in range(1,10):
        if i not in digits:
            return False
    return True

s=0
products=[]
for i in range(1,2000):
    for j in range(1,9876):
        p=i*j
        if pandigital(i,j,p):
            if p not in products:
                s+=p
                products.append(p)
print(s)
            
    
        
