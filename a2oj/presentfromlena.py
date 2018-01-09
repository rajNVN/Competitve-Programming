import sys
n = int(input())
print('  ' * n, end = "")
print('0',sep='')
for i in range(1,n+1):
    print('  ' * (n - i), end = '') 
    for j in range(i+1):
        print(j, end = ' ') 
    for j in range(i-1,-1,-1):
        if j == 0:
            print(j)
        else:
            print(j,end = ' ')

for i in range(1,n):
    print('  ' * (i), end = '') 
    for j in range(n - i + 1):
        print(j, end = ' ')

    for j in range(n-i-1, -1, -1):
        if j == 0:
            print(j)
        else:
            print(j, end = ' ')
print('  ' * n, end="")
print('0',sep='')




