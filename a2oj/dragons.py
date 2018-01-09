import sys 

def myownkey(element):
    return element[0] 

s, n = map(int, input().split())
inp = [] 
for i in range(n):
    a, b = map(int, input().split())
    inp.append((a,b)) 

inp.sort(key = myownkey)

flag = 0 

for i in range(n):
    if s > inp[i][0]:
        s = s + inp[i][1]
    else:
        flag = 1 
        break ;

if flag == 1:
    print("NO")
else:
    print("YES")
