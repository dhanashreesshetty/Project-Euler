key=0
for c in range(335, 998):
    a=int((1000-c)/2)
    b=1000-a-c
    if a==b:
        b=b+1
        a=a-1
    while a>0 and b<c:
        if (a**2+b**2)==c**2:
            key=1
            break
        b=b+1
        a=a-1
    if key==1:
        break
print(a,b,c)
print(a*b*c)
