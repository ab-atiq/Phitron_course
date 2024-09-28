import requests
from bs4 import BeautifulSoup
url = "https://en.wikipedia.org/wiki/IPhone"
text_data = requests.get(url).text.encode('utf-8').decode('ascii', 'ignore')
soup = BeautifulSoup(text_data, 'html.parser')
# print(soup.prettify())
table = soup.find_all('table', {'class': 'wikitable'})
# print(table)
rows = table[1].find_all('tr')[3:]
# print(rows)
for row in rows:
    data = row.find_all(['td', 'th'])
    # print(data)
    try:
        print(data[0].a.text) # Extracting the name of the iPhone. Price not present in the table.
    except:
        print(f"Error to find <a> tag in data")