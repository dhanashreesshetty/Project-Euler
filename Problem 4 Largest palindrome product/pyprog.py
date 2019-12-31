def palindrome(n):
    rev=0
    a=n
    while a>0:
        rev=rev*10+a%10
        a=int(a/10)
    if rev==n:
        return True
    else:
        return False

maxpal=0
for i in range(999,99,-1):
    product=int(i*i)
    while product>=i*100:
        if product>maxpal:
            if palindrome(product):
                maxpal=product
        product=product-i
print(maxpal)
