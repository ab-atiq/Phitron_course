class MyNumbers:
    def __iter__(self):
        self.n = 1
        return self

    def __next__(self):
        if self.n <= 20:
            tem = self.n
            self.n += 1
            return tem
        else:
            raise StopIteration


myClass = MyNumbers()
myIter = iter(myClass)  # iterator full object myClass
print(myIter)  

try:
    while True:
        print(next(myIter))

except StopIteration:
    print("Iteration is complete")
