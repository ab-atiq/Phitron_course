from math import *

# 1+2+3+4+.....+n, if n=10 then sum=55
n = int(input("Enter last number of series: "))
s1 = 0
for x in range(1, n + 1, 1):
    s1 += x
print("1+2+3+4+.....+n = ", s1)

# 2+4+6+8+.....+n, if n=10 then sum=30
s2 = 0
for x in range(2, n + 1, 2):
    s2 += x
print("2+4+6+8+.....+n = ", s2)

# 1+3+5+7+.....+n, if n=10 then sum=25
s3 = 0
for x in range(1, n + 1, 2):
    s3 += x
print("1+3+5+7+.....+n = ", s3)

# 4+8+12+.....+n, if n=10 then sum=12
s4 = 0
for x in range(4, n + 1, 4):
    s4 += x
print("4+8+12+.....+n = ", s4)

# 1^2+2^2+3^2+.....+n^2, if n=10 then sum=385
s5 = 0
for x in range(1, n + 1, 1):
    s5 += pow(x, 2)
print("1^2+2^2+3^2+.....+n^2 = ", s5)

# 2^2+4^2+6^2+.....+n^2, if n=10 then sum=220
s6 = 0
for x in range(2, n + 1, 2):
    s6 += pow(x, 2)
print("2^2+4^2+6^2+.....+n^2 = ", s6)

# 1*2*3*4*.....*n, if n=10 then mul=3628800
m7 = 1
for x in range(1, n + 1, 1):
    m7 *= x
print("1*2*3*4*.....*n = ", m7)

# 1+1/2+1/3+1/4+....+1/n, if n=10 then sum=2.92896
s8 = 0
for x in range(1, n + 1, 1):
    s8 += 1 / x
print("1+1/2+1/3+1/4+....+1/n = ", s8)

# 2*4*6*8*.....*n, if n=10 then mul=3840
s8 = 1
for x in range(2, n + 1, 2):
    s8 *= x
print("2*4*6*8*.....*n = ", s8)

# 1*3*5*7*.....*n, if n=10 then mul=945
s9 = 1
for x in range(1, n + 1, 2):
    s9 *= x
print("1*3*5*7*.....*n = ", s9)

# 4*8*12*16.....*n, if n=10 then mul=32
s10 = 1
for x in range(4, n + 1, 4):
    s10 *= x
print("1*3*5*7*.....*n = ", s10)

# 1^2*2^2*3^2*.....*n^2, if n=10 then mul=1.4793892e+13
m1 = 1
for x in range(1, n + 1, 1):
    m1 *= pow(x, 2)
print("1^2+2^2+3^2+.....+n^2 = ", m1)

# 2^2*4^2*6^2*.....*n^2, if n=10 then mul=14745600
m2 = 1
for x in range(2, n + 1, 2):
    m2 *= pow(x, 2)
print("2^2+4^2+6^2+.....+n^2 = ", m2)

