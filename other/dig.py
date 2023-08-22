arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
num = int(input("Enter a number to search: "))
flag = 0

for i in arr:
    if i == num:
        flag = 1
        break

if flag == 1:
    print(num, "found in the array")
else:
    print(num, "not found in the array")
