import math
#this function works by finding the square root in float
#if n is a perfect square, n*(n+1) is not possible
#find floor('n') and ceil('n+1') of the square root
#if the product of the two yields the number, then it is a triangle word
def isTriangle(n):
    s=math.sqrt(n)
    if s==int(s):
        return False
    a=math.floor(s)
    b=math.ceil(s)
    if a*b==n:
        return True
    else:
        return False

count=0
fptr=open("words.txt","r")
words=(fptr.read()).replace('"',"").split(',')
for i in words:
    value=0
    for j in i:
        value+=(ord(j)-64)
    if isTriangle(value*2):
        count+=1
print(count)
