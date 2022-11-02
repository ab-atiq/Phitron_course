# using object: first create a class then return from a function
class MultipleValue:
    def __init__(self):
        self.str = "Atiqur Rahman"
        self.age = 22

def fun():
    return MultipleValue()

MVInstance = fun()
print(MVInstance.str)
print(MVInstance.age)

# using tuple: return tuple from a function
def return_tuple_from_fun():
    name = "Abul Bashar"
    age = 23
    return name,age


n,a=return_tuple_from_fun()
print(n,a)

# using a list: return list from function
def return_list_from_fun():
    varsity = "BRUR"
    name = "Atiqur Rahman"
    id = 1905004
    return [name,id,varsity]

ret = return_list_from_fun()
print(ret)

# dictionary: return dictionary
def return_dictionary():
    d = dict()
    d['name']="Abul Bashar"
    d['age']=23
    return d

ret_dic = return_dictionary()
print(ret_dic)

# using data class: Data Class can be used to return a class with automatically added unique methods. The Data Class module has a decorator and functions for automatically adding generated special methods such as __init__() and __repr__() in the user-defined classes.
from dataclasses import dataclass

@dataclass
class Book_list:
    name:str
    per_unit_cost:float
    quantity_available:int = 0
    def total_cost(self):
        return self.per_unit_cost*self.quantity_available

book = Book_list("Introduction to programming.",300,3)
print(book)
x = book.total_cost()
print(x)
