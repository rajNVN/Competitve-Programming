import sys
s = input() 
result = "" 
for i in range(len(s)):
    if s[i] not in "aeiouy" and s[i] not in "AEIOUY":
        result = result + '.' 
        result = result + s[i] 

print(result.lower())
