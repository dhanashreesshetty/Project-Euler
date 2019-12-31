arr=[]
def check(n):
    for k in arr:
        if k==n:
            return False
    return True

i=0
for a in range(2,101):
    for b in range(2,101):
        num=a**b
        if check(num): #if number is already present in array
            arr.append(num)
            i+=1
print(i)
