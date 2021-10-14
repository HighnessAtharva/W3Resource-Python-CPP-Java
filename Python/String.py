"""
1.calculate the length of a string
"""

import string
from math import pi
my_string = input("enter a string ")

# solution 1:
print(len(my_string))

# solution 2:
length = 0
for letter in my_string:
    length += 1

print(length)

"""
2.count the number of characters
(character frequency) in a string. 
Sample String : 'google.com'
Expected Result : {'o': 3, 'g': 2, '.': 1, 'e': 1, 'l': 1, 'm': 1, 'c': 1}
"""

my_string = input("enter a string ")

# solution 1:
my_dict = {}
for letter in my_string:
    my_dict[letter] = my_string.count(letter)
print(my_dict)

# solution 2:
my_dict = {}
for letter in my_string:
    my_dict[letter] = 0

for letter in my_string:
    my_dict[letter] += 1
print(my_dict)

# solution 3:
my_dict = {}
for letter in my_string:
    if letter in my_dict:
        my_dict[letter] += 1
    else:
        my_dict[letter] = 1
print(my_dict)

"""
3.get a string made of the first 2
and the last 2 chars from a given string.
If the string length is less than 2, return 'empty string'.
Sample String : 'w3resource'
Expected Result : 'w3ce'
Sample String : 'w3'
Expected Result : 'w3w3'
Sample String : ' w'
Expected Result : Empty String
"""

my_string = input("enter a string ")

# solution 1
if len(my_string) > 1:
    print(my_string[:2]+my_string[-2:])
else:
    print('empty string')

"""
4.get a string from a given string
where all occurrences of its first char have been changed to '$',
except the first char itself. 
Sample String : 'restart'
Expected Result : 'resta$t'
"""

my_string = input("enter a string ")

# solution 1
new_string = my_string[0]
for i in range(1, len(my_string)):
    if my_string[i] == my_string[0]:
        new_string += '$'
    else:
        new_string += my_string[i]
print(new_string)

# solution 2
new_string = ''
for letter in my_string:
    if letter == my_string[0]:
        new_string += '$'
    else:
        new_string += letter
my_list = list(new_string)
my_list[0] = my_string[0]
new_string = ''.join(my_list)
print(new_string)

# solution 3
first_letter = my_string[0]
helper_string = my_string.replace(first_letter, '$')
new_string = first_letter + helper_string[1:]
print(new_string)

"""
5.get a single string from two given strings,
separated by a space and swap the first two characters of each string. 
Sample String : 'abc', 'xyz' 
Expected Result : 'xyc abz'
"""

string_one = input("enter first string ")
string_two = input("enter second string ")

# solution 1
new_string = string_two[:2]+string_one[2:]+' '+string_one[:2]+string_two[2:]
print(new_string)

"""
6.add 'ing' at the end of a given string
(length should be at least 3). If the given string already ends with 'ing'
then add 'ly' instead. If the string length of the given string is less
than 3, leave it unchanged.  
Sample String : 'abc'
Expected Result : 'abcing' 
Sample String : 'string'
Expected Result : 'stringly'
"""

my_string = input("enter a string ")

# solution 1
if len(my_string) < 3:
    new_string = my_string
elif my_string[-3:] == 'ing':
    new_string = my_string + 'ly'
else:
    new_string = my_string + 'ing'
print(new_string)

"""
7.find the first appearance of the substring
'not' and 'poor' from a given string, if 'poor' follows the 'not', replace
the whole 'not'...'poor' substring with 'good'. Return the resulting string.
Sample String : 'The lyrics is not that poor!'
Expected Result : 'The lyrics is good!'
"""

my_string = input("enter a string ")

# solution 1
not_position = my_string.find('not')
poor_position = my_string.find('poor')

if not_position < poor_position and not_position != -1:
    new_string = my_string[:not_position] + \
        'good' + my_string[poor_position+4:]
else:
    new_string = my_string

print(new_string)

# solution 2
not_pos = my_string.find('not')
poor_pos = my_string.find('poor')

if not_pos < poor_pos and not_pos != -1:
    new_string = my_string.replace(my_string[not_pos:(poor_pos+4)], 'good')
else:
    new_string = my_string

print(new_string)

"""
8. Write a Python function that takes a list of words and returns
the length of the longest one.
"""

my_words = input("enter a few words ")

# solution 1
my_list = my_words.split()

max_len = 0
for word in my_list:
    if len(word) > max_len:
        max_len = len(word)

print(max_len)

# solution 2
my_list = my_words.split()
len_list = []
for word in my_list:
    len_list.append(len(word))

len_list.sort()
max_len = len_list[-1]
print(max_len)

"""
9.remove the nth index character
from a nonempty string.
"""

# solution 1
my_string = input("enter a string ")
n = int(input("enter a number "))
new_string = my_string[:n-1] + my_string[n:]
print(new_string)

"""
10.change a given string to a new string
where the first and last chars have been exchanged.
"""

my_string = input("enter a string ")

# soltuion 1
new_string = my_string[-1] + my_string[1:-1] + my_string[0]
print(new_string)

"""
11.remove the characters
which have odd index values of a given string.
"""

my_string = input("enter a string ")

# solution 1
my_list = [my_string[x] for x in range(len(my_string)) if x % 2 == 0]
new_string = ''.join(my_list)
print(new_string)

# solution 2
new_string = ''
for i in range(len(my_string)):
    if i % 2 == 0:
        new_string += my_string[i]
print(new_string)

"""
12.count the occurrences of each word
in a given sentence.
"""

my_string = input("enter a sentence ")

# solution 1
my_list = my_string.split()
my_set = set(my_list)
my_dict = {}
for word in my_set:
    my_dict[word] = my_string.count(word)
print(my_dict)

# solution 2
my_list = my_string.split()
my_set = set(my_list)
my_dict = {}
for word in my_set:
    my_dict[word] = 0
    for item in my_list:
        if word == item:
            my_dict[word] += 1
print(my_dict)

