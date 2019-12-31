import math
total=0
for i in range(10,355000):
    s=0
    n=i
    while n>0:
        s+=((n%10)**5)
        n//=10
    if s==i:
        total+=s
print(total)
