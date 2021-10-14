"""
1. Write a Python script to sort (ascending and descending) a dictionary
by value.
"""

my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}

print(sorted(my_dict.items(), key=lambda x: x[1]))
print(sorted(my_dict.items(), key=lambda x: x[1], reverse=True))
    
"""
2. Write a Python script to add a key to a dictionary.
"""

my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}

my_dict['f'] = 6
print(my_dict)

"""
3. Write a Python script to concatenate following dictionaries to create
a new one. 
Sample Dictionary : 
dic1={1:10, 2:20} 
dic2={3:30, 4:40} 
dic3={5:50, 6:60}
Expected Result : {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}
"""

dict1={1:10, 2:20} 
dict2={3:30, 4:40} 
dict3={5:50, 6:60}

combined_dict = {k: v for k, v in dict1.items() | dict2.items() | dict3.items()}
print(combined_dict)

"""
4. Write a Python script to check if a given key already exists in a dictionary.
"""

my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}

print('a' in my_dict)
print('x' in my_dict)

"""
5. Write a Python program to iterate over a dictionary using for loop.
"""

my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}

for k, v in my_dict.items():
    print(k, v)

"""
6.Write a Python script to generate and print a dictionary that contains
a number (between 1 and n) in the form (x, x*x).
Sample: (n = 5) 
Expected Output: {1: 1, 2: 4, 3: 9, 4: 16, 5: 25}
"""

n = 5

my_dict = {x: x**2 for x in range(1, n+1)}
print(my_dict)

"""
7. Write a Python script to print a dictionary where the keys are numbers
between 1 and 15 (both included) and the values are square of keys.
Sample Dictionary 
{1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64, 9: 81, 10: 100, 11: 121,
12: 144, 13: 169, 14: 196, 15: 225}
"""

my_dict = {x: x**2 for x in range(1, 16)}
print(my_dict)

"""
8. Write a Python script to merge two Python dictionaries.
"""

# solution 1
dict_one = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}
dict_two = {'f': 6, 'g': 7, 'h': 8, 'i': 9, 'j': 0}

for key in dict_two:                 # dict_one.update(dict_two)
    dict_one[key] = dict_two[key]  

print(dict_one)

# soltuion 2
dict_one = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}
dict_two = {'f': 6, 'g': 7, 'h': 8, 'i': 9, 'j': 0}

combined_dict = {}
combined_dict.update(dict_one, **dict_two)
print(combined_dict)

"""
10. Write a Python program to sum all the items in a dictionary.
"""

my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}

# solution 1
dict_sum = sum(my_dict.values())
print(dict_sum)

# solution 2
dict_sum = 0
for k, v in my_dict.items():
    dict_sum += v
print(dict_sum)

"""
12. Write a Python program to remove a key from a dictionary.
"""

# solution 1
my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}
if my_dict['a']:
    del my_dict['a']
print(my_dict)

# solution 2
my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}
my_dict.pop('a', 0)
print(my_dict)

"""
13. Write a Python program to map two lists into a dictionary.
"""

list_one = ['a', 'b', 'c', 'd']
list_two = [1, 2, 3, 4]

# solution 1
my_dict = {k: v for (k, v) in zip(list_one, list_two)}
print(my_dict)

# solution 2
my_dict = dict(zip(list_one, list_two))
print(my_dict)

"""
14. Write a Python program to sort a dictionary by key.
"""

my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}

for key in sorted(my_dict.keys()):
    print(key, ":", my_dict[key])

"""
15. Write a Python program to get the maximum and minimum value in a dictionary.
"""

my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}

dict_min = min(my_dict.values())
dict_max = max(my_dict.values())

print('in dictionary', my_dict, 'max is %d and min is %d' % (dict_max, dict_min))

"""
16.Write a Python program to get a dictionary from an object's fields.
"""

print(dict.__dict__)

"""
17. Write a Python program to remove duplicates from Dictionary.
"""

# solution 1
my_dict = {'a': 1, 'b': 2, 'c': 1, 'd': 2, 'e': 5}

unique_values = []
keys_to_remove = []

for key in my_dict:
    if my_dict[key] in unique_values:
        keys_to_remove.append(key)
    else:
        unique_values.append(my_dict[key])

for key in keys_to_remove:
    del my_dict[key]        # my_dict.pop(key)

print(my_dict)

# solution 2
my_dict = {'a': 1, 'b': 2, 'c': 1, 'd': 2, 'e': 5}

new_dict = {}

for key, value in my_dict.items():
    if value not in new_dict.values():
        new_dict[key] = value

print(new_dict)

"""
18. Write a Python program to check a dictionary is empty or not.
"""

my_dict = {}
my_other_dict = {'a': 1}

if not my_dict:
    print("dicttionary", my_dict, "is empty")
else:
    print("dicttionary", my_dict, "is NOT empty")

if not my_other_dict:
    print("dicttionary", my_other_dict, "is empty")
else:
    print("dicttionary", my_other_dict, "is NOT empty")

"""
19. Write a Python program to combine two dictionary adding values
for common keys. 
d1 = {'a': 100, 'b': 200, 'c':400}
d2 = {'a': 300, 'b': 200, 'd':400}
Sample output: Counter({'a': 400, 'b': 400, 'd': 400, 'c': 300})
"""

d1 = {'a': 100, 'b': 200, 'c':400}
d2 = {'a': 300, 'b': 200, 'd':400}
counter = {}
counter = d1.copy()

for key in d2:
    if key in counter:
        counter[key] += d2[key]
    else:
        counter[key] = d2[key]
print(counter)

"""
20. Write a Python program to print all unique values in a dictionary.
Sample Data: [{"V": "S001"}, {"V": "S002"}, {"VI": "S001"},
            {"VI": "S005"}, {"VII": "S005"}, {"V": "S009"}, {"VIII": "S007"}]
Expected Output: Unique Values: {'S005', 'S002', 'S007', 'S001', 'S009'}
"""

my_list = [{"V": "S001"}, {"V": "S002"}, {"VI": "S001"},
            {"VI": "S005"}, {"VII": "S005"}, {"V": "S009"}, {"VIII": "S007"}]
# solution 1
my_set = set()
for dictionary in my_list:
    for k, v in dictionary.items():
        my_set.add(v)
print(my_set)

# solution 1 with set comprehension
my_set = {v for d in my_list for k, v in d.items()}
print(my_set)

"""
21. Write a Python program to create and display all combinations of letters,
selecting each letter from a different key in a dictionary. 
Sample data : {'1':['a','b'], '2':['c','d']}
Expected Output: 
ac
ad
bc
bd
"""

