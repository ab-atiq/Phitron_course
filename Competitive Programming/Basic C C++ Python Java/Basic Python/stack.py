# books = ["Learn C", "Learn C++", "Learn JAVA"] # append sort form
books = []   # append function use
books.append("Learn C")
books.append("Learn C++")
books.append("Learn JAVA")
print(books)
print("Top book of list: ",books[-1])

books.pop()
print(books)
print("Top book of list: ",books[-1])
books.pop()
print(books)
print("Top book of list: ",books[-1])
books.pop()
print(books)
print("Top book of list: ",books[-1])
books.pop()
if not books:
    print("Books list is empty. so, no books left")


