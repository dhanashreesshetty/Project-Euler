#left_up and other variables represent the difference between the first number i.e. 1,
#and the other numbers in the direction specified. To get the next number in the same direction,
#you need to add the this difference (which increases by 8 for every iteration) to the current number
left_up=6
left_bot=4
right_up=8
right_bot=2
total=1

element=1+left_up
for i in range(1,501):
    total+=element
    left_up+=8
    element+=left_up
    
element=1+right_bot
for i in range(1,501):
    total+=element
    right_bot+=8
    element+=right_bot

element=1+right_up
for i in range(1,501):
    total+=element
    right_up+=8
    element+=right_up

element=1+left_bot
for i in range(1,501):
    total+=element
    left_bot+=8
    element+=left_bot

print(total)
