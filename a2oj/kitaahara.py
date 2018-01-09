import sys
n = int(input())
inp = list(map(int, input().split()))
total = sum(inp)
if total % 200 != 0:
    print("NO") 
    exit() 
a = inp.count(100)
b = inp.count(200) 
half = total / 2 
for i in range(b+1):
    if(200 * i <= half and half - 200 * i <= a * 100):
        print("YES")
        exit()
print("NO")