my_dict = {'1':['a','b'], '2':['c','d']}

my_list = list(my_dict.values())
print(my_list)
for i in my_list[0]:
    for j in range(1, len(my_list)):
        for x in my_list[j]:
            my_string = i + x
            print(my_string)

"""
22. Write a Python program to find the highest 3 values in a dictionary.
"""

my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 5, 'x': 2}
sorted_values_list = sorted(set(my_dict.values()))
print("the highest 3 values are", sorted_values_list[-3:])
keys_with_highest_values = []
for key in my_dict:
    if my_dict[key] in sorted_values_list[-3:]:
        keys_with_highest_values.append(key)
print("their keys are (not in order)", keys_with_highest_values)

"""
23. Write a Python program to combine values in python list of dictionaries.
Sample data: [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount': 300},
{'item': 'item1', 'amount': 750}]
Expected Output: Counter({'item1': 1150, 'item2': 300})
"""

my_list = [{'item': 'item1', 'amount': 400},
           {'item': 'item2', 'amount': 300},
           {'item': 'item1', 'amount': 750}]

new_list = []
for d in my_list:
    new_list.append(tuple(d.values()))
combined_dict = {}
for t in new_list:
    if t[0] in combined_dict:
        combined_dict[t[0]] += t[1]
    else:
        combined_dict[t[0]] = t[1]
print(combined_dict)

"""
24. Write a Python program to create a dictionary from a string. 
Note: Track the count of the letters from the string.
Sample string : 'w3resource'
Expected output: {'3': 1, 's': 1, 'r': 2, 'u': 1, 'w': 1, 'c': 1, 'e': 2, 'o': 1}
"""

my_string = 'w3resource'

my_dict = {letter: my_string.count(letter) for letter in my_string}
print(my_dict)

"""
25. Write a Python program to print a dictionary in table format.
"""

my_dict = {'alice': 11, 'benji': 24, 'cilian': 38, 'david': 42, 'ewan': 56}

for key, value in my_dict.items():
    print('{:<7s}'.format(key), '{:>3d}'.format(value))

"""
26. Write a Python program to count the values associated with key in a dictionary.
Sample data: = [{'id': 1, 'success': True, 'name': 'Lary'}, {'id': 2, 'success': False, 'name': 'Rabi'}, {'id': 3, 'success': True, 'name': 'Alex'}]
Expected result: Count of how many dictionaries have success as True
"""

my_list = [{'id': 1, 'success': True, 'name': 'Lary'},
           {'id': 2, 'success': False, 'name': 'Rabi'},
           {'id': 3, 'success': True, 'name': 'Alex'}]

# solution 1
success_count = 0
for dictionary in my_list:
    if 'success' in dictionary:
        if dictionary['success'] == True:
            success_count += 1
print(success_count)
    
"""
27. Write a Python program to convert a list into a nested dictionary of keys.
"""

my_list = [1, 2, 3, 4, 5]
my_dict = {}

"""
28. Write a Python program to sort a list alphabetically in a dictionary.
"""

my_dict = {'a': [2, 3, 5],
           'b': [1, 8, 4],
           'c': [9, 0, 1]}

for li in my_dict.values():
    li.sort()
print(my_dict)

"""
29. Write a Python program to remove spaces from dictionary keys.
"""

my_dict = {'a b c': [2, 3, 5],
           'b d e': [1, 8, 4],
           'c f g': [9, 0, 1]}

for key in my_dict:
    new_key = key.replace(' ', '')
    my_dict[new_key] = my_dict.pop(key)
print(my_dict)

"""
30. Write a Python program to get the top three items in a shop.
Sample data: {'item1': 45.50, 'item2':35, 'item3': 41.30,
'item4':55, 'item5': 24}
Expected Output: 
item4 55
item1 45.5
item3 41.3
"""

items_dict = {'item1': 45.50, 'item2':35, 'item3': 41.30, 'item4':55, 'item5': 24}

my_list = [(k, v) for k,v in items_dict.items()]
my_list.sort(key=lambda x: x[1], reverse=True)
for i in my_list[:3]:
    print('{:<5s}'.format(i[0]), '{:<5.2f}'.format(i[1]))

"""
31. Write a Python program to get the key, value and item in a dictionary.
"""

my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 5, 'x': 2}

for k, v in my_dict.items():
    print('key:', k, 'value:', v, 'item:', (k, v))

"""
32. Write a Python program to print a dictionary line by line.
"""

my_dict = {'alice': 11, 'benji': 24, 'cilian': 38, 'david': 42, 'ewan': 56}

for k,v in my_dict.items():
    print(k)
    print(v)

"""
33. Write a Python program to check multiple keys exists in a dictionary.
"""

my_dict = {'a': 1}
my_other_dict = {'a': 1, 'b': 2}
my_empty_dict = {}

if len(my_dict.keys()) > 1:
    print('dictionary', my_dict, 'has multiple keys')
else:
    print('dictionary', my_dict, 'does not have multiple keys')

if len(my_other_dict.keys()) > 1:
    print('dictionary', my_other_dict, 'has multiple keys')
else:
    print('dictionary', my_other_dict, 'does not have multiple keys')

if len(my_empty_dict.keys()) > 1:
    print('dictionary', my_empty_dict, 'has multiple keys')
else:
    print('dictionary', my_empty_dict, 'does not have multiple keys')

"""
34. Write a Python program to count number of items in a dictionary value
that is a list.
"""

my_dict = {'a': [2, 3, 5],
           'b': [1, 8, 4],
           'c': [9, 0, 1],
           'd': 3}

for k, v in my_dict.items():
    if isinstance(v, list):
        print('key=', k, 'value lenth=', len(v))
    else:
        print('key=', k, 'value is not a list')

"""
35. Write a Python program to sort Counter by value. 
Sample data : {'Math':81, 'Physics':83, 'Chemistry':87}
Expected data: [('Chemistry', 87), ('Physics', 83), ('Math', 81)]
"""

my_dict = {'Math':81, 'Physics':83, 'Chemistry':87}
my_list = list(my_dict.items())
my_list.sort(key=lambda x: x[1], reverse= True)
print(my_list)

"""
36. Write a Python program to create a dictionary from two lists
without losing duplicate values. 
Sample lists: ['Class-V', 'Class-VI', 'Class-VII', 'Class-VIII'], [1, 2, 2, 3]
Expected Output: defaultdict(<class 'set'>, {'Class-VII': {2}, 'Class-VI': {2},
'Class-VIII': {3}, 'Class-V': {1}})
"""

