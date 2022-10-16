# when find 8 then loop will skip after continue statement
num = 0
while num <= 20:
    num += 1
    if num % 2 == 1:
        continue
    print(num)
