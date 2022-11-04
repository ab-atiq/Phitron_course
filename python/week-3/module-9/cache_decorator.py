# 1, 1, 2, 3, 5, 8, 13, 21, 34 ----

from functools import cache
from time import time

# here calculate nth fibonacci number.
@cache
def fibo(n):
    if n <= 1:
        return 1
    return fibo(n-1)+fibo(n-2)


start_time = time()
for i in range(40):
    print(i, fibo(i))

end_time = time()
millisecond = (end_time-start_time)*1000  # millisecond = second + 1000
print("Total time", millisecond)

# without cache use
# Total time: 121155.08341789246

# with cache use
# Total time 30.962705612182617
