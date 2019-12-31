#lengths to be added when digit corresponding to uni[] index is found in unit's place (eg. 'one'-3)
uni=[0,3,3,5,4,4,3,5,5,4]
#lengths to be added when digit corresponding to ten[] index is found in ten's place (eg. 'and ten'-6)
ten=[0,6,9,9,8,8,8,10,9,9]
#for 10, 11, 12,...
one=[3,6,6,8,8,7,7,9,8,8]
#lengths to be added when digit corresponding to hun[] index is found in hundred's place (eg. 'one hundred'-20)
hun=[0,10,10,12,11,11,10,12,12,11]
total=11#one thousand
for i in range(1,1000):
    n=i
    s=uni[n%10]
    temp1=n%10
    n//=10
    if n>0:
        if n%10==1:
            s=one[temp1]+3#length of 'and'=3 (eg. 'and eleven')
        else:
            s+=ten[n%10]
        temp2=n%10
        n//=10
        if n>0:
            if temp1!=0 and temp2==0:#if unit's place wasn't 0 whereas ten's place was-> eg. one hundred "and" one
                s+=3
            s+=hun[n%10]
            n//=10
        else:
            s-=3#remove the length of and because there's nothing in hundred's place
    total+=s
print(total)
    
            
        
