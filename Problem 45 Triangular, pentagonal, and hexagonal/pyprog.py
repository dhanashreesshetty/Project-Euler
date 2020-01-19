import sys
for i in range(144,40000):
    num=i*(2*i-1) #generates hexagonal number for n=i
    #here onwards we check if the hexagonal number
    #generated is pentagonal as well. We need not check
    #for triangle condition because every hexagonal
    #number is triangle as well
    d=(1+24*num)**(0.5)
    if d==int(d):
        if (1+int(d))%6==0:
            print(num)
            sys.exit(0)
    
