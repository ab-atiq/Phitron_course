from math import sqrt
rainfall_list = []
dic_days = {1: 'Saturday', 2: "Sunday", 3: "Monday", 4: "Tuesday", 5: "Wednesday", 6: "Thursday", 7: "Friday"}

for day in range(1, 8):
    print(f"Total rainfall in {dic_days[day]} : ", end="")
    input_rainfall = float(input())
    rainfall_list.append(input_rainfall)

print(rainfall_list)

maximum_rainfall = max(rainfall_list)
minimum_rainfall = min(rainfall_list)

day_max_rainfall = dic_days[rainfall_list.index(maximum_rainfall)+1]
day_min_rainfall = dic_days[rainfall_list.index(minimum_rainfall)+1]

print(f"Maximum {maximum_rainfall} rainfall in {day_max_rainfall} day.")
print(f"Maximum {minimum_rainfall} rainfall in {day_min_rainfall} day.")


len_rainfall_lst = len(rainfall_list)
mean_rainfall_cal = sum(rainfall_list)/len_rainfall_lst

diff_square_sum = 0.0
for i in range(len_rainfall_lst):
    diff_square_sum += (mean_rainfall_cal - rainfall_list[i])**2

std_deviation_rainfall_cal = sqrt(diff_square_sum/(len_rainfall_lst-1))

print("Mean rainfall in week is : ", mean_rainfall_cal)
print("Standard deviation rainfall in week is : ", std_deviation_rainfall_cal)
