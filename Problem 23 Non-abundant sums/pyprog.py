#stmt-be written as the sum of two abundant numbers
def calculate(n):
    total=0
    for i in range(1,int(n/2)+1):
        if n%i==0:
            total+=i
    if total>n:
        return True
    else:
        return False

abun=[] #all abundant numbers
numbers=[] #this array will tell whether the number(which is the index) can stmt
numbers=numbers+[False]*28124 #set - no number below 28124 can stmt
j=0
total=0
for i in range(12,28124):
    if calculate(i)==True:
        abun.append(i)
        j+=1
for i in range(0,j):
    for k in range(i,j):
        if abun[i]+abun[k]<28124:       #if the sum is greater than the limit,
            numbers[abun[i]+abun[k]]=True # we break, because now greater sums
        else:                           #will follow all of which can stmt
            break
for i in range(1,28124):
    if numbers[i]==False: #if the number cannot stmt
            total+=i
print(total)
