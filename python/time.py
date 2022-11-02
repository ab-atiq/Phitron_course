import time
second = time.time()
print(second)

local_time = time.ctime(second)  # ctime return local time of string
print(local_time)

# result = time.localtime(second)
result = time.localtime() # return local time with all info in struct_time
print(result)
print(result.tm_year)
print(result.tm_mday)


result1=time.gmtime()
print(result1)
print(result1.tm_year)
print(result1.tm_mday)

time.sleep(3)  # sleep function delay the execution
print("Check execution delay time 3 second")
