# convert 50 USD to BDT
# convert 5000 BDT to USD

import csv
with open('./data/country_currency_rates.csv', 'r') as file:
    lines = csv.reader(file)
    for line in lines:
        if 'Bangladeshi' in line[0]:
            BDT = 50*float(line[3])
            USD = 5000*float(line[2])
            print(BDT)
            print(USD)
