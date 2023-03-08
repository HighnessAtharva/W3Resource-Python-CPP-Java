# Python comes with a library of standard modules. Some modules are built into the interpreter; these provide access to operations that are not part of the core of the language but are nevertheless built in, either for efficiency or to provide access to operating system primitives such as system calls.


# Module - random

# 1.generate a random color hex, a random alphabetical string, random value between two integers (inclusive) and a random multiple of 7 between 0 and 70. Use random.randint()

import random
import string
print("Generate a random color hex:")
print("#{:06x}".format(random.randint(0, 0xFFFFFF)))
print("\nGenerate a random alphabetical string:")
max_length = 255
s = "".join(
    random.choice(string.ascii_letters)
    for _ in range(random.randint(1, max_length))
)
print(s)
print("Generate a random value between two integers, inclusive:")
print(random.randint(0, 10))
print(random.randint(-7, 7))
print(random.randint(1, 1))
print("Generate a random multiple of 7 between 0 and 70:")
print(random.randint(0, 10) * 7)


# 2.select a random element from a list, set, dictionary (value) and a file from a directory. Use random.choice()
import random
import os
print("Select a random element from a list:")
elements = [1, 2, 3, 4, 5]
print(random.choice(elements))
print(random.choice(elements))
print(random.choice(elements))
print("\nSelect a random element from a set:")
elements = {1, 2, 3, 4, 5}
# convert to tuple because sets are invalid inputs
print(random.choice(tuple(elements)))
print(random.choice(tuple(elements)))
print(random.choice(tuple(elements)))
print("\nSelect a random value from a dictionary:")
d = {"a": 1, "b": 2, "c": 3, "d": 4, "e": 5}
key = random.choice(list(d))
print(d[key])
key = random.choice(list(d))
print(d[key])
key = random.choice(list(d))
print(d[key])
print("\nSelect a random file from a directory.:")
print(random.choice(os.listdir("/")))



# 3.generate a random alphabetical character, alphabetical string and alphabetical string of a fixed length. Use random.choice()
import random
import string
print("Generate a random alphabetical character:")
print(random.choice(string.ascii_letters))
print("\nGenerate a random alphabetical string:")
max_length = 255
str1 = "".join(
    random.choice(string.ascii_letters)
    for _ in range(random.randint(1, max_length))
)
print(str1)
print("\nGenerate a random alphabetical string of a fixed length:")
str1 = "".join(random.choice(string.ascii_letters) for _ in range(10))
print(str1)



# 4.construct a seeded random number generator, also generate a float between 0 and 1, excluding 1. Use random.random()
import random
print("Construct a seeded random number generator:")
print(random.Random().random())
print(random.Random(0).random())
print("\nGenerate a float between 0 and 1, excluding 1:")
print(random.random())



# 5.generate a random integer between 0 and 6 - excluding 6, random integer between 5 and 10 - excluding 10, random integer between 0 and 10, with a step of 3 and random date between two dates. Use random.randrange()
import random
import datetime
print("Generate a random integer between 0 and 6:")
print(random.randrange(5))
print("Generate random integer between 5 and 10, excluding 10:")
print(random.randrange(start=5, stop=10))
print("Generate random integer between 0 and 10, with a step of 3:")
print(random.randrange(start=0, stop=10, step=3))
print("\nRandom date between two dates:")
start_dt = datetime.date(2019, 2, 1)
end_dt = datetime.date(2019, 3, 1)
time_between_dates = end_dt - start_dt
days_between_dates = time_between_dates.days
random_number_of_days = random.randrange(days_between_dates)
random_date = start_dt + datetime.timedelta(days=random_number_of_days)
print(random_date)



# 6.shuffle the elements of a given list. Use random.shuffle()

import random
nums = [1, 2, 3, 4, 5]
print("Original list:")
print(nums)
random.shuffle(nums)
print("Shuffle list:")
print(nums)
words = ['red', 'black', 'green', 'blue']
print("\nOriginal list:")
print(words)
random.shuffle(words)
print("Shuffle list:")
print(words)


# 7.generate a float between 0 and 1, inclusive and generate a random float within a specific range. Use random.uniform()

import random
print("Generate a float between 0 and 1, inclusive:")
print(random.uniform(0, 1))
print("\nGenerate a random float within a range:")
random_float = random.uniform(1.0, 3.0)
print(random_float)


