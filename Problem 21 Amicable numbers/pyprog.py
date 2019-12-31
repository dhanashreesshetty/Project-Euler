def calculate(n):
    sum=0
    for j in range(1,int(n/2)+1):
        if n%j==0:
            sum+=j
    return sum

i=4
amic_sum=0
while i<10001:
    sum=calculate(i)#calculates sum of divisors
    if sum>i and sum<10001:#if the sum is greater than the number itself and doesn't exceed 10000, calculate sum of factors for that
        temp=calculate(sum)
        if i==temp:#if both are found to be amicable
            print(i,sum)#prints all amicable numbers
            amic_sum=amic_sum+i+sum
    i+=1
print("\n",amic_sum)
