import sys

def check(a,b,c,d,num,den):
    if b!=0 and d!=0: #denominator can't be zero
        if a/b==c/d:
            num*=a
            den*=b
    return num,den

num=1
den=1
for i in range(10,100):
    for j in range(i+1,100): #i+1 because fraction value is less than 1
        it=i//10
        iu=i%10
        jt=j//10
        ju=j%10
        #1st condition checks for the required condition
        #2nd condition is applied since the value of the required fractions is less than 1
        if iu==jt and it<ju:
            num,den=check(i,j,it,ju,num,den)
if den%num==0:
    print(den/num)
    sys.exit(0)
n=num
d=den
while n!=d: #this loop finds the gcd
    if n>d:
        n-=d
    else:
        d-=n
print(den/d)