# 8.create a list of random integers and randomly select multiple items from the said list. Use random.sample()
import random
print("Create a list of random integers:")
population = range(100)
nums_list = random.sample(population, 10)
print(nums_list)
no_elements = 4
print("\nRandomly select",no_elements,"multiple items from the said list:")
result_elements = random.sample(nums_list, no_elements)
print(result_elements)
no_elements = 8
print("\nRandomly select",no_elements,"multiple items from the said list:")
result_elements = random.sample(nums_list, no_elements)
print(result_elements)



# 9.set a random seed and get a random number between 0 and 1. Use random.random. 
import random
print("Set a random seed and get a random number between 0 and 1:")
random.seed(0)
new_random_value = random.random()
print(new_random_value)
random.seed(1)
new_random_value = random.random()
print(new_random_value)
random.seed(2)
new_random_value = random.random()
print(new_random_value)


# Module - types

# 1.check if a function is a user-defined function or not. Use types.FunctionType, types.LambdaType()
import types
def func(): 
    return 1

print(isinstance(func, types.FunctionType))
print(isinstance(func, types.LambdaType))
print(isinstance(lambda x: x, types.FunctionType))
print(isinstance(lambda x: x, types.LambdaType))
print(isinstance(max, types.FunctionType))
print(isinstance(max, types.LambdaType))
print(isinstance(abs, types.FunctionType))
print(isinstance(abs, types.LambdaType))



# 2.check if a given value is a method of a user-defined class. Use types.MethodType()
import types
class C:
    def x():
        return 1
    def y():
        return 1    
        
def b():
    return 2

print(isinstance(C().x, types.MethodType))
print(isinstance(C().y, types.MethodType))
print(isinstance(b, types.MethodType))
print(isinstance(max, types.MethodType))
print(isinstance(abs, types.MethodType))



# 3.check if a given function is a generator or not. Use types.GeneratorType()

import types
def a(x):
    yield x
        
def b(x):
    return x

def add(x, y):
    return x + y

print(isinstance(a(456), types.GeneratorType))
print(isinstance(b(823), types.GeneratorType))
print(isinstance(add(8,2), types.GeneratorType))


# 4.check if a given value is compiled code or not. Also check if a given value is a module or not. Use types.CodeType, types.ModuleType()

import types
print("Check if a given value is compiled code:")
code = compile("print('Hello')", "sample", "exec")
print(isinstance(code, types.CodeType))
print(isinstance("print(abs(-111))", types.CodeType))
print("\nCheck if a given value is a module:")
print(isinstance(types, types.ModuleType))


# Module - decimal

# 1.construct a Decimal from a float and a Decimal from a string. Also represent the Decimal value as a tuple. Use decimal.Decimal

import decimal
print("Construct a Decimal from a float:")
pi_val = decimal.Decimal(3.14159)
print(pi_val)
print(pi_val.as_tuple())
print("\nConstruct a Decimal from a string:")
num_str = decimal.Decimal("123.25")
print(num_str)
print(num_str.as_tuple())


# 2.configure the rounding to round up and round down a given decimal value. Use decimal.Decimal
import decimal
print("Configure the rounding to round up:")
decimal.getcontext().prec = 1
decimal.getcontext().rounding = decimal.ROUND_UP
print(decimal.Decimal(30) / decimal.Decimal(4))
print("\nConfigure the rounding to round down:")
decimal.getcontext().prec = 3
decimal.getcontext().rounding = decimal.ROUND_DOWN
print(decimal.Decimal(30) / decimal.Decimal(4))
print("\nConfigure the rounding to round up:")
print(decimal.Decimal('8.325').quantize(decimal.Decimal('.01'), rounding=decimal.ROUND_UP))
print("\nConfigure the rounding to round down:")
print(decimal.Decimal('8.325').quantize(decimal.Decimal('.01'), rounding=decimal.ROUND_DOWN))



# 3.round a Decimal value to the nearest multiple of 0.10, unless already an exact multiple of 0.05. Use decimal.Decimal

from decimal import Decimal
#Source: https://bit.ly/3hEyyY4

def round_to_10_cents(x):
    remainder = x.remainder_near(Decimal('0.10'))
    return x if abs(remainder) == Decimal('0.05') else x - remainder

