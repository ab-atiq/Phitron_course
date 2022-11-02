# first way to import
""" 
import function
res=function.multiply(15,2)
print("module output:",res) 
"""

# second way
""" 
from function import add,multiply
res = add(15, 35)
print("module output:", res)
res1= multiply(5,6)
print("module output:",res1)
"""

# third way
from function import *
res = add(15, 35)
print("module output:", res)
res1= multiply(5,6)
print("module output:",res1)

# another way to import as sort form
from kargs import all_types as at
at("Rakib", "Hasan", "Monir", "Alif",
          good="Atiq", better="Rony", best="None")