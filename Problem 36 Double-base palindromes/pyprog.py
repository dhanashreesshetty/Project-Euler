def isDecPalindrome(n):
    a=n
    rev=0
    while a>0:
        rev=rev*10+a%10
        a//=10
    if rev==n:
        return True
    else:
        return False

def isBinPalindrome(n):
    i=0
    k=0
    arr=[]
    while n>0:
        arr.append(n%2)
        k+=1
        n//=2
    k-=1
    while i<=k:
        if arr[i]!=arr[k]:
            return False
        i+=1
        k-=1
    return True

s=0
for i in range(1,1000000):
    if isDecPalindrome(i)==True:
        if isBinPalindrome(i)==True:
            s+=i
print(s)