list_one = ['Class-V', 'Class-VI', 'Class-VII', 'Class-VIII']
list_two = [1, 2, 2, 3]

my_dict = {k: v for (k, v) in zip(list_one, list_two)}
print(my_dict)

"""
37. Write a Python program to replace dictionary values with their sum.
"""

my_dict = {'a': [2, 3, 5],
           'b': [1, 8, 4],
           'c': [9, 0, 1]}

my_new_dict = {k: sum(v) for k, v in my_dict.items()}
print(my_new_dict)

"""
38. Write a Python program to match key values in two dictionaries. 
Sample dictionary: {'key1': 1, 'key2': 3, 'key3': 2}, {'key1': 1, 'key2': 2}
Expected output: key1: 1 is present in both x and y
"""
dict_one = {'key1': 1, 'key2': 3, 'key3': 2}
dict_two = {'key1': 1, 'key2': 2}
l1=sorted(list(dict_one))
l2=sorted(list(dict_two))
l_intersection=l1 and l2
for key in l_intersection:
    print("Key is present in both", l_intersection)
    break

# 39. Write a Python program to store a given dictionary in a json file. 
# Original dictionary:
# {'students': [{'firstName': 'Nikki', 'lastName': 'Roysden'}, {'firstName': 'Mervin', 'lastName': 'Friedland'}, {'firstName': 'Aron ', 'lastName': 'Wilkins'}], 'teachers': [{'firstName': 'Amberly', 'lastName': 'Calico'}, {'firstName': 'Regine', 'lastName': 'Agtarap'}]}
# <class 'dict'>
# Json file to dictionary:
# {'students': [{'firstName': 'Nikki', 'lastName': 'Roysden'}, {'firstName': 'Mervin', 'lastName': 'Friedland'}, {'firstName': 'Aron ', 'lastName': 'Wilkins'}], 'teachers': [{'firstName': 'Amberly', 'lastName': 'Calico'}, {'firstName': 'Regine', 'lastName': 'Agtarap'}]}

d = {"students":[{"firstName": "Nikki", "lastName": "Roysden"},
               {"firstName": "Mervin", "lastName": "Friedland"},
               {"firstName": "Aron ", "lastName": "Wilkins"}],
"teachers":[{"firstName": "Amberly", "lastName": "Calico"},
         {"firstName": "Regine", "lastName": "Agtarap"}]}
print("Original dictionary:")
print(d)
print(type(d))
import json
 
with open("dictionary", "w") as f:
   json.dump(d, f, indent = 4, sort_keys = True)
 
print("\nJson file to dictionary:")
with open('dictionary') as f:
 data = json.load(f)
print(data)

# 40. Write a Python program to create a dictionary of keys x, y, and z where each key has as value a list from 11-20, 21-30, and 31-40 respectively. Access the fifth value of each key from the dictionary. 
# {'x': [11, 12, 13, 14, 15, 16, 17, 18, 19],
# 'y': [21, 22, 23, 24, 25, 26, 27, 28, 29],
# 'z': [31, 32, 33, 34, 35, 36, 37, 38, 39]}
# 15
# 25
# 35
# x has value [11, 12, 13, 14, 15, 16, 17, 18, 19]
# y has value [21, 22, 23, 24, 25, 26, 27, 28, 29]
# z has value [31, 32, 33, 34, 35, 36, 37, 38, 39]
d = {"students":[{"firstName": "Nikki", "lastName": "Roysden"},
               {"firstName": "Mervin", "lastName": "Friedland"},
               {"firstName": "Aron ", "lastName": "Wilkins"}],
"teachers":[{"firstName": "Amberly", "lastName": "Calico"},
         {"firstName": "Regine", "lastName": "Agtarap"}]}
print("Original dictionary:")
print(d)
print(type(d))
import json
 
with open("dictionary", "w") as f:
   json.dump(d, f, indent = 4, sort_keys = True)
 
print("\nJson file to dictionary:")
with open('dictionary') as f:
 data = json.load(f)
print(data)


# 41. Write a Python program to drop empty Items from a given Dictionary. 
# Original Dictionary:
# {'c1': 'Red', 'c2': 'Green', 'c3': None}
# New Dictionary after dropping empty items:
# {'c1': 'Red', 'c2': 'Green'}

dict1 = {'c1': 'Red', 'c2': 'Green', 'c3':None}
print("Original Dictionary:")
print(dict1)
print("New Dictionary after dropping empty items:")
dict1 = {key:value for (key, value) in dict1.items() if value is not None}
print(dict1)

# 42. Write a Python program to filter a dictionary based on values. 
# Original Dictionary:
# {'Cierra Vega': 175, 'Alden Cantrell': 180, 'Kierra Gentry': 165, 'Pierre Cox': 190}
# Marks greater than 170:
# {'Cierra Vega': 175, 'Alden Cantrell': 180, 'Pierre Cox': 190}

marks = {'Cierra Vega': 175, 'Alden Cantrell': 180, 'Kierra Gentry': 165, 'Pierre Cox': 190}
print("Original Dictionary:")
print(marks)
print("Marks greater than 170:")
result = {key:value for (key, value) in marks.items() if value >= 170}
print(result)

# 43. Write a Python program to convert more than one list to nested dictionary. 
# Original strings:
# ['S001', 'S002', 'S003', 'S004']
# ['Adina Park', 'Leyton Marsh', 'Duncan Boyle', 'Saim Richards']
# [85, 98, 89, 92]
# Nested dictionary:
# [{'S001': {'Adina Park': 85}}, {'S002': {'Leyton Marsh': 98}}, {'S003': {'Duncan Boyle': 89}}, {'S004': {'Saim Richards': 92}}]

def nested_dictionary(l1, l2, l3):
     result = [{x: {y: z}} for (x, y, z) in zip(l1, l2, l3)]
     return result

student_id = ["S001", "S002", "S003", "S004"] 
student_name = ["Adina Park", "Leyton Marsh", "Duncan Boyle", "Saim Richards"] 
student_grade = [85, 98, 89, 92]
print("Original strings:")
print(student_id)
print(student_name)
print(student_grade)
print("\nNested dictionary:")
ch='a'
print(nested_dictionary(student_id, student_name, student_grade))

# 44. Write a Python program to filter the height and width of students, which are stored in a dictionary. 
# Original Dictionary:
# {'Cierra Vega': (6.2, 70), 'Alden Cantrell': (5.9, 65), 'Kierra Gentry': (6.0, 68), 'Pierre Cox': (5.8, 66)}
# Height > 6ft and Weight> 70kg:
# {'Cierra Vega': (6.2, 70)}