# solution 3
my_list = my_string.split()
my_dict = {}
for word in my_list:
    if word in my_dict:
        my_dict[word] += 1
    else:
        my_dict[word] = 1
print(my_dict)

"""
13. Write a Python script that takes input from the user
and displays that input back in upper and lower cases.
"""

my_string = input("enter something ")

print(my_string.upper())
print(my_string.lower())

"""
14. Write a Python program that accepts a comma separated sequence of words
as input and prints the unique words in sorted form (alphanumerically). 
Sample Words : red, white, black, red, green, black
Expected Result : black, green, red, white,red
"""

my_string = input("enter words ")
my_set = sorted(set(my_string.split(',')))
print(','.join(my_set))

"""
15. Write a Python function to create the HTML string with tags around the word(s).
Sample function and result : 
add_tags('i', 'Python') -> '<i>Python</i>'
add_tags('b', 'Python Tutorial') -> '<b>Python Tutorial </b>'
"""

# solution 1


def add_tags(tag, text):
    return "<"+tag+">"+text+"<"+tag+">"


print(add_tags('i', 'Python'))
print(add_tags('b', 'Python Tutorial'))

# solution 2


def add_tags(tag, text):
    return "<%s>%s<%s>" % (tag, text, tag)


print(add_tags('i', 'Python'))
print(add_tags('b', 'Python Tutorial'))

"""
16. Write a Python function to insert a string in the middle of a string. 
Sample function and result : 
insert_sting_middle('[[]]', 'Python') -> [[Python]]
insert_sting_middle('{{}}', 'PHP') -> {{PHP}}
"""


def insert_sting_middle(main_string, middle_string):
    main_len = len(main_string)
    middle = int(main_len/2)
    return main_string[:middle] + middle_string + main_string[middle:]


print(insert_sting_middle('[[]]', 'Python'))
print(insert_sting_middle('{{}}', 'PHP'))
print(insert_sting_middle('<<>>', 'HTML'))

"""
17. Write a Python function to get a string made of 4 copies of the
last two characters of a specified string (length must be at least 2). 
Sample function and result : 
insert_end('Python') -> onononon
insert_end('Exercises') -> eseseses
"""


def insert_end(my_string):
    return my_string[-2:] * 4


print(insert_end('Python'))
print(insert_end('Exercises'))

"""
18. Write a Python function to get a string made of its first three
characters of a specified string. If the length of the string is less
than 3 then return the original string. 
Sample function and result : 
first_three('ipy') -> ipy
first_three('python') -> pyt
"""


def first_three(my_string):
    if len(my_string) > 2:
        return my_string[:3]
    else:
        return my_string


print(first_three('ipy'))
print(first_three('python'))

"""
19.get the last part of a string
before a specified character. 
https://www.w3resource.com/python-exercises
https://www.w3resource.com/python
"""

# solution 1


def get_last_part(my_string, char):
    position = my_string.rfind(char)
    return my_string[:position]


print(get_last_part('https://www.w3resource.com/python', "/"))

# solution 2


def get_last_part(my_string, char):
    my_list = my_string.split(char)
    return char.join(my_list[:-1])


print(get_last_part('https://www.w3resource.com/python', "/"))

"""
20. Write a Python function to reverses a string if it's length is a multiple of 4.
"""

# solution 1


def reverse_string(my_string):
    if len(my_string) % 4 == 0:
        my_list = list(my_string)
        my_list.reverse()
        return ''.join(my_list)
    else:
        return my_string


my_string = input("enter a string ")
print(reverse_string(my_string))

# solution 2


def reverse_string(my_string):
    if len(my_string) % 4 == 0:
        return ''.join(reversed(my_string))
    else:
        return my_string


my_string = input("enter a string ")
print(reverse_string(my_string))

"""
21. Write a Python function to convert a given string to all uppercase
if it contains at least 2 uppercase characters in the first 4 characters.
"""


def to_upper(my_string):
    counter = 0
    for i in my_string[:4]:
        if i.isupper():
            counter += 1
    if counter > 1:
        return my_string.upper()
    else:
        return my_string


my_string = input("enter a string ")
print(to_upper(my_string))

"""
22.Write a Python program to sort a string lexicographically.
"""

my_string = input("enter a string ")
print(''.join(sorted(my_string, key=str.lower)))

"""
24.check whether a string starts with specified characters.
"""


def starts_with(my_string, char):
    if my_string.startswith(char):
        return True
    else:
        return False


my_string = input("enter a string ")
my_char = input("enter a character ")

print("does the string '%s' starts with the character '%s'?" %
      (my_string, my_char))
print(starts_with(my_string, my_char))

"""
25.create a Caesar encryption. 
Note : In cryptography, a Caesar cipher, also known as Caesar's cipher,
the shift cipher, Caesar's code or Caesar shift, is one of the simplest
and most widely known encryption techniques. It is a type of substitution
cipher in which each letter in the plaintext is replaced by a letter some
fixed number of positions down the alphabet. For example, with a left shift of 3,
D would be replaced by A, E would become B, and so on. The method is named
after Julius Caesar, who used it in his private correspondence.
"""


def Caesar_encryption(my_string, my_shift, my_side):
    # for decription need to use negative shift(step) or same shift opposite side
    step = my_shift
    shift_side = my_side
    new_string = ''
    for letter in my_string:
        letter_ord = ord(letter)
        if letter.islower():
            if shift_side == 'left':
                if (letter_ord-step) < ord('a'):
                    letter_ord += 26
                new_string += chr(letter_ord-step)
            elif shift_side == 'right':
                if (letter_ord+step) > ord('z'):
                    letter_ord -= 26
                new_string += chr(letter_ord+step)
        if letter.isupper():
            if shift_side == 'left':
                if (letter_ord-step) < ord('A'):
                    letter_ord += 26
                new_string += chr(letter_ord-step)
            elif shift_side == 'right':
                if (letter_ord+step) > ord('Z'):
                    letter_ord -= 26
                new_string += chr(letter_ord+step)
    return new_string


