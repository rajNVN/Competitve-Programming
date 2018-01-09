import sys 
inp = map(int, input().split()) 
inp = list(inp)   
n = inp[0] 
a = inp[1] 
b = inp[2] 
diff1 = n - a 
diff2 = b + 1 
if(diff2 >= diff1):
    print(diff1) 
else:
    print(diff2) 



