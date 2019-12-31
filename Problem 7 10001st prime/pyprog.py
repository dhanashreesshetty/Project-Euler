import math
i=int(1)
no=int(2)
while i!=10001:
    no=no+1
    factor=2
    while factor<=int(math.sqrt(no)):
        if no%factor==0:
            break
        factor=factor+1
    if factor==(int(math.sqrt(no))+1):
        i=i+1
print(no)
