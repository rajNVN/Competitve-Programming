t = int(input())

for i in range(t):
    number = input();
    operation = -1
    if '*' in number:
        operator = '*'
    elif '-' in number:
        operator = '-'
    elif '+' in number:
        operator = '+'

number1, number2 = (0, 0)
flag = 0;
for i in range(0, len(number)):
    if(number[i] == operator):
       flag = 1
       continue
    if flag == 1:
        number2 = number2 * 10 + int(number[i])
    else:
       number1 = number1 * 10 + int(number[i])

length1 = len(str(number1))
length2 = len(str(number2))
if operator == '+':
    result = number1 + number2
    if length1 == length2:
        print(" ", number1)
        print(operator,number2)
        print("_ " * (length1 + length2))
        print(" ", result)
elif operator == '-':   
    result = number1 - number2
elif operator == '*':
    result = number1 * number2


if operator == '+' or operator == '+':
    if length1 == length2:
        print(" ", number1)
        print(operator, number2)
        print("-" * (length1 + 1))
        if len(str(result)) == length1:
            print(" ", result)
        else:
            print(result)

        continue
    if length1 < length2:
        diff = length2 - length1
        diff += 1
        print(" " * diff, number1)
        print(operator, number2)
        print("- " * (length2 + 1))
        if len(str(result)) == length2:
            print(" ", result)
        else:
            print(result)
    if length1 > length2:
        diff = length1 - length2
        diff -= 1
        if len(str(result) > length1:
            diff += 1
            print(" ", number1)
        else:
            print(number1)
        print(" " * diff, operator, number2)
        print("_ " * (length1 + 1))
        print(" ", result)