# Test code.
for x in range(80, 120):
    y = Decimal(x) / Decimal('1E2')
    print("{0} rounds to {1}".format(y, round_to_10_cents(y)))


# 4.configure the rounding to round to the floor, ceiling. Use decimal.ROUND_FLOOR, decimal.ROUND_CEILING
import decimal
print("Configure the rounding to round to the floor:")
decimal.getcontext().prec = 4
decimal.getcontext().rounding = decimal.ROUND_FLOOR
print(decimal.Decimal(20) / decimal.Decimal(6))
print("\nConfigure the rounding to round to the ceiling:")
decimal.getcontext().prec = 4
decimal.getcontext().rounding = decimal.ROUND_CEILING
print(decimal.Decimal(20) / decimal.Decimal(6))



# 5.configure the rounding to round to the nearest - with ties going towards 0, with ties going away from 0. Use decimal.ROUND_HALF_DOWN, decimal.ROUND_HALF_UP
import decimal
print("Configure the rounding to round to the nearest, with ties going towards 0:")
decimal.getcontext().prec = 1
decimal.getcontext().rounding = decimal.ROUND_HALF_DOWN
print(decimal.Decimal(10) / decimal.Decimal(4))
print("\nConfigure the rounding to round to the nearest, with ties going away from 0:")
decimal.getcontext().prec = 1
decimal.getcontext().rounding = decimal.ROUND_HALF_UP
print(decimal.Decimal(10) / decimal.Decimal(4))



# 6.configure the rounding to round to the nearest, with ties going to the nearest even integer. Use decimal.ROUND_HALF_EVEN
import decimal
print("Configure the rounding to round to the nearest, with ties going to the nearest even integer:")
decimal.getcontext().prec = 1
decimal.getcontext().rounding = decimal.ROUND_HALF_EVEN
print(decimal.Decimal(10) / decimal.Decimal(4))



# 7.display a given decimal value in scientific notation. Use decimal.Decimal
import decimal
#Source: https://bit.ly/2SfZEtL
def format_e(n):
    a = '%E' % n
    return a.split('E')[0].rstrip('0').rstrip('.') + 'E' + a.split('E')[1]

print("Original decimal value: "+ "40800000000.00000000000000")
print("Scientific notation of the said decimal value:")
print(format_e(decimal.Decimal('40800000000.00000000000000')))
print("\nOriginal decimal value: "+ "40000000000.00000000000000")
print("Scientific notation of the said decimal value:")
print(format_e(decimal.Decimal('40000000000.00000000000000')))
print("\nOriginal decimal value: "+ "40812300000.00000000000000")
print("Scientific notation of the said decimal value:")
print(format_e(decimal.Decimal('40812300000.00000000000000')))



# Module - copy

# 1.create a shallow copy of a given list. Use copy.copy
import copy
nums_x = [1, [2, 3, 4]]
print("Original list: ", nums_x)
nums_y = copy.copy(nums_x)
print("\nCopy of the said list:")
print(nums_y)
print("\nChange the value of an element of the original list:")
nums_x[1][1] = 10
print(nums_x)
print("\nSecond list:")
print(nums_y)
nums =  [[1], [2]]
nums_copy = copy.copy(nums)
print("\nOriginal list:")
print(nums)
print("\nCopy of the said list:")
print(nums_copy)
print("\nChange the value of an element of the original list:")
nums[0][0] = 0
print("\nFirst list:")
print(nums)
print("\nSecond list:")
print(nums_copy)



# 2.create a deep copy of a given list. Use copy.copy
import copy
nums_x = [1, [2, 3, 4]]
print("Original list: ", nums_x)
nums_y = copy.deepcopy(nums_x)
print("\nDeep copy of the said list:")
print(nums_y)
print("\nChange the value of an element of the original list:")
nums_x[1][1] = 10
print(nums_x)
print("\nCopy of the second list (Deep copy):")
print(nums_y)
nums = [[1, 2, 3], [4, 5, 6]]
deep_copy = copy.deepcopy(nums)
print("\nOriginal list:")
print(nums)
print("\nDeep copy of the said list:")
print(deep_copy)
print("\nChange the value of some elements of the original list:")
nums[0][2] = 55
nums[1][1] = 77
print("\nOriginal list:")
print(nums)
print("\nSecond list (Deep copy):")
print(deep_copy)



