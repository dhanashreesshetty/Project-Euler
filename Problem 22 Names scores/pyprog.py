fptr=open("names.txt","r")
txt=fptr.read()
names=sorted((txt.replace('"',"")).split(","))
total=0
for i in range(0,len(names)):
    for j in names[i]:
        total+=((ord(j)-64)*(i+1))#ord gives ascii value; ascii of A is 65
print(total)
        
