total=0
limit=2540161 #beyond this the number is bigger than the sum of factorials. This is 9!*7+1
fact=[1,1,2,6,24,120,720,5040,40320,362880]
for i in range(3,2540161):
    n=i
    s=0
    while n>0:
        s+=fact[n%10]
        n//=10
    if s==i:
        total+=i
print(total)