# 3.create a shallow copy of a given dictionary. Use copy.copy
import copy
nums_x = {"a":1, "b":2, 'cc':{"c":3}}
print("Original dictionary: ", nums_x)
nums_y = copy.copy(nums_x)
print("\nCopy of the said list:")
print(nums_y)
print("\nChange the value of an element of the original dictionary:")
nums_x["cc"]["c"] = 10
print(nums_x)
print("\nSecond dictionary:")
print(nums_y)

nums = {"x":1, "y":2, 'zz':{"z":3}}
nums_copy = copy.copy(nums)
print("\nOriginal dictionary :")
print(nums)
print("\nCopy of the said list:")
print(nums_copy)
print("\nChange the value of an element of the original dictionary:")
nums["zz"]["z"] = 10
print("\nFirst dictionary:")
print(nums)
print("\nSecond dictionary (copy):")
print(nums_copy)



# 4.create a deep copy of a given dictionary. Use copy.copy

import copy
nums_x = {"a":1, "b":2, 'cc':{"c":3}}
print("Original dictionary: ", nums_x)
nums_y = copy.deepcopy(nums_x)
print("\nDeep copy of the said list:")
print(nums_y)
print("\nChange the value of an element of the original dictionary:")
nums_x["cc"]["c"] = 10
print(nums_x)
print("\nSecond dictionary (Deep copy):")
print(nums_y)

nums = {"x":1, "y":2, 'zz':{"z":3}}
nums_copy = copy.deepcopy(nums)
print("\nOriginal dictionary :")
print(nums)
print("\nDeep copy of the said list:")
print(nums_copy)
print("\nChange the value of an element of the original dictionary:")
nums["zz"]["z"] = 10
print("\nFirst dictionary:")
print(nums)
print("\nSecond dictionary (Deep copy):")
print(nums_copy)


# Module - csv

# 1.read and display the content of a given CSV file. Use csv.reader

import csv
reader = csv.reader(open("employees.csv"))
for row in reader:
    print(row)


# 2.count the number of lines in a given CSV file. Use csv.reader
import csv
reader = csv.reader(open("employees.csv"))
no_lines= len(list(reader))
print(no_lines)



# 3.parse a given CSV string and get the list of lists of string values. Use csv.reader

import csv
csv_string = """1,2,3
4,5,6
7,8,9
"""
print("Original string:")
print(csv_string)
lines = csv_string.splitlines()
print("List of CSV formatted strings:")
print(lines)
reader = csv.reader(lines)
parsed_csv = list(reader)
print("\nList representation of the CSV file:")
print(parsed_csv)


# 4.read the current line from a given CSV file. Use csv.reader
import csv
f = open("employees.csv", newline='')
csv_reader = csv.reader(f)
print(next(csv_reader))
print(next(csv_reader))
print(next(csv_reader))



# 5.skip the headers of a given CSV file. Use csv.reader

import csv
f = open("employees.csv", "r")
reader = csv.reader(f)
next(reader)

for row in reader:
    print(row)


# 6.write (without writing separate lines between rows) and read a CSV file with specified delimiter. Use csv.reader

import csv
with open("test.csv", "w", newline='') as fw:
    writer = csv.writer(fw, delimiter = ",")
    writer.writerow(["a","b","c"])
    writer.writerow(["d","e","f"])
    writer.writerow(["g","h","i"])
with open("test.csv", "r") as fr:
    csv = csv.reader(fr, delimiter = ",")
    for row in csv:
      print(row)
# 7.write dictionaries and a list of dictionaries to a given CSV file. Use csv.reader
import csv
print("Write dictionaries to a CSV file:")
with open("test.csv", "w", newline='') as fw:
    writer = csv.DictWriter(fw, fieldnames=["Name", "Class"])
    writer.writeheader()
    writer.writerow({"Name": "Jasmine Barrett", "Class": "V"})
    writer.writerow({"Name": "Garry Watson", "Class": "V"})
    writer.writerow({"Name": "Courtney Caldwell", "Class": "VI"})
with open("test.csv", "r") as fr:
    csv = csv.reader(fr, delimiter = ",")
    for row in csv:
      print(row)