def filter_data(students):
    result = {k: s for k, s in students.items() if s[0] >=6.0 and s[1] >=70}
    return result    
 
students = {'Cierra Vega': (6.2, 70), 'Alden Cantrell': (5.9, 65), 'Kierra Gentry': (6.0, 68), 'Pierre Cox': (5.8, 66)}
print("Original Dictionary:")
print(students)
print("\nHeight > 6ft and Weight> 70kg:")
print(filter_data(students))

# 45. Write a Python program to check all values are same in a dictionary. 
# Original Dictionary:
# {'Cierra Vega': 12, 'Alden Cantrell': 12, 'Kierra Gentry': 12, 'Pierre Cox': 12}
# Check all are 12 in the dictionary.
# True
# Check all are 10 in the dictionary.
# False

def value_check(students, n):
    result = all(x == n for x in students.values()) 
    return result
  
students = {'Cierra Vega': 12, 'Alden Cantrell': 12, 'Kierra Gentry': 12, 'Pierre Cox': 12}
print("Original Dictionary:")
print(students)
n = 12
print("\nCheck all are ",n,"in the dictionary.")
print(value_check(students, n))
n = 10
print("\nCheck all are ",n,"in the dictionary.")
print(value_check(students, n))

# 46. Write a Python program to create a dictionary grouping a sequence of key-value pairs into a dictionary of lists. 
# Original list:
# [('yellow', 1), ('blue', 2), ('yellow', 3), ('blue', 4), ('red', 1)]
# Grouping a sequence of key-value pairs into a dictionary of lists:
# {'yellow': [1, 3], 'blue': [2, 4], 'red': [1]}
def grouping_dictionary(l):
    result = {}
    for k, v in l:
         result.setdefault(k, []).append(v)
    return result
colors = [('yellow', 1), ('blue', 2), ('yellow', 3), ('blue', 4), ('red', 1)]
print("Original list:")
print(colors)
print("\nGrouping a sequence of key-value pairs into a dictionary of lists:")
print(grouping_dictionary(colors))


# 47. Write a Python program to split a given dictionary of lists into list of dictionaries. 
# Original dictionary of lists:
# {'Science': [88, 89, 62, 95], 'Language': [77, 78, 84, 80]}
# Split said dictionary of lists into list of dictionaries:
# [{'Science': 88, 'Language': 77}, {'Science': 89, 'Language': 78}, {'Science': 62, 'Language': 84}, {'Science': 95, 'Language': 80}]
def list_of_dicts(marks):
    keys = marks.keys()
    vals = zip(*[marks[k] for k in keys])
    result = [dict(zip(keys, v)) for v in vals]
    return result

marks = {'Science': [88, 89, 62, 95], 'Language': [77, 78, 84, 80]}
print("Original dictionary of lists:")
print(marks)
print("\nSplit said dictionary of lists into list of dictionaries:")
print(list_of_dicts(marks))


# 48. Write a Python program to remove a specified dictionary from a given list. 
# Original list of dictionary:
# [{'id': '#FF0000', 'color': 'Red'}, {'id': '#800000', 'color': 'Maroon'}, {'id': '#FFFF00', 'color': 'Yellow'}, {'id': '#808000', 'color': 'Olive'}]
# Remove id #FF0000 from the said list of dictionary:
# [{'id': '#800000', 'color': 'Maroon'}, {'id': '#FFFF00', 'color': 'Yellow'}, {'id': '#808000', 'color': 'Olive'}]

def remove_dictionary(colors, r_id):
    colors[:] = [d for d in colors if d.get('id') != r_id]
    return colors

colors = [{"id" : "#FF0000", "color" : "Red"}, 
          {"id" : "#800000", "color" : "Maroon"}, 
          {"id" : "#FFFF00", "color" : "Yellow"}, 
          {"id" : "#808000", "color" : "Olive"}] 
print('Original list of dictionary:')
print(colors)
r_id = "#FF0000"
print("\nRemove id",r_id,"from the said list of dictionary:")
print(remove_dictionary(colors, r_id))

# 49. Write a Python program to convert string values of a given dictionary, into integer/float datatypes. 
# Original list:
# [{'x': '10', 'y': '20', 'z': '30'}, {'p': '40', 'q': '50', 'r': '60'}]
# String values of a given dictionary, into integer types:
# [{'x': 10, 'y': 20, 'z': 30}, {'p': 40, 'q': 50, 'r': 60}]
# Original list:
# [{'x': '10.12', 'y': '20.23', 'z': '30'}, {'p': '40.00', 'q': '50.19', 'r': '60.99'}]
# String values of a given dictionary, into float types:
# [{'x': 10.12, 'y': 20.23, 'z': 30.0}, {'p': 40.0, 'q': 50.19, 'r': 60.99}]

def convert_to_int(lst):
    result = [dict([a, int(x)] for a, x in b.items()) for b in lst]
    return result

def convert_to_float(lst):
    result = [dict([a, float(x)] for a, x in b.items()) for b in lst]
    return result

nums =[{ 'x':'10' , 'y':'20' , 'z':'30' }, { 'p':'40', 'q':'50', 'r':'60'}]
print("Original list:")
print(nums)
print("\nString values of a given dictionary, into integer types:")
print(convert_to_int(nums))
nums =[{ 'x':'10.12', 'y':'20.23', 'z':'30'}, { 'p':'40.00', 'q':'50.19', 'r':'60.99'}]
print("\nOriginal list:")
print(nums)
print("\nString values of a given dictionary, into float types:")
print(convert_to_float(nums))

# 50. A Python Dictionary contains List as value. Write a Python program to clear the list values in the said dictionary. 
# Original Dictionary:
# {'C1': [10, 20, 30], 'C2': [20, 30, 40], 'C3': [12, 34]}
# Clear the list values in the said dictionary:
# {'C1': [], 'C2': [], 'C3': []}
def test(dictionary):
    for key in dictionary:
        dictionary[key].clear()
    return dictionary

dictionary = { 
               'C1' : [10,20,30], 
               'C2' : [20,30,40],
               'C3' : [12,34]
             }
print("\nOriginal Dictionary:")
print(dictionary)
print("\nClear the list values in the said dictionary:")
print(test(dictionary)) 


