import sys 
n, m = map(int, input().split()) 
result = ["" for i in range(n)] 
for i in range(n):
    inp = input() 
    for j in range(m):
        if inp[j] == '-':
            result[i] = result[i] +  '-'
        elif (i + j) & 1:
            result[i] = result[i] + 'W'
        else:
            result[i]  = result[i] + 'B'

for word in result:
    print(word)

