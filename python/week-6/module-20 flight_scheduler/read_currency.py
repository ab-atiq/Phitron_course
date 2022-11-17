import csv
with open('./data/country_currency_rates.csv', 'r') as file:
    lines = csv.reader(file)
    # print(lines)
    for line in lines:
        # print(line)
        if 'Bangladeshi' in line[0]:
            print(line)