# 51. A Python Dictionary contains List as value. Write a Python program to update the list values in the said dictionary. 
# Original Dictionary:
# {'Math': [88, 89, 90], 'Physics': [92, 94, 89], 'Chemistry': [90, 87, 93]}
# Update the list values of the said dictionary:
# {'Math': [89, 90, 91], 'Physics': [90, 92, 87], 'Chemistry': [90, 87, 93]}
def test(dictionary):
    dictionary['Math'] = [x+1 for x in dictionary['Math']]
    dictionary['Physics'] = [x-2 for x in dictionary['Physics']]
    return dictionary

dictionary = { 
               'Math' : [88, 89, 90], 
               'Physics' : [92, 94, 89],
               'Chemistry' : [90, 87, 93]
             }
print("\nOriginal Dictionary:")
print(dictionary)
print("\nUpdate the list values of the said dictionary:")
print(test(dictionary))


# 52. Write a Python program to extract a list of values from a given list of dictionaries. 
# Original Dictionary:
# [{'Math': 90, 'Science': 92}, {'Math': 89, 'Science': 94}, {'Math': 92, 'Science': 88}]
# Extract a list of values from said list of dictionaries where subject = Science
# [92, 94, 88]
# Original Dictionary:
# [{'Math': 90, 'Science': 92}, {'Math': 89, 'Science': 94}, {'Math': 92, 'Science': 88}]
# Extract a list of values from said list of dictionaries where subject = Math
# [90, 89, 92]
def test(lst, marks):
    result = [d[marks] for d in lst if marks in d]
 
    return result

marks = [{'Math': 90, 'Science': 92}, 
         {'Math': 89, 'Science': 94}, 
         {'Math': 92, 'Science': 88}]

print("\nOriginal Dictionary:")
print(marks)
subj = "Science"
print("\nExtract a list of values from said list of dictionaries where subject =",subj)
print(test(marks, subj))

print("\nOriginal Dictionary:")
print(marks)
subj = "Math"
print("\nExtract a list of values from said list of dictionaries where subject =",subj)
print(test(marks, subj))


# 53. Write a Python program to find the length of a given dictionary values. 
# Original Dictionary:
# {1: 'red', 2: 'green', 3: 'black', 4: 'white', 5: 'black'}
# Length of dictionary values:
# {'red': 3, 'green': 5, 'black': 5, 'white': 5}
# Original Dictionary:
# {'1': 'Austin Little', '2': 'Natasha Howard', '3': 'Alfred Mullins', '4': 'Jamie Rowe'}
# Length of dictionary values:
# {'Austin Little': 13, 'Natasha Howard': 14, 'Alfred Mullins': 14, 'Jamie Rowe': 10}

def test(dictt):
    result = {}
    for val in dictt.values(): 
        result[val] = len(val) 
    return result    

color_dict = {1 : 'red', 2 : 'green', 3 : 'black', 4 : 'white', 5 : 'black'}
print("\nOriginal Dictionary:")
print(color_dict)
print("Length of dictionary values:")
print(test(color_dict))

color_dict = {'1' : 'Austin Little', '2' : 'Natasha Howard', '3' : 'Alfred Mullins', '4' : 'Jamie Rowe'}
print("\nOriginal Dictionary:")
print(color_dict)
print("Length of dictionary values:")
print(test(color_dict))

# 54. Write a Python program to get the depth of a dictionary. 
# Expected Output:
# 4
def dict_depth(d):
    if isinstance(d, dict):
        return 1 + (max(map(dict_depth, d.values())) if d else 0)
    return 0
dic = {'a':1, 'b': {'c': {'d': {}}}}
print(dict_depth(dic))


# 55. Write a Python program to access dictionary key's element by index. 
# Expected Output:
# physics
# math
# chemistry
num = {'physics': 80, 'math': 90, 'chemistry': 86}
print(list(num)[0])
print(list(num)[1])
print(list(num)[2])


# 56. Write a Python program to convert a given dictionary into a list of lists. 
# Original Dictionary:
# {1: 'red', 2: 'green', 3: 'black', 4: 'white', 5: 'black'}
# Convert the said dictionary into a list of lists:
# [[1, 'red'], [2, 'green'], [3, 'black'], [4, 'white'], [5, 'black']]
# Original Dictionary:
# {'1': 'Austin Little', '2': 'Natasha Howard', '3': 'Alfred Mullins', '4': 'Jamie Rowe'}
# Convert the said dictionary into a list of lists:
# [['1', 'Austin Little'], ['2', 'Natasha Howard'], ['3', 'Alfred Mullins'], ['4', 'Jamie Rowe']]
def test(dictt):
    result = list(map(list, dictt.items()))
    return result    

color_dict = {1 : 'red', 2 : 'green', 3 : 'black', 4 : 'white', 5 : 'black'}
print("\nOriginal Dictionary:")
print(color_dict)
print("Convert the said dictionary into a list of lists:")
print(test(color_dict))

color_dict = {'1' : 'Austin Little', '2' : 'Natasha Howard', '3' : 'Alfred Mullins', '4' : 'Jamie Rowe'}
print("\nOriginal Dictionary:")
print(color_dict)
print("Convert the said dictionary into a list of lists:")
print(test(color_dict))


# 57. Write a Python program to filter even numbers from a given dictionary values. 
# Original Dictionary:
# {'V': [1, 4, 6, 10], 'VI': [1, 4, 12], 'VII': [1, 3, 8]}
# Filter even numbers from said dictionary values:
# {'V': [4, 6, 10], 'VI': [4, 12], 'VII': [8]}
# Original Dictionary:
# {'V': [1, 3, 5], 'VI': [1, 5], 'VII': [2, 7, 9]}
# Filter even numbers from said dictionary values:
# {'V': [], 'VI': [], 'VII': [2]}
def test(dictt):
    result = {key: [idx for idx in val if not idx % 2]  
          for key, val in dictt.items()}   
    return result    

students = {'V' : [1, 4, 6, 10], 'VI' : [1, 4, 12], 'VII' : [1, 3, 8]} 
print("\nOriginal Dictionary:")
print(students)
print("Filter even numbers from said dictionary values:")
print(test(students))

students = {'V' : [1, 3, 5], 'VI' : [1, 5], 'VII' : [2, 7, 9]} 
print("\nOriginal Dictionary:")
print(students)
print("Filter even numbers from said dictionary values:")
print(test(students))


