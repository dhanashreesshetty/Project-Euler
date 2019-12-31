a=1
b=1
i=1
p=10**999
while a%p==a:
    c=a+b
    a=b
    b=c
    i+=1
print(i)