my_string = input("enter a string ")
my_shift = int(input("enter shift number "))
my_side = input("enter 'left' for left shift or 'right' for right shift ")
print("encrepted string is", Caesar_encryption(my_string, my_shift, my_side))

"""
30.print the following floating numbers
upto 2 decimal places.
"""

my_float = float(input("enter a float number "))

# solution 1
print("this is a float number %.2f" % my_float)

# solution 2
print("this is a float number {:.2f}".format(my_float))

"""
31.print the following floating numbers
upto 2 decimal places with a sign.
"""

my_float = float(input("enter a float number "))

# solution 1
print("this is a float number %+.2f" % my_float)

# solution 2
print("this is a float number {:+.2f}".format(my_float))

"""
32.print the following floating numbers
with no decimal places.
"""

my_float = float(input("enter a float number "))

# solution 1
print("this is a float number %.0f" % my_float)

# solution 2
print("this is a float number {:.0f}".format(my_float))

"""
33.print the following integers with zeros
on the left of specified width.
"""

my_string = input("enter an integer ")

# solution 1
print(my_string.zfill(5))

# solution 2
print('{:0>5s}'.format(my_string))

"""
34.print the following integers with '*'
on the right of specified width.
"""

my_string = input("enter an integer ")

print('{:*<5s}'.format(my_string))

"""
35.display a number with a comma separator.
"""

my_int = int(input("enter a number "))

print('{:,}'.format(my_int))

"""
36.format a number with a percentage
"""

my_num = float(input("enter a number "))

print('{:.2%}'.format(my_num))

"""
37.display a number in left,
right and center aligned of width 10.
"""

my_num = float(input("enter a number "))

print('{:<10}'.format(my_num))
print('{:>10}'.format(my_num))
print('{:^10}'.format(my_num))

"""
38.count occurrences of a substring in a string.
"""

my_string = input("enter a string ")
my_substring = input("enter a substring ")

print("'%s' occures in '%s' %d times" %
      (my_substring, my_string, my_string.count(my_substring)))

"""
39.reverse a string.
"""

my_string = input("enter a string ")

# solution 1
my_list = list(my_string)
my_list.reverse()
print(''.join(my_list))

# solution 2
print(''.join(reversed(my_string)))

"""
40.reverse words order in a string.
"""

my_sentence = input("enter a sentence ")

my_list = my_sentence.split()
print(' '.join(my_list[::-1]))

"""
41.strip a set of characters from a string.
"""

my_string = input("enter a website domain ")

# solution 1
print(my_string.strip('wcom.'))

# solution 2
my_list = [x for x in my_string if x not in 'wcom.']
# print(''.join(my_list))

"""
42. Write apython program to count repeated characters in a string. 
Sample string: 'thequickbrownfoxjumpsoverthelazydog'
Expected output :
o 4
e 3
u 2
h 2
r 2
t 2
"""

my_string = input("enter a string ")

# solution 1
my_list = []
for letter in my_string:
    my_list.append((letter, my_string.count(letter)))
my_unique_list = list(set(my_list))
for i in my_unique_list:
    print(i[0], i[1])

print('*' * 10)

# solution 2
my_dict = {}
for letter in my_string:
    if letter in my_dict:
        my_dict[letter] += 1
    else:
        my_dict[letter] = 1
for key, value in my_dict.items():
    print(key, value)

"""
43.print the square and cube symbol
in the area of a rectangle and volume of a cylinder. 
Sample output: 
The area of the rectangle is 1256.66cm2
The volume of the cylinder is 1254.725cm3
"""


def rectangle_area(length, width):
    return length*width


def cylinder_volume(r, height):
    return pi*r*r*height


# solution 1 using unicode superscript
print('The area of the rectangle is %.2f cm\u00B2' % rectangle_area(5.5, 7))
print('The volume of the cylinder is %.2f cm\u00B3' % cylinder_volume(5.5, 7))

"""
44.print the index of the character in a string. 
Sample string: w3resource
Expected output:
Current character w position at 0
Current character 3 position at 1
Current character r position at 2
- - - - - - - - - - - - - - - - - - - - - - - - -
Current character c position at 8
Current character e position at 9
"""

my_string = 'w3resource'

for i, v in enumerate(my_string):
    print("Current character %s position at %d" % (v, i))

"""
45.check if a string contains all letters
of the alphabet.
"""
my_string = input("enter a string ")

# solution 1
alphabet = 'abcdefghijklmnopqrstuvwxyz'
counter = 0
for letter in alphabet:
    if letter in my_string.lower():
        counter += 1
    else:
        break
if counter == 26:
    print('the string contains all the letters of the alphabet')
else:
    print('the string DOES NOT contain all the letters of the alphabet')

# solution 2
string_letters = ''.join(sorted(set(my_string.lower())))
print(string_letters)
if string.ascii_lowercase == string_letters:
    print('the string contains all the letters of the alphabet')
else:
    print('the string DOES NOT contain all the letters of the alphabet')

"""
47.lowercase first n characters in a string.
"""

my_string = input('enter a string ')
n = 3
print(my_string[:n].lower()+my_string[n:])

"""
48.swap comma and dot in a string. 
Sample string: "32.054,23"
Expected Output: "32,054.23"
"""

# solution 1
my_string = '32.054,23'
print(my_string)
my_list = my_string.split('.')
new_list = []
for i in my_list:
    new_list.append(i.replace(',', '.'))
new_string = ','.join(new_list)
print(new_string)

# solution 2
my_string = '32.054,23'
print(my_string)
swap = str.maketrans(',.', '.,')
new_string = my_string.translate(swap)
print(new_string)

"""
49.count and display the vowels of a given text.
"""

my_string = input("enter a text ")

# solution 1
vowels = 'aeiouy'
my_dict = {}
for i in vowels:
    my_dict[i] = 0
for i in my_string.lower():
    if i in vowels:
        my_dict[i] += 1
print(my_dict)

# solution 2
vowels = 'aeiouy'
my_string = my_string.lower()
my_list = [(x, my_string.count(x)) for x in my_string if x in vowels]
print(set(my_list))

