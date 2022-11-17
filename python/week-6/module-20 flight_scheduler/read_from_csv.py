import csv
with open("./data/friend_age_id.csv", 'r') as file:
    lines = csv.reader(file)
    print(lines)
    header = next(lines)
    for line in lines:
        print(line)
    print(header)
