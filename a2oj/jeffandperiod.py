import sys
n = int(input())
inp = list(map(int, input().split()))
cout = {}
p = {} 
pr = {}
st = {} 
invalid = {}  
first = {}
counti = 0 


for i in range(n):
    if inp[i] not in invalid:
        invalid[inp[i]] = False
    if invalid[inp[i]]:
        continue 

    if inp[i] not in cout:
        cout[inp[i]] = 1 
        p[inp[i]] = 0 
        pr[inp[i]] = i 
        st[inp[i]] = 1 
        first[inp[i]] = 0  
        counti = counti + 1 
    else:
        cout[inp[i]] = cout[inp[i]] + 1 
        diff = i -  pr[inp[i]] 
        pr[inp[i]] = i 
        if not first[inp[i]]:
            p[inp[i]] = diff 
            first[inp[i]] = 1 
        else:
            if diff == p[inp[i]]:
                st[inp[i]] = 1
            else:
                st[inp[i]] = 0 
                counti = counti - 1
                invalid[inp[i]] = 1 

print(counti) 
inp.sort() 
for i in range(n):
    if st[inp[i]]:
        st[inp[i]] = 0 
        print(inp[i], p[inp[i]])
        
        