"""
50.split a string on the last occurrence
of the delimiter.
"""

my_string = 'this is some text with space as a delimeter'
print(my_string.rsplit(maxsplit=1))

"""
51.find the first non-repeating character in given string.
"""


def first_non_repeating_character(str1):
    char_order = []
    ctr = {}
    for c in str1:
        if c in ctr:
            ctr[c] += 1
        else:
            ctr[c] = 1
            char_order.append(c)
    for c in char_order:
        if ctr[c] == 1:
            return c
    return None


print(first_non_repeating_character('abcdef'))
print(first_non_repeating_character('abcabcdef'))
print(first_non_repeating_character('aabbcc'))


# 52.print all permutations with given repetition number of characters of a given string. 
from itertools import product
def all_repeat(str1, rno):
  chars = list(str1)
  results = []
  for c in product(chars, repeat = rno):
    results.append(c)
  return results
print(all_repeat('xyz', 3))
print(all_repeat('xyz', 2))
print(all_repeat('abcd', 4))


# 53.find the first repeated character in a given string. 
def first_repeated_char(str1):
  for index,c in enumerate(str1):
    if str1[:index+1].count(c) > 1:
      return c 
  return "None"

print(first_repeated_char("abcdabcd"))
print(first_repeated_char("abcd"))


# 54.find the first repeated character of a given string where the index of first occurrence is smallest. 
def first_repeated_char_smallest_distance(str1):
  temp = {}
  for ch in str1:
    if ch in temp:
      return ch, str1.index(ch);
    else:
      temp[ch] = 0
  return 'None'
print(first_repeated_char_smallest_distance("abcabc"))
print(first_repeated_char_smallest_distance("abcb"))
print(first_repeated_char_smallest_distance("abcc"))
print(first_repeated_char_smallest_distance("abcxxy"))
print(first_repeated_char_smallest_distance("abc"))))


# 55.Write a Python program to find the first repeated word in a given string. 
def first_repeated_char_smallest_distance(str1):
  temp = {}
  for ch in str1:
    if ch in temp:
      return ch, str1.index(ch);
    else:
      temp[ch] = 0
  return 'None'
print(first_repeated_char_smallest_distance("abcabc"))
print(first_repeated_char_smallest_distance("abcb"))
print(first_repeated_char_smallest_distance("abcc"))
print(first_repeated_char_smallest_distance("abcxxy"))
print(first_repeated_char_smallest_distance("abc"))))


# 56.find the second most repeated word in a given string. 
def word_count(str):
    counts = dict()
    words = str.split()

    for word in words:
        if word in counts:
            counts[word] += 1
        else:
            counts[word] = 1

    counts_x = sorted(counts.items(), key=lambda kv: kv[1])
    #print(counts_x)
    return counts_x[-2]
 
print(word_count("Both of these issues are fixed by postponing the evaluation of annotations. Instead of compiling code which executes expressions in annotations at their definition time, the compiler stores the annotation in a string form equivalent to the AST of the expression in question. If needed, annotations can be resolved at runtime using typing.get_type_hints(). In the common case where this is not required, the annotations are cheaper to store (since short strings are interned by the interpreter) and make startup time faster."))


# 57.Write a Python program to remove spaces from a given string. 
def remove_spaces(str1):
  str1 = str1.replace(' ','')
  return str1
    
print(remove_spaces("w 3 res ou r ce"))
print(remove_spaces("a b c"))


# 58.move spaces to the front of a given string. 
def move_Spaces_front(str1):
  noSpaces_char = [ch for ch in str1 if ch!=' ']
  spaces_char = len(str1) - len(noSpaces_char)
  result = ' '*spaces_char
  result = '"'+result + ''.join(noSpaces_char)+'"'
  return(result)

print(move_Spaces_front("w3resource .  com  "))
print(move_Spaces_front("   w3resource.com  "))


# 59.find the maximum occurring character in a given string. 
def get_max_occuring_char(str1):
  ASCII_SIZE = 256
  ctr = [0] * ASCII_SIZE
  max = -1
  ch = ''
  for i in str1:
    ctr[ord(i)]+=1;
 
  for i in str1:
    if max < ctr[ord(i)]:
      max = ctr[ord(i)]
      ch = i
  return ch

print(get_max_occuring_char("Python: Get file creation and modification date/times"))
print(get_max_occuring_char("abcdefghijkb"))


# 60.capitalize first and last letters of each word of a given string. 
def capitalize_first_last_letters(str1):
     str1 = result = str1.title()
     result =  ""
     for word in str1.split():
        result += word[:-1] + word[-1].upper() + " "
     return result[:-1]  
     
print(capitalize_first_last_letters("python exercises practice solution"))
print(capitalize_first_last_letters("w3resource"))


# 61.remove duplicate characters of a given string. 
from collections import OrderedDict
def remove_duplicate(str1):
  return "".join(OrderedDict.fromkeys(str1))
     
print(remove_duplicate("python exercises practice solution"))
print(remove_duplicate("w3resource"))


# 62.compute sum of digits of a given string. 
def sum_digits_string(str1):
    sum_digit = 0
    for x in str1:
        if x.isdigit() == True:
            z = int(x)
            sum_digit = sum_digit + z

    return sum_digit
     
print(sum_digits_string("123abcd45"))
print(sum_digits_string("abcd1234"))


# 63.remove leading zeros from an IP address. 
def remove_zeros_from_ip(ip_add):
  new_ip_add = ".".join([str(int(i)) for i in ip_add.split(".")])  
  return new_ip_add ;

print(remove_zeros_from_ip("255.024.01.01"))
print(remove_zeros_from_ip("127.0.0.01 "))


# 64.find maximum length of consecutive 0's in a given binary string. 
def max_consecutive_0(input_str): 
     return  max(map(len,input_str.split('1')))
str1 = '111000010000110'
print("Original string:" + str1)
print("Maximum length of consecutive 0’s:")
print(max_consecutive_0(str1))
str1 = '111000111'
print("Original string:" + str1)
print("Maximum length of consecutive 0’s:")
print(max_consecutive_0(str1))


