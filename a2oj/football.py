import sys 

streak0 = 1 
streak1 = 1
count1, count0, flag  = 0, 0, 0 
s = input() 
for i in range(len(s)):
    if s[i] == '0':
        if streak0:
            count0 = count0 + 1 
            count1 = 0
            streak1 = 0
        else:
            count0 = count0 + 1 
            count1 = 0 
            streak1 = 0 
            streak0 = 1 
    else:
        if streak1:
            count1 = count1 + 1 
            count0 = 0 
            streak0 = 0 
        else:
            count1 = count1 + 1 
            count0 = 0 
            streak0 = 0 
            streak1 = 1

    if count0 == 7 or count1 == 7:
        flag = 1 
        print("YES")
        break 

if not flag: print("NO")
