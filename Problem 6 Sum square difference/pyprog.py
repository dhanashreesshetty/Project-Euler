sumsq=0
sqsum=0
for i in range(1,101):
    sumsq+=i*i;
    sqsum+=i;
sqsum*=sqsum;
print(sqsum-sumsq);