# 65.find all the common characters in lexicographical order from two given lower case strings. If there are no common letters print "No common characters". 
from collections import Counter 
def common_chars(str1,str2): 	
	d1 = Counter(str1) 
	d2 = Counter(str2) 
	common_dict = d1 & d2 
	if len(common_dict) == 0: 
		return "No common characters."

	# list of common elements 
	common_chars = list(common_dict.elements()) 
	common_chars = sorted(common_chars) 

	return ''.join(common_chars) 

str1 = 'Python'
str2 = 'PHP'
print("Two strings: "+str1+' : '+str2)
print(common_chars(str1, str2))
str1 = 'Java'
str2 = 'PHP'
print("Two strings: "+str1+' : '+str2)
print(common_chars(str1, str2))


# 66.make two given strings (lower case, may or may not be of the same length) anagrams removing any characters from any of the strings. 
def make_map(s):
    temp_map = {}
    for char in s:
        if char not in temp_map:
            temp_map[char] = 1
        else:
            temp_map[char] +=1 
    return temp_map        
def make_anagram(str1, str2):
    str1_map1 = make_map(str1)
    str2_map2 = make_map(str2)
 
    ctr = 0
    for key in str2_map2.keys():
        if key not in str1_map1:
            ctr += str2_map2[key]
        else:
            ctr += max(0, str2_map2[key]-str1_map1[key])
 
    for key in str1_map1.keys():
        if key not in str2_map2:
            ctr += str1_map1[key]
        else:
            ctr += max(0, str1_map1[key]-str2_map2[key]) 
    return ctr 
str1 = input("Input string1: ")
str2 = input("Input string2: ")
print(make_anagram(str1, str2))


# 67.remove all consecutive duplicates of a given string. 
from itertools import groupby 
def remove_all_consecutive(str1): 
	result_str = [] 
	for (key,group) in groupby(str1): 
		result_str.append(key) 

	return ''.join(result_str)
	
str1 = 'xxxxxyyyyy'
print("Original string:" + str1)
print("After removing consecutive duplicates: " + str1)
print(remove_all_consecutive(str1))


# 68.create two strings from a given string. Create the first string using those character which occurs only once and create the second string which consists of multi-time occurring characters in the said string. 
from collections import Counter  
def generateStrings(input): 
     str_char_ctr = Counter(input) 
     part1 = [ key for (key,count) in str_char_ctr.items() if count==1] 
     part2 = [ key for (key,count) in str_char_ctr.items() if count>1] 
     part1.sort() 
     part2.sort()
     return part1,part2
input = "aabbcceffgh"
s1, s2 = generateStrings(input)
print(''.join(s1))   
print(''.join(s2))


# 69.find the longest common sub-string from two given strings. 
from difflib import SequenceMatcher 
  
def longest_Substring(s1,s2): 
  
     seq_match = SequenceMatcher(None,s1,s2) 
  
     match = seq_match.find_longest_match(0, len(s1), 0, len(s2)) 
  
     # return the longest substring 
     if (match.size!=0): 
          return (s1[match.a: match.a + match.size])  
     else: 
          return ('Longest common sub-string not present')  

s1 = 'abcdefgh'
s2 = 'xswerabcdwd'
print("Original Substrings:\n",s1+"\n",s2)
print("\nCommon longest sub_string:")
print(longest_Substring(s1,s2))


# 70.create a string from two given strings concatenating uncommon characters of the said strings. 
def uncommon_chars_concat(s1, s2):   
     
     set1 = set(s1) 
     set2 = set(s2) 
  
     common_chars = list(set1 & set2) 
     result = [ch for ch in s1 if ch not in common_chars] + [ch for ch in s2 if ch not in common_chars] 
     return(''.join(result))

s1 = 'abcdpqr'
s2 = 'xyzabcd'
print("Original Substrings:\n",s1+"\n",s2)
print("\nAfter concatenating uncommon characters:")
print(uncommon_chars_concat(s1, s2))


# 71.move all spaces to the front of a given string in single traversal. 
def moveSpaces(str1): 
    no_spaces = [char for char in str1 if char!=' ']   
    space= len(str1) - len(no_spaces)
    # Create string with spaces
    result = ' '*space    
    return result + ''.join(no_spaces)
  
s1 = "Python Exercises"
print("Original String:\n",s1)

print("\nAfter moving all spaces to the front:")
print(moveSpaces(s1))


# 72. remove all characters except a specified character in a given string. 
# Original string
# Python Exercises
# Remove all characters except P in the said string:
# P
# Original string
# google
# Remove all characters except g in the said string:
# gg
# Original string
# exercises
# Remove all characters except e in the said string:
# eee
def remove_characters(str1,c):
    return ''.join([el for el in str1 if el == c])
text = "Python Exercises"
print("Original string")
print(text)
except_char = "P"
print("Remove all characters except",except_char,"in the said string:")
print(remove_characters(text,except_char))
text = "google"
print("\nOriginal string")
print(text)
except_char = "g"
print("Remove all characters except",except_char,"in the said string:")
print(remove_characters(text,except_char))
text = "exercises"
print("\nOriginal string")
print(text)
except_char = "e"
print("Remove all characters except",except_char,"in the said string:")
print(remove_characters(text,except_char))


# 73.count Uppercase, Lowercase, special character and numeric values in a given string. 
def count_chars(str):
     upper_ctr, lower_ctr, number_ctr, special_ctr = 0, 0, 0, 0
     for i in range(len(str)):
          if str[i] >= 'A' and str[i] <= 'Z': upper_ctr += 1
          elif str[i] >= 'a' and str[i] <= 'z': lower_ctr += 1
          elif str[i] >= '0' and str[i] <= '9': number_ctr += 1
          else: special_ctr += 1
     return upper_ctr, lower_ctr, number_ctr, special_ctr
           
