import math
no=0
i=1
while True:
    no+=i
    dvrs=0
    j=1
    sqrt=math.sqrt(no)
    while j<=sqrt: #https://stackoverflow.com/questions/26753839/efficiently-getting-all-divisors-of-a-given-number/26753963
        if no%j==0:
            dvrs+=2 #explanation in above link
        j+=1
    if sqrt**2==no:
        dvrs-=1
    if dvrs>500:
        break
    i+=1
print(no)
    
    
