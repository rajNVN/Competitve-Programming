import sys

x = int(input())
hr, mm = input().split() 

if hr[0] == '7' or hr[1] == '7' or mm[0] == '7' or mm[1] == '7':
    print(0)
    exit()

hr = int(hr)
mm = int(mm)

th = hr
tm = mm

count = 0

while True:
    if tm - x >= 0:
        count += 1
        tm = tm - x

        if tm == 7:
            print(count)
            break

        tmp = str(tm)
        if len(tmp) == 1:
            if tmp[0] == '7':
                print(count)
                break
        else:
            if tmp[0] == '7' or tmp[1] == '7':
                print(count)
                break
    else:
        count += 1
        th -= 1
        if th < 0:
            th += 24 
        tm = tm - x + 60
        tmp = str(tm)

        if tmp[0] == '7' or tmp[1] == '7':
            print(count)
            break

        tem = str(th)
        if len(tem) == 1:
            if tem[0] == '7':
                print(count)
                break
        else:
            if tem[0] == '7' or tem[1] == '7':
                print(count)
                break
        
         