str = "@W3Resource.Com"
print("Original Substrings:",str)
u, l, n, s = count_chars(str)
print('\nUpper case characters: ',u)
print('Lower case characters: ',l)
print('Number case: ',n)
print('Special case characters: ',s)


# 74.find the minimum window in a given string which will contain all the characters of another given string. 
# Example 1
# Input : str1 = " PRWSOERIUSFK "
# str2 = " OSU "
# Output: Minimum window is "OERIUS"
import collections
def min_window(str1, str2):
    result_char, missing_char = collections.Counter(str2), len(str2)
    i = p = q = 0
    for j, c in enumerate(str1, 1):
        missing_char -= result_char[c] > 0
        result_char[c] -= 1
        if not missing_char:
            while i < q and result_char[str1[i]] < 0:
                result_char[str1[i]] += 1
                i += 1
            if not q or j - i <= q - p:
                p, q = i, j
    return str1[p:q]
           
str1 = "PRWSOERIUSFK"
str2 = "OSU"
print("Original Strings:\n",str1,"\n",str2)
print("Minimum window:")
print(min_window(str1,str2))


# 75.find smallest window that contains all characters of a given string. 
from collections import defaultdict   

def find_sub_string(str): 
    str_len = len(str) 
      
    # Count all distinct characters. 
    dist_count_char = len(set([x for x in str])) 
  
    ctr, start_pos, start_pos_index, min_len = 0, 0, -1, 9999999999
    curr_count = defaultdict(lambda: 0) 
    for i in range(str_len): 
        curr_count[str[i]] += 1
 
        if curr_count[str[i]] == 1: 
            ctr += 1
  
        if ctr == dist_count_char: 
            while curr_count[str[start_pos]] > 1: 
                if curr_count[str[start_pos]] > 1: 
                    curr_count[str[start_pos]] -= 1
                start_pos += 1
  
            len_window = i - start_pos + 1
            if min_len > len_window: 
                min_len = len_window 
                start_pos_index = start_pos 
    return str[start_pos_index: start_pos_index + min_len] 
      
str1 = "asdaewsqgtwwsa"
print("Original Strings:\n",str1)
print("\nSmallest window that contains all characters of the said string:")
print(find_sub_string(str1)) 


# 76.count number of substrings from a given string of lowercase alphabets with exactly k distinct (given) characters. 
def count_k_dist(str1, k): 
	str_len = len(str1) 
	
	result = 0

	ctr = [0] * 27

	for i in range(0, str_len): 
		dist_ctr = 0

		ctr = [0] * 27

		for j in range(i, str_len): 
			
			if(ctr[ord(str1[j]) - 97] == 0): 
				dist_ctr += 1

			ctr[ord(str1[j]) - 97] += 1

			if(dist_ctr == k): 
				result += 1
			if(dist_ctr > k): 
				break

	return result 

str1 = input("Input a string (lowercase alphabets):")
k = int(input("Input k: "))
print("Number of substrings with exactly", k, "distinct characters : ", end = "") 
print(count_k_dist(str1, k))


# 77.count number of non-empty substrings of a given string. 
def number_of_substrings(str): 
	str_len = len(str); 
	return int(str_len * (str_len + 1) / 2); 

str1 = input("Input a string: ")
print("Number of substrings:") 
print(number_of_substrings(str1))


# 78.count characters at same position in a given string (lower and uppercase characters) as in English alphabet. 
def count_char_position(str1): 
    count_chars = 0
    for i in range(len(str1)):
        if ((i == ord(str1[i]) - ord('A')) or 
            (i == ord(str1[i]) - ord('a'))): 
            count_chars += 1
    return count_chars 
  
str1 = input("Input a string: ")
print("Number of characters of the said string at same position as in English alphabet:")
print(count_char_position(str1))


# 79.find smallest and largest word in a given string. 
def smallest_largest_words(str1):
    word = "";
    all_words = [];
    str1 = str1 + " ";
    for i in range(0, len(str1)):
        if(str1[i] != ' '):
            word = word + str1[i];  
        else:
            all_words.append(word);  
            word = "";  
          
    small = large = all_words[0];  
   
#Find smallest and largest word in the str1  
    for k in range(0, len(all_words)):
        if(len(small) > len(all_words[k])):
            small = all_words[k];
        if(len(large) < len(all_words[k])):
            large = all_words[k];
    return small,large;

str1 = "Write a Java program to sort an array of given integers using Quick sort Algorithm.";  
print("Original Strings:\n",str1)
small, large = smallest_largest_words(str1)  
print("Smallest word: " + small);  
print("Largest word: " + large); 


# 80.count number of substrings with same first and last characters of a given string. 
def no_of_substring_with_equalEnds(str1): 
	result = 0; 
	n = len(str1); 
	for i in range(n): 
		for j in range(i, n): 
			if (str1[i] == str1[j]): 
				result = result + 1
	return result 
str1 = input("Input a string: ")
print(no_of_substring_with_equalEnds(str1))


# 81.find the index of a given string at which a given substring starts. If the substring is not found in the given string return 'Not found'. 
def find_Index(str1, pos):
    if len(pos) > len(str1):
        return 'Not found'

    for i in range(len(str1)):

        for j in range(len(pos)):

            if str1[i + j] == pos[j] and j == len(pos) - 1:
                return i
                
            elif str1[i + j] != pos[j]:
                break

    return 'Not found'
print(find_Index("Python Exercises", "Ex"))
print(find_Index("Python Exercises", "yt"))
print(find_Index("Python Exercises", "PY"))


# 82.wrap a given string into a paragraph of given width. 
# Sample Output:
# Input a string: The quick brown fox.
# Input the width of the paragraph: 10
# Result:
# The quick
# brown fox.
import textwrap
s = input("Input a string: ")
w = int(input("Input the width of the paragraph: ").strip())
print("Result:")
print(textwrap.fill(s,w))