# 58. Write a Python program to get all combinations of key-value pairs in a given dictionary. 
# Original Dictionary:
# {'V': [1, 4, 6, 10], 'VI': [1, 4, 12], 'VII': [1, 3, 8]}
# Combinations of key-value pairs of the said dictionary:
# [{'V': [1, 4, 6, 10], 'VI': [1, 4, 12]}, {'V': [1, 4, 6, 10], 'VII': [1, 3, 8]}, {'VI': [1, 4, 12], 'VII': [1, 3, 8]}]
# Original Dictionary:
# {'V': [1, 3, 5], 'VI': [1, 5]}
# Combinations of key-value pairs of the said dictionary:
# [{'V': [1, 3, 5], 'VI': [1, 5]}]
import itertools
def test(dictt):
    result = list(map(dict, itertools.combinations(dictt.items(), 2)))
    return result    

students = {'V' : [1, 4, 6, 10], 'VI' : [1, 4, 12], 'VII' : [1, 3, 8]} 
print("\nOriginal Dictionary:")
print(students)
print("\nCombinations of key-value pairs of the said dictionary:")
print(test(students))

students = {'V' : [1, 3, 5], 'VI' : [1, 5]} 
print("\nOriginal Dictionary:")
print(students)
print("\nCombinations of key-value pairs of the said dictionary:")
print(test(students))


# 59. Write a Python program to find the specified number of maximum values in a given dictionary. 
# Original Dictionary:
# {'a': 5, 'b': 14, 'c': 32, 'd': 35, 'e': 24, 'f': 100, 'g': 57, 'h': 8, 'i': 100}
# 1 maximum value(s) in the said dictionary:
# ['f']
# 2 maximum value(s) in the said dictionary:
# ['f', 'i']
# 5 maximum value(s) in the said dictionary:
# ['f', 'i', 'g', 'd', 'c']
def test(dictt, N):
    result = sorted(dictt, key=dictt.get, reverse=True)[:N]
    return result 
dictt = {'a':5, 'b':14, 'c': 32, 'd':35, 'e':24, 'f': 100, 'g':57, 'h':8, 'i': 100}
print("\nOriginal Dictionary:")
print(dictt)
N = 1
print("\n",N,"maximum value(s) in the said dictionary:")
print(test(dictt, N))
N = 2
print("\n",N,"maximum value(s) in the said dictionary:")
print(test(dictt, N))
N = 5
print("\n",N,"maximum value(s) in the said dictionary:")
print(test(dictt, N))


# 60. Write a Python program to find shortest list of values with the keys in a given dictionary. 
# Original Dictionary: {'V': [10, 12], 'VI': [10], 'VII': [10, 20, 30, 40], 'VIII': [20], 'IX': [10, 30, 50, 70], 'X': [80]} Shortest list of values with the keys of the said dictionary: ['VI', 'VIII', 'X']

def test(dictt):
    min_value=1
    result = [k for k, v in dictt.items() if len(v) == (min_value)] 
    return result    

dictt = {
 'V': [10, 12],
 'VI': [10],
 'VII': [10, 20, 30, 40],
 'VIII': [20],
 'IX': [10,30,50,70],
 'X': [80]
 }

print("\nOriginal Dictionary:")
print(dictt)
print("\nShortest list of values with the keys of the said dictionary:")
print(test(dictt))

# 61. Write a Python program to count the frequency in a given dictionary. 
# Original Dictionary:
# {'V': 10, 'VI': 10, 'VII': 40, 'VIII': 20, 'IX': 70, 'X': 80, 'XI': 40, 'XII': 20}
# Count the frequency of the said dictionary:
# Counter({10: 2, 40: 2, 20: 2, 70: 1, 80: 1})

from collections import Counter
def test(dictt):    
    result = Counter(dictt.values())
    return result    

dictt = {
 'V': 10,
 'VI': 10,
 'VII': 40,
 'VIII': 20,
 'IX': 70,
 'X': 80,
 'XI': 40,
 'XII': 20, 
 }

print("\nOriginal Dictionary:")
print(dictt)
print("\nCount the frequency of the said dictionary:")
print(test(dictt))

# 62. Write a Python program to extract values from a given dictionaries and create a list of lists from those values. 
# Original Dictionary:
# [{'student_id': 1, 'name': 'Jean Castro', 'class': 'V'}, {'student_id': 2, 'name': 'Lula Powell', 'class': 'V'}, {'student_id': 3, 'name': 'Brian Howell', 'class': 'VI'}, {'student_id': 4, 'name': 'Lynne Foster', 'class': 'VI'}, {'student_id': 5, 'name': 'Zachary Simon', 'class': 'VII'}]
# Extract values from the said dictionarie and create a list of lists using those values:
# [[1, 'Jean Castro', 'V'], [2, 'Lula Powell', 'V'], [3, 'Brian Howell', 'VI'], [4, 'Lynne Foster', 'VI'], [5, 'Zachary Simon', 'VII']]
# [[1, 'Jean Castro'], [2, 'Lula Powell'], [3, 'Brian Howell'], [4, 'Lynne Foster'], [5, 'Zachary Simon']]
# [['Jean Castro', 'V'], ['Lula Powell', 'V'], ['Brian Howell', 'VI'], ['Lynne Foster', 'VI'], ['Zachary Simon', 'VII']]
def test(dictt,keys):
    return [list(d[k] for k in keys) for d in dictt] 

students = [
        {'student_id': 1, 'name': 'Jean Castro', 'class': 'V'}, 
        {'student_id': 2, 'name': 'Lula Powell', 'class': 'V'},
        {'student_id': 3, 'name': 'Brian Howell', 'class': 'VI'}, 
        {'student_id': 4, 'name': 'Lynne Foster', 'class': 'VI'}, 
        {'student_id': 5, 'name': 'Zachary Simon', 'class': 'VII'}
        ]

print("\nOriginal Dictionary:")
print(students)
print("\nExtract values from the said dictionarie and create a list of lists using those values:")
print("\n",test(students,('student_id', 'name', 'class')))
print("\n",test(students,('student_id', 'name')))
print("\n",test(students,('name', 'class')))


# 63. Write a Python program to convert a given list of lists to a dictionary. 
# Original list of lists:
# [[1, 'Jean Castro', 'V'], [2, 'Lula Powell', 'V'], [3, 'Brian Howell', 'VI'], [4, 'Lynne Foster', 'VI'], [5, 'Zachary Simon', 'VII']]
# Convert the said list of lists to a dictionary:
# {1: ['Jean Castro', 'V'], 2: ['Lula Powell', 'V'], 3: ['Brian Howell', 'VI'], 4: ['Lynne Foster', 'VI'], 5: ['Zachary Simon', 'VII']}
def test(lst):
    result = {item[0]: item[1:] for item in lst}
    return result

students = [[1, 'Jean Castro', 'V'], [2, 'Lula Powell', 'V'], [3, 'Brian Howell', 'VI'], [4, 'Lynne Foster', 'VI'], [5, 'Zachary Simon', 'VII']]

