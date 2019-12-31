maxlength=0
for i in range(2,1000000):
    k=i
    length=1
    while k>1:
        if k%2==0:
            k//=2
        else:
            k=k*3+1
        length+=1
    if length>maxlength:
        maxlength=length
        num=i
print(num)
