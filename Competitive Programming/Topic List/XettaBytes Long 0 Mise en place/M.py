num = int(input())

# st = ""
# for i in range(1, num+1):
#     st = f"{st}A{i}+{num-i+1}"
#     if i != num:
#         st = f'({st})'

# print(st)


# st2 = f"sin({num})"
# for i in range(1,num):
#     st2 = f"sin({num-i}-{st2})"

# print(st2)


def A(n):
    st2 = f"sin({n})"
    for i in range(1, n):
        ch = ''
        if i % 2 == 0 and n % 2 == 0:
            ch = '+'
        elif i % 2 != 0 and n % 2 != 0:
            ch = '+'
        else:
            ch = '-'
        st2 = f"sin({n-i}{ch}{st2})"
    # print(st2)
    return st2


st = ""
for i in range(1, num+1):
    fun = A(i)
    st = f"{st}{fun}+{num-i+1}"
    if i != num:
        st = f'({st})'
    # print(st)

print(st)

# if st == '((sin(1)+3)sin(1-sin(2))+2)sin(1-sin(2+sin(3)))+1':
#     print("Yes")