print("\nOriginal list of lists:")
print(students)
print("\nConvert the said list of lists to a dictionary:")
print(test(students))


# 64. Write a Python program to create a key-value list pairings in a given dictionary. 
# Original dictionary:
# {1: ['Jean Castro'], 2: ['Lula Powell'], 3: ['Brian Howell'], 4: ['Lynne Foster'], 5: ['Zachary Simon']}
# A key-value list pairings of the said dictionary:
# [{1: 'Jean Castro', 2: 'Lula Powell', 3: 'Brian Howell', 4: 'Lynne Foster', 5: 'Zachary Simon'}]

from itertools import product
def test(dictt):
    result = [dict(zip(dictt, sub)) for sub in product(*dictt.values())]
    return result

students = {1: ['Jean Castro'], 2: ['Lula Powell'], 3: ['Brian Howell'], 4: ['Lynne Foster'], 5: ['Zachary Simon']}

print("\nOriginal dictionary:")
print(students)
print("\nA key-value list pairings of the said dictionary:")
print(test(students))

# 65. Write a Python program to get the total length of all values of a given dictionary with string values. 
# Original dictionary:
# {'#FF0000': 'Red', '#800000': 'Maroon', '#FFFF00': 'Yellow', '#808000': 'Olive'}
# Total length of all values of the said dictionary with string values:
# 20
def test(dictt):
    result = sum((len(values) for values in dictt.values()))
    return result
color = {'#FF0000':'Red', '#800000':'Maroon', '#FFFF00':'Yellow', '#808000':'Olive'}
print("\nOriginal dictionary:")
print(color)
print("\nTotal length of all values of the said dictionary with string values:")
print(test(color))


# 66. Write a Python program to check if a specific Key and a value exist in a dictionary. 
# Original dictionary:
# [{'student_id': 1, 'name': 'Jean Castro', 'class': 'V'}, {'student_id': 2, 'name': 'Lula Powell', 'class': 'V'}, {'student_id': 3, 'name': 'Brian Howell', 'class': 'VI'}, {'student_id': 4, 'name': 'Lynne Foster', 'class': 'VI'}, {'student_id': 5, 'name': 'Zachary Simon', 'class': 'VII'}]
# Check if a specific Key and a value exist in the said dictionary:
# True
# True
# True
# False
# False
# False
def test(dictt, key, value):
   if any(sub[key] == value for sub in dictt):
       return True
   return False

students = [
        {'student_id': 1, 'name': 'Jean Castro', 'class': 'V'}, 
        {'student_id': 2, 'name': 'Lula Powell', 'class': 'V'},
        {'student_id': 3, 'name': 'Brian Howell', 'class': 'VI'}, 
        {'student_id': 4, 'name': 'Lynne Foster', 'class': 'VI'}, 
        {'student_id': 5, 'name': 'Zachary Simon', 'class': 'VII'}
        ]


print("\nOriginal dictionary:")
print(students)
print("\nCheck if a specific Key and a value exist in the said dictionary:")
print(test(students,'student_id', 1))
print(test(students,'name', 'Brian Howell'))
print(test(students,'class', 'VII'))
print(test(students,'class', 'I'))
print(test(students,'name', 'Brian Howelll'))
print(test(students,'student_id', 11))


# 67. Write a Python program to invert a given dictionary with non-unique hashable values. 
# Sample Output:
# {8: ['Ora Mckinney', 'Mathew Gilbert'], 7: ['Theodore Hollandl', 'Mae Fleming', 'Ivan Little']}

from collections import defaultdict
def test(students):
  obj = defaultdict(list)
  for key, value in students.items():
    obj[value].append(key)
  return dict(obj)
 
students = {
  'Ora Mckinney': 8,
  'Theodore Hollandl': 7,
  'Mae Fleming': 7,
  'Mathew Gilbert': 8,
  'Ivan Little': 7,  
}
print(test(students))

# 68. Write a Python program to combines two or more dictionaries, creating a list of values for each key. 
# Sample Output:
# Original dictionaries:
# {'w': 50, 'x': 100, 'y': 'Green', 'z': 400}
# {'x': 300, 'y': 'Red', 'z': 600}
# Combined dictionaries, creating a list of values for each key:
# {'w': [50], 'x': [100, 300], 'y': ['Green', 'Red'], 'z': [400, 600]}
from collections import defaultdict
def test(*dicts):
  result = defaultdict(list)
  for el in dicts:
    for key in el:
      result[key].append(el[key])
  return dict(result)
 
d1 = {'w': 50, 'x': 100, 'y': 'Green', 'z': 400}
d2 = {'x': 300, 'y': 'Red', 'z': 600}

print("Original dictionaries:")
print(d1)
print(d2)
print("\nCombined dictionaries, creating a list of values for each key:")
print(test(d1, d2))


# 69. Write a Python program to group the elements of a given list based on the given function. 
# Sample Output:
# Original list & function:
# [7, 23, 3.2, 3.3, 8.4] Function name: floor:
# Group the elements of the said list based on the given function:
# {7: [7], 23: [23], 3: [3.2, 3.3], 8: [8.4]}
# Original list & function:
# ['Red', 'Green', 'Black', 'White', 'Pink'] Function name: len:
# Group the elements of the said list based on the given function:
# {3: ['Red'], 5: ['Green', 'Black', 'White'], 4: ['Pink']}
from collections import defaultdict
from math import floor
def test(lst, fn):
  d = defaultdict(list)
  for el in lst:
    d[fn(el)].append(el)
  return dict(d)
nums = [7,23, 3.2, 3.3, 8.4]
print("Original list & function:")
print(nums," Function name: floor:")
print("Group the elements of the said list based on the given function:")
print(test(nums, floor))
print("\n")
print("Original list & function:")
colors = ['Red', 'Green', 'Black', 'White', 'Pink']
print(colors," Function name: len:")
print("Group the elements of the said list based on the given function:")
print(test(colors, len))


# 70. Write a Python program to map the values of a given list to a dictionary using a function, where the key-value pairs consist of the original value as the key and the result of the function as the value. 
# Sample Output:
# {1: 1, 2: 4, 3: 9, 4: 16}

def test(itr, fn):
  return dict(zip(itr, map(fn, itr)))
print(test([1, 2, 3, 4], lambda x: x * x))

# 71. Write a Python program to retrieve the value of the nested key indicated by the given selector list from a dictionary or list. 
# Sample Output:
# Russell
# 2

from functools import reduce 
from operator import getitem
def test(d, selectors):
  return reduce(getitem, selectors, d) 
