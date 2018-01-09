import collections
import sys


s = input()
prev = s[0]
flag = {}
for i in len(s):
    if prev == s[i] or s[i] == s[i+1]:
        flag[s[i]] = 1;

for i in len(s):
    if s[i] in flag:
        s[i] = ';'
newstring = ''
for i in len(s):
    if s[i] != ';':
        newstring += s[i]

alpha = "abcdefghijklmnopqrstuvwxyz"


cnterofall = collections.Counter(newstring)
maxi = -9999


for a in set(newstring):
    cntofa = cnterofall[a]
    splitstring = newstring.split(a)
    temp = collections.Counter('')
    for ele in splitstring:
        if ele == '': continue
        temp = temp + collections.Counter(ele)
    tempmax = 0
    for c in temp:
        if temp[c] == cntofa or temp[c] == cntofa + 1 or temp[c] == cntofa - 1
            tempmax = cntofa + cnterofall[c]
    if tempmax > maxi:
        maxi = tempmax

print(maxi)