# 83.print four values decimal, octal, hexadecimal (capitalized), binary in a single line of a given integer. 
# Sample Output:
# Input an integer: 25
# Decimal Octal Hexadecimal (capitalized), Binary
# 25 31 19 11001
i = int(input("Input an integer: "))
o = str(oct(i))[2:]
h = str(hex(i))[2:]
h = h.upper()
b = str(bin(i))[2:]
d = str(i)
print(f"Decimal {d} Octal {o} Hexadecimal (capitalized) {h}, Binary {b}")




# 84.swap cases of a given string. 
# Sample Output:
# pYTHON eXERCISES
# jAVA
# nUMpY
def swap_case_string(str1):
   result_str = ""   
   for item in str1:
       if item.isupper():
           result_str += item.lower()
       else:
           result_str += item.upper()           
   return result_str
print(swap_case_string("Python Exercises"))
print(swap_case_string("Java"))
print(swap_case_string("NumPy"))


# 85.convert a given Bytearray to Hexadecimal string. 
# Sample Output:
# Original Bytearray :
# [111, 12, 45, 67, 109]
# Hexadecimal string:
# 6f0c2d436d

def bytearray_to_hexadecimal(list_val):
     result = ''.join('{:02x}'.format(x) for x in list_val)  
     return(result)

list_val = [111, 12, 45, 67, 109] 
print("Original Bytearray :")
print(list_val)
print("\nHexadecimal string:")
print(bytearray_to_hexadecimal(list_val))

# 86.delete all occurrences of a specified character in a given string. 
# Sample Output:
# Original string:
# Delete all occurrences of a specified character in a given string
# Modified string:
# Delete ll occurrences of specified chrcter in given string
def delete_all_occurrences(str1, ch):
     result = str1.replace(ch, "")
     return(result)

str_text = "Delete all occurrences of a specified character in a given string"
print("Original string:")
print(str_text)
print("\nModified string:")
ch='a'
print(delete_all_occurrences(str_text, ch))


# 87. Write a Python program find the common values that appear in two given strings. 
# Sample Output:
# Original strings:
# Python3
# Python2.7
# Intersection of two said String:
# Python
def intersection_of_two_string(str1, str2):
    result = ""
    for ch in str1:
        if ch in str2 and not ch in result:
            result += ch
    return result

str1 = 'Python3'
str2 = 'Python2.7'
print("Original strings:")
print(str1)
print(str2)
print("\nIntersection of two said String:") 
print(intersection_of_two_string(str1, str2))


# 88.check whether a given string contains a capital letter, a lower case letter, a number and a minimum length. 
# Sample Output:
# Input the string: W3resource
# ['Valid string.']
def check_string(s):
    messg = []
    if not any(x.isupper() for x in s):
        messg.append('String must have 1 upper case character.')
    if not any(x.islower() for x in s):
        messg.append('String must have 1 lower case character.')
    if not any(x.isdigit() for x in s):
        messg.append('String must have 1 number.')
    if len(s) < 8:
        messg.append('String length should be atleast 8.')    
    if not messg:
        messg.append('Valid string.')
    return messg
    
s = input("Input the string: ")
print(check_string(s))


# 89.remove unwanted characters from a given string. 
# Sample Output:
# Original String : Pyth*^on Exercis^es
# After removing unwanted characters:
# Python Exercises
# Original String : A%^!B#*CD
# After removing unwanted characters:
# ABCD
def remove_chars(str1, unwanted_chars):
    for i in unwanted_chars:
        str1 = str1.replace(i, '')
    return str1



str1 = "Pyth*^on Exercis^es"
str2 = "A%^!B#*CD"

unwanted_chars = ["#", "*", "!", "^", "%"]
print ("Original String : " + str1)
print("After removing unwanted characters:")
print(remove_chars(str1, unwanted_chars))
print ("\nOriginal String : " + str2)
print("After removing unwanted characters:")
print(remove_chars(str2, unwanted_chars))


# 90.remove duplicate words from a given string. 
# Sample Output:
# Original String:
# Python Exercises Practice Solution Exercises
# After removing duplicate words from the said string:
# Python Exercises Practice Solution
def unique_list(text_str):
    l = text_str.split()
    temp = []
    for x in l:
        if x not in temp:
            temp.append(x)
    return ' '.join(temp)

text_str = "Python Exercises Practice Solution Exercises"
print("Original String:")
print(text_str)
print("\nAfter removing duplicate words from the said string:")
print(unique_list(text_str))


# 91.convert a given heterogeneous list of scalars into a string. 
# Sample Output:
# Original list:
# ['Red', 100, -50, 'green', 'w,3,r', 12.12, False]
# Convert the heterogeneous list of scalars into a string:
# Red,100,-50,green,w,3,r,12.12,False
def heterogeneous_list_to_str(lst):
    result = ','.join(str(x) for x in lst)
    return result
h_data = ["Red", 100, -50, "green", "w,3,r", 12.12, False]
print("Original list:")
print(h_data)
print("\nConvert the heterogeneous list of scalars into a string:")
print(heterogeneous_list_to_str(h_data))


# 92.find the string similarity between two given strings. 
# Sample Output:
# Original string:
# Python Exercises
# Python Exercises
# Similarity between two said strings:
# 1.0
# Original string:
# Python Exercises
# Python Exercise
# Similarity between two said strings:
# 0.967741935483871
# Original string:
# Python Exercises
# Python Ex.
# Similarity between two said strings:
# 0.6923076923076923
# Original string:
# Python Exercises
# Python
# Similarity between two said strings:
# 0.5454545454545454
# Original string:
# Java Exercises
# Python
# Similarity between two said strings:
# 0.0
import difflib
def string_similarity(str1, str2):
    result =  difflib.SequenceMatcher(a=str1.lower(), b=str2.lower())
    return result.ratio()
