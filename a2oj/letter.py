import sys

h = input()
s = input() 
count = {}
counti = { } 

for c in h:
    if c != ' ':
       if c not in counti:
            counti[c] = 1 
       else:
            counti[c] += 1 

for i in s:
    if i != ' ':
        if i not in count: 
            count[i] = 1 
        else:
            count[i] += 1 

for key, val in count.items():
    if key in h :
        if val <= counti[key]:
            counti[key] -= val 
            pass
        else:
            print("NO")
            exit() 
    else:
        print("NO")
        exit()

print("YES") 

