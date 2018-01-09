import sys
inp = input()
k = 0 
count = {} 
for i in inp:
    if i not in count:
        count[i] = 1
    else:
        count[i] = (count[i] + 1) % 2 

odd = 0  
for key in count:
    if count[key]: 
        odd += 1 

if odd == 0:
    print("First")
elif odd == 1:
    print("First")
elif odd & 1:
    print("First")
else:
    print("Second")
