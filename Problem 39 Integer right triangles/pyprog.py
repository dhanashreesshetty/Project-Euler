import math
perimeter=[0]*1001#this will store the count for the index as perimeter
for a in range(0,400):
    for b in range(0,400):
        c=math.sqrt(a*a+b*b)
        if int(c)==c:#checking for perfect square condition
            p=int(a+b+c)
            if p<=1000:
                perimeter[p]+=1#even repetitions will be added, but that won't make a difference in getting the max, because this will happen for all perimeters
print(perimeter.index(max(perimeter)))#print index of element which is max 
