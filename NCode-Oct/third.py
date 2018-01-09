from bisect import bisect_left

a = []


def twosetbits():
    temp = 0
    global a
    for x in range(1,64):
        y = 0
        while y < x:
            temp = (1 << x) + (1 << y)
            if temp <= (10 ** 18):
                a.append(temp)
            y += 1


twosetbits()
a.sort()
present = {}
summ = {}

temp = a[0]
summ[temp] = temp
present[temp] = 1


for i in range(1, len(a)):
    present[a[i]] = 1
    summ[a[i]] = ( summ[a[i-1]] + a[i] ) % 1000000007

t = int(input())

for i in range(t):
    n = int(input())
    if n in present:
        answer = summ[n] % 1000000007
        print(answer)
        continue
    else:
        returned = bisect_left(a, n)
        if returned == 0:
            print(0)
            continue
        returned = returned - 1
        print(summ[a[returned]] % 1000000007)