str1 = 'Python Exercises'
str2 = 'Python Exercises'
print("Original string:")
print(str1)
print(str2)
print("Similarity between two said strings:")
print(string_similarity(str1,str2))
str1 = 'Python Exercises'
str2 = 'Python Exercise'
print("\nOriginal string:")
print(str1)
print(str2)
print("Similarity between two said strings:")
print(string_similarity(str1,str2))
str1 = 'Python Exercises'
str2 = 'Python Ex.'
print("\nOriginal string:")
print(str1)
print(str2)
print("Similarity between two said strings:")
print(string_similarity(str1,str2))
str1 = 'Python Exercises'
str2 = 'Python'
print("\nOriginal string:")
print(str1)
print(str2)
print("Similarity between two said strings:")
print(string_similarity(str1,str2))
str1 = 'Python Exercises'
str1 = 'Java Exercises'
print("\nOriginal string:")
print(str1)
print(str2)
print("Similarity between two said strings:")
print(string_similarity(str1,str2))


# 93.extract numbers from a given string. 
# Sample Output:
# Original string: red 12 black 45 green
# Extract numbers from the said string: [12, 45]
def test(str1):
    result = [int(str1) for str1 in str1.split() if str1.isdigit()]
    return result
str1 = "red 12 black 45 green" 
print("Original string:", str1) 
print("Extract numbers from the said string:")
print(test(str1))


# 94.convert a hexadecimal color code to a tuple of integers corresponding to its RGB components. 
# Sample Output:
# (255, 165, 1)
# (255, 255, 255)
# (0, 0, 0)
# (255, 0, 0)
# (0, 0, 128)
# (192, 192, 192)
def hex_to_rgb(hex):
  return tuple(int(hex[i:i+2], 16) for i in (0, 2, 4)) 
print(hex_to_rgb('FFA501'))
print(hex_to_rgb('FFFFFF'))
print(hex_to_rgb('000000'))
print(hex_to_rgb('FF0000'))
print(hex_to_rgb('000080'))
print(hex_to_rgb('C0C0C0'))


# 95.convert the values of RGB components to a hexadecimal color code. 
# Sample Output:
# FFA501
# FFFFFF
# 000000
# 000080
# C0C0C0
def rgb_to_hex(r, g, b):
  return ('{:02X}' * 3).format(r, g, b)
 
print(rgb_to_hex(255, 165, 1))
print(rgb_to_hex(255, 255, 255))
print(rgb_to_hex(0, 0, 0))
print(rgb_to_hex(0, 0, 128))
print(rgb_to_hex(192, 192, 192))


# 96.convert a given string to camelcase. Use re.sub() to replace any - or _ with a space, using the regexp r"(_|-)+".
# Use str.title() to capitalize the first letter of each word and convert the rest to lowercase.
# Finally, use str.replace() to remove spaces between words.
# Sample Output:
# javascript
# fooBar
# fooBar
# foo.Bar
# fooBar
# foobar
# fooBar
from re import sub

def camel_case(s):
  s = sub(r"(_|-)+", " ", s).title().replace(" ", "")
  return ''.join([s[0].lower(), s[1:]])
print(camel_case('JavaScript'))
print(camel_case('Foo-Bar'))
print(camel_case('foo_bar'))
print(camel_case('--foo.bar'))
print(camel_case('Foo-BAR'))
print(camel_case('fooBAR'))
print(camel_case('foo bar'))


# 97.convert a given string to snake case. 
# Sample Output:
# java_script
# foo_bar
# foo_bar
# foo.bar
# foo_bar
# foo_bar
# foo_bar
from re import sub
def snake_case(s):
  return '_'.join(
    sub('([A-Z][a-z]+)', r' \1',
    sub('([A-Z]+)', r' \1',
    s.replace('-', ' '))).split()).lower()

print(snake_case('JavaScript'))
print(snake_case('Foo-Bar'))
print(snake_case('foo_bar'))
print(snake_case('--foo.bar'))
print(snake_case('Foo-BAR'))
print(snake_case('fooBAR'))
print(snake_case('foo bar'))


# 98.decapitalize the first letter of a given string. 
# Sample Output:
# java Script
# python
def decapitalize_first_letter(s, upper_rest = False):
  return ''.join([s[:1].lower(), (s[1:].upper() if upper_rest else s[1:])]) 
print(decapitalize_first_letter('Java Script'))
print(decapitalize_first_letter('Python'))


# 99.split a given multiline string into a list of lines. 
# Sample Output:
# Original string: This
# is a
# multiline
# string.
# Split the said multiline string into a list of lines:
# ['This', 'is a', 'multiline', 'string.', '']
def split_lines(s):
  return s.split('\n')
print("Original string:")
print("This\nis a\nmultiline\nstring.\n")
print("Split the said multiline string into a list of lines:")
print(split_lines('This\nis a\nmultiline\nstring.\n'))


# 100.check whether any word in a given sting contains duplicate characters or not. Return True or False. 
# Sample Output:
# Original text:
# Filter out the factorials of the said list.
# Check whether any word in the said sting contains duplicate characters or not!
# False
# Original text:
# Python Exercise.
# Check whether any word in the said sting contains duplicate characters or not!
# False
# Original text:
# The wait is over.
# Check whether any word in the said sting contains duplicate characrters or not!
# True
def duplicate_letters(text):
	word_list = text.split()
	for word in word_list:
		if len(word) > len(set(word)):
			return False
	return True
text = "Filter out the factorials of the said list."
print("Original text:")
print(text)
print("Check whether any word in the said sting contains duplicate characrters or not!")
print(duplicate_letters(text))
text = "Python Exercise."
print("\nOriginal text:")
print(text)
print("Check whether any word in the said sting contains duplicate characrters or not!")
print(duplicate_letters(text))
text = "The wait is over."
print("\nOriginal text:")
print(text)
print("Check whether any word in the said sting contains duplicate characrters or not!")
print(duplicate_letters(text))


# 101.add two strings as they are numbers (Positive integer values). Return a message if the numbers are string. 
# Sample Output:
# 42
# Error in input!
# Error in input!
def test(n1, n2):
    n1, n2 = '0' + n1, '0' + n2
    if (n1.isnumeric() and n2.isnumeric()):
        return str(int(n1) + int(n2))
    else:
        return 'Error in input!'
print(test("10", "32"))
print(test("10", "22.6"))
print(test("100", "-200")) 
