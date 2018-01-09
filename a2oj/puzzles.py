n, m = map(int, input().split())
inp =list(map(int, input().split()))
inp.sort()
minimum, diff = 100000, -1 
j = 0 
for i in range(n-1, m):
    diff = inp[i] - inp[j] 
    j = j + 1 
    minimum = min(diff, minimum)
print(minimum) 