users = {
  'Carla ': {
    'name': {
      'first': 'Carla ',
      'last': 'Russell' 
    },
    'postIds': [1, 2, 3, 4, 5]
  }
}
print(test(users, ['Carla ', 'name', 'last']))
print(test(users, ['Carla ', 'postIds', 1]))

# 72. Write a Python program to invert a dictionary with unique hashable values. 
# Sample Output:
# {10: 'Theodore', 11: 'Mathew', 9: 'Roxanne'}

def test(students):
  return { value: key for key, value in students.items() }
 
students = {
  'Theodore': 10,
  'Mathew': 11,
  'Roxanne': 9,
}
print(test(students))

# 73. Write a Python program to convert a list of dictionaries into a list of values corresponding to the specified key. 
# Sample Output:
# Original list of dictionaries:
# [{'name': 'Theodore', 'age': 18}, {'name': 'Mathew', 'age': 22}, {'name': 'Roxanne', 'age': 20}, {'name': 'David', 'age': 18}]
# Convert a list of dictionaries into a list of values corresponding to the specified key:
# [18, 22, 20, 18]

def test(lsts, key):
  return [x.get(key) for x in lsts]
 
students = [
  { 'name': 'Theodore', 'age': 18 },
  { 'name': 'Mathew', 'age': 22 },
  { 'name': 'Roxanne', 'age': 20 },
  { 'name': 'David', 'age': 18 }
]

print("Original list of dictionaries:")
print(students)
print("\nConvert a list of dictionaries into a list of values corresponding to the specified key:")
print(test(students, 'age'))

# 74. Write a Python program to create a dictionary with the same keys as the given dictionary and values generated by running the given function for each value. 
# Sample Output:
# Original dictionary elements:
# {'Theodore': {'user': 'Theodore', 'age': 45}, 'Roxanne': {'user': 'Roxanne', 'age': 15}, 'Mathew': {'user': 'Mathew', 'age': 21}}
# Dictionary with the same keys:
# {'Theodore': 45, 'Roxanne': 15, 'Mathew': 21}
def test(obj, fn):
  return dict((k, fn(v)) for k, v in obj.items())
 
users = {
  'Theodore': { 'user': 'Theodore', 'age': 45 },
  'Roxanne': { 'user': 'Roxanne', 'age': 15 },
  'Mathew': { 'user': 'Mathew', 'age': 21 },
}
print("\nOriginal dictionary elements:")
print(users)
print("\nDictionary with the same keys:")
print(test(users, lambda u : u['age']))


# 75. Write a Python program to find all keys in the provided dictionary that have the given value. 
# Sample Output:
# Original dictionary elements:
# {'Theodore': 19, 'Roxanne': 20, 'Mathew': 21, 'Betty': 20}
# Find all keys in the said dictionary that have the specified value:
# ['Roxanne', 'Betty']
def test(dict, val):
  return list(key for key, value in dict.items() if value == val)

students = {
  'Theodore': 19,
  'Roxanne': 20,
  'Mathew': 21,
  'Betty': 20
}

print("\nOriginal dictionary elements:")
print(students)
print("\nFind all keys in the said dictionary that have the specified value:")
print(test(students, 20))


# 76. Write a Python program to combine two lists into a dictionary, where the elements of the first one serve as the keys and the elements of the second one serve as the values. The values of the first list need to be unique and hashable. 
# Sample Output:
# Original lists:
# ['a', 'b', 'c', 'd', 'e', 'f']
# [1, 2, 3, 4, 5]
# Combine the values of the said two lists into a dictionary:
# {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}
def test(keys, values):
  return dict(zip(keys, values))

l1 = ['a', 'b', 'c', 'd', 'e', 'f']
l2 = [1, 2, 3, 4, 5]     
print("Original lists:")
print(l1)
print(l2)
print("\nCombine the values of the said two lists into a dictionary:")
print(test(l1, l2))


# 77. Write a Python program to convert given a dictionary to a list of tuples. 
# Sample Output:
# Original Dictionary:
# {'Red': 1, 'Green': 3, 'White': 5, 'Black': 2, 'Pink': 4}
# Convert the said dictionary to a list of tuples:
# [('Red', 1), ('Green', 3), ('White', 5), ('Black', 2), ('Pink', 4)]

def test(d):
  return list(d.items())
 
d = {'Red': 1, 'Green': 3, 'White': 5, 'Black': 2, 'Pink': 4}
print("Original Dictionary:")
print(d)
print("\nConvert the said dictionary to a list of tuples:")
print(test(d))

# 78. Write a Python program to create a flat list of all the keys in a flat dictionary. 
# Sample Output:
# Original dictionary elements:
# {'Theodore': 19, 'Roxanne': 20, 'Mathew': 21, 'Betty': 20}
# Create a flat list of all the keys of the said flat dictionary:
# ['Theodore', 'Roxanne', 'Mathew', 'Betty']
def test(flat_dict):
  return list(flat_dict.keys())
students = {
  'Theodore': 19,
  'Roxanne': 20,
  'Mathew': 21,
  'Betty': 20
}

print("\nOriginal dictionary elements:")
print(students)
print("\nCreate a flat list of all the keys of the said flat dictionary:")
print(test(students))


# 79. Write a Python program to create a flat list of all the values in a flat dictionary. 
# Sample Output:
# Original dictionary elements:
# {'Theodore': 19, 'Roxanne': 20, 'Mathew': 21, 'Betty': 20}
# Create a flat list of all the values of the said flat dictionary:
# [19, 20, 21, 20]
def test(flat_dict):
  return list(flat_dict.values())
students = {
  'Theodore': 19,
  'Roxanne': 20,
  'Mathew': 21,
  'Betty': 20
}
print("\nOriginal dictionary elements:")
print(students)
print("\nCreate a flat list of all the values of the said flat dictionary:")
print(test(students))


# 80. Write a Python program to find the key of the maximum value in a dictionary. 
# Sample Output:
# Original dictionary elements:
# {'Theodore': 19, 'Roxanne': 22, 'Mathew': 21, 'Betty': 20}
# Finds the key of the maximum and minimum value of the said dictionary:
# ('Roxanne', 'Theodore')
def test(d):
  return max(d, key = d.get), min(d, key = d.get)

students = {
  'Theodore': 19,
  'Roxanne': 22,
  'Mathew': 21,
  'Betty': 20
}
print("\nOriginal dictionary elements:")
print(students)
print("\nFinds the key of the maximum and minimum value of the said dictionary:")
print(test(students))
