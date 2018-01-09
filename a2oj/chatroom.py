import sys
inp = input()
if 'h' not in inp or 'e' not in inp or 'l' not in inp or 'o' not in inp :
    print("NO")
    exit()
result = "" 
countl = 0 
flagh = flage = flagl1 = flagl2 = flago  = 0
for c in inp:
    if c in "hello":
        if c == 'o':
            if flagh and flage and flagl1 and flagl2 and not(flago):
                result = result + c 
                flago = 1 
        if c == 'h':
            if flagh:
                pass
            else:
                result = result + c
                flagh = 1
        elif c == 'e':
            if flagh and (not flage):
                result = result + c
                flage = 1 
        elif c == 'l':
            if flagh and flage and countl < 2 and (not flago):
                if countl == 0:
                    flagl1 = 1
                else:
                    flagl2 = 1 
                countl = countl + 1 
                result = result + c
if result == 'hello':
    print("YES")
else:
    print("NO")
