import sys
n, m = map(int, input().split())
prices = list(map(int, input().split()))
total = sum(prices) 
pricecopy = prices[:]
pricecopy.sort(reverse=True)
prices.sort()

if total >= n:
    temp = n 
else:
    temp = total 

tempi = temp 
mini,maxi = 0, 0 

while temp:
    maxi = maxi +  pricecopy[0] 
    temp = temp - 1 
    pricecopy[0] = pricecopy[0] - 1 
    pricecopy.sort(reverse=True)

temp = tempi  
while temp:
    i = 0  
    while prices[i] == 0: 
        i = i + 1 
    mini = mini + prices[i]
    temp = temp - 1 
    prices[i] = prices[i] - 1 

print(maxi, int(mini))



