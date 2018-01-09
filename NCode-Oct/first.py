(N,l,m,n) = map(int, input().split())

a = list(map(int, input().split()))

leftMin = [-1 for i in range(N) ]
rightMin = [-1 for i in range(N) ]
leftMax = [-1 for i in range(N) ]
rightMax = [ -1 for i in range(N) ] 

max_sum = a[0]
min_sum = a[0]
leftMax[0] = a[0]
leftMin[0] = a[0]

for i in range(1,N):
    leftMax[i] = max_sum
    if a[i] > max_sum:
        max_sum = a[i]
        leftMax[i] = max_sum

    leftMin[i] = min_sum
    if a[i] < min_sum:
        min_sum = a[i]
        leftMin[i] = min_sum

rightMax[N-1] = a[N-1]
leftMax[N-1] = a[N-1]

max_sum = a[N-1]
min_sum = a[N-1]


for i in range(N-2, -1, -1):
    rightMax[i] = max_sum
    if a[i] > max_sum:
        max_sum = a[i]
        rightMax[i] = max_sum

    rightMin[i] = min_sum
    if a[i] < min_sum:
        min_sum = a[i]
        rightMin[i] = min_sum

final_max = -999999999999
for i in range(1, N):
    max1 = 0
    max2 = 0
    if l > 0:
        max1 = (leftMax[i] * l)
    else:
        max1 = (leftMin[i] * l)

    if m > 0:
        max1 += (rightMax[i] * m)
    else:
        max1 += (rightMin[i] * m)

    if n > 0:
        max1 += (rightMax[i] * n)
    else:
        max1 += (rightMin[i] * n)
    final_max = max(max1, final_max)

print(final_max)
