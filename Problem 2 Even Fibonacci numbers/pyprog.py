s=0
a=1
b=2
while a<4000000:
    if a%2==0:
        s+=a
    c=a+b
    a=b
    b=c
print(s)
