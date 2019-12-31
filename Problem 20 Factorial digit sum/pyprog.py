fact=1
for i in range(100,1,-1):
    fact*=i
total=0
while fact>0:
    total+=fact%10
    fact//=10
print(total)
    
