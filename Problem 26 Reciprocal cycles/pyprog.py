def checkLength(n):
    rem=1
    i=1
    num=1 #number is the dividend and its updated in every loop
    array=[] #array stores positions of obtained remainders-can be use to check if that remainder had occurred before as well as its position
    array=array+n*[0]
    while rem!=0 and i<=n:
        rem=num%n
        if array[rem]!=0: #we check if the current remainder was obtained before. If it was, we found a pattern
            length=i-array[rem]
            return length
        num=rem*10
        array[rem]=i
        i+=1
    return 0

i=3
maxl=0 #max stores current maximum length
while i<1000:
    temp=checkLength(i)
    if temp>maxl:
        maxl=temp
        num=i #num stores corresponding number
    i+=1
print(num)
