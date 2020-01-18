def pandigital(a):
    digits=[]#this list will tell whether a digit is present or not
    while a>0:
        if a%10==0:#we don't want zero
            return False
        if a%10 not in digits:#if we're encountering the digit for the first time
            digits.append(a%10)
        else:
            return False#digit repeated, discard.
        a//=10
    for i in range(1,10):
        if i not in digits:
            return False#if any digit from 1-9 not present, it's not pandigital
    return True#pandigital

def length(n):
    count=0
    while n>0:
        n//=10
        count+=1
    return count

i=1
maxi=0
while length(i)<5:#5 digit numbers will exceed limit when multiplied by 2
    j=1
    product=0
    totallength=0
    while True:
        p=i*j
        l=length(p)
        if l+totallength>9:
            break
        product=product*(10**l)+p#concatenation
        totallength+=l
        j+=1
    if totallength==9:
        if pandigital(product):
            if product>maxi:
                maxi=product
    i+=1
print(maxi)
