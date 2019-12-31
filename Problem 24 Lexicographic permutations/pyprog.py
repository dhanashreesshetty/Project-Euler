#This program makes use of Python's inbuilt functions. Refer the C or Java program for logic
from itertools import permutations
perms=list(permutations(range(0,10)))
print(''.join(map(str,perms[999999])))
