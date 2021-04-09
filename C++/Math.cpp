// 1. Write a C++ program to check whether a given number is a power of two or not. 
// Is 8 is power of 2: True
// Is 256 is power of 2: True
// Is 124 is power of 2: False


// 2. Write a C++ program to check the additive persistence of a given number. 
// Additive Persistence
// Consider the process of taking a number, adding its digits, then adding the digits of the number derived from it, etc., until the remaining number has only one digit. The number of additions required to obtain a single digit from a number n is called the additive persistence of n, and the digit obtained is called the digital root of n.
// For example, the sequence obtained from the starting number 9876 is (9876, 30, 3), so 9876 has an additive persistence of 2 and a digital root of 3. The additive persistences of the first few positive integers are 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, ... (OEIS A031286). The smallest numbers of additive persistence n for n=0, 1, ... are 0, 10, 19, 199, 19999999999999999999999, ... (OEIS A006050).
// Source: https://mathworld.wolfram.com/


// 3. Write a C++ program to reverse the digits of a given integer. 
// Sample Input: 4
// Sample Output: 4

// Sample Input: 123
// Sample Output: 321


// 4. Write a C++ program to divide two integers (dividend and divisor) without using multiplication, division and mod operator. 
// Dividend 7 Divisor 2
// Result: 3
// Dividend -17 Divisor 5
// Result: -3


// 5. Write a C++ program to calculate x raised to the power n (xn). 
// Sample Input: x = 7.0
// n = 2
// Sample Output: 49


// 6. Write a C++ program to get the fraction part from two given integers representing the numerator and denominator in string format. 
// Sample Input: x = 3
// n = 2
// Sample Output: 1.5


// 7. Write a C++ program to get the Excel column title that corresponds to a given column number (integer value). 
// For example:
// 1 -> A
// 2 -> B
// 3 -> C
// ...
// 26 -> Z
// 27 -> AA
// 28 -> AB
// ...


// 8. Write a C++ program to get the column number (integer value) that corresponds to a column title as appear in an Excel sheet. 
// For example:
// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28
// ...


// 9. Write a C++ program to find the number of trailing zeroes in a given factorial. 
// Sample Input: n = 4
// Sample Output: 0
// Sample Input: n = 6
// Sample Output: 1


// 10. Write a C++ program to count the total number of digit 1 appearing in all positive integers less than or equal to a given integer n. 
// Example:
// Sample Input: n = 12,
// Sample Output: 5
// Return 5, because digit 1 occurred 5 times in the following numbers: 1, 10, 11, 12.


// 11. Write a C++ programming to add repeatedly all digits of a given non-negative number until the result has only one digit. 
// Example:
// Sample Input: 58
// Sample Output: 4
// Explanation: The formula is like: 5 + 8 = 13, 1 + 3 = 4.


// 12. Write a C++ programming to check if a given integer is a power of three or not. 
// Sample Input: 9
// Sample Output: true
// Sample Input: 15
// Sample Output: False


// 13. For a non negative integer in the range 0 = i = n write a C++ programming to calculate the number of 1's in their binary representation and return them as an array. 
// Original number: 4
// 0 1 1 2 1
// Original number: 7
// 0 1 1 2 1 2 2 3


// 14. Write a C++ programming to get the maximum product from a given integer after breaking the integer into the sum of at least two positive integers. 
// Sample Input: 12
// Sample Output: 81
// Explanation: 12 = 3 + 3 + 3 + 3, 3 x 3 x 3 x 3 = 81.
// Sample Input: 7
// Sample Output: 12
// Explanation: 7 = 3 + 2 + 2, 3 x 2 x 2 = 12.


// 15. Write a C++ programming to find the nth digit of number 1 to n?. 
// Infinite integer sequence: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 .. where n is a positive integer.
// Input: 7
// Output: 7
// Input: 12
// Output: 1
// The 12th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is 1, which is part of the number 11.


// 16. Write a C++ program to find the square root of a number using Babylonian method. 
// Sample Input: n = 50
// Sample Output: 7.07107
// Sample Input: n = 81
// Sample Output: 9


// 17. Write a C++ program to multiply two integers without using multiplication, division, bitwise operators, and loops. 
// Sample Input: 8, 9
// Sample Output: 72

// Input: -11, 19
// Output: -209


// 18. Write a C++ program to convert a given integer to a roman numeral. 
// From Wikipedia:
// Roman numerals are a numeral system that originated in ancient Rome and remained the usual way of writing numbers throughout Europe well into the Late Middle Ages. Numbers in this system are represented by combinations of letters from the Latin alphabet. Modern usage employs seven symbols, each with a fixed integer value:[1]
// CPP Math exercises: Convert a given integer to a roman numeral
// Sample Input: n = 7
// Sample Output: Roman VII

// Input: n = 19
// Output: Roman XIX


// 19. Write a C++ program to convert a given roman numeral to a integer. 
// Sample Input: n = VII
// Sample Output: Integer 7

// Input: n = XIX
// Output: Integer 19


// 20. Write a C++ program to calculate the product of two positive integers represented as strings. Return the result as a string. 
// Sample Input: sn1 = "12"
// sn2 = "5"
// Sample Output: 12 X 5 = 60

// Sample Input: sn1 = "48"
// sn2 = "85"
// Sample Output: 48 X 85 = 4080


// 21. In algebra, a decimal number can be defined as a number whose whole number part and the fractional part is separated by a decimal point. Write a C++ program to check if a given string is a decimal number or not. 
// List of characters of a valid decimal number:
// Numbers: 0-9
// Positive/negative sign - "+"/"-"
// Decimal point - "."
// Exponent - "e"
// Sample Input: s = 9
// Sample Output: Is 0 a decimal number? 1

// Input: s = abc 123
// Output: Is abc 123 a decimal number? 0


// 22. Write a C++ program to compute the sum of two given binary strings. Return result will be a binary string and input strings should not be blank and contains only 1 or 0 charcters. 
// Sample Input: bstr1 = "10"
// bstr2 = "1"
// Sample Output: 10 + 1 = 11

// Sample Input: bstr1 = "1100"
// bstr2 = "1010"
// Sample Output: 1100 + 1010 = 10110


// 23. Write a C++ program to compute square root of a given non-negative integer. Return type should be an integer. 
// Sample Input: n = 81
// Sample Output: Square root of 81 = 9
// Input: n = 8
// Output: Square root of 8 = 2


// 24. Write a C++ program to count the prime numbers less than a given positive number. 
// Sample Input: n = 8
// Sample Output: Number of prime numbers less than 8 is 2
// Sample Input: n = 30
// Sample Output: Number of prime numbers less than 30 is 10


// 25. Write a C++ program to count the total number of digit 1 pressent in all positive numbers less than or equal to a given integer. 
// Sample Input: n = 10
// Sample Output: Number of digit 1 present in all +ve numbers less than or equal to 10 is 2
// Sample Input: n = 19
// Sample Output: Number of digit 1 present in all +ve numbers less than or equal to 19 is 12


// 26. Write a C++ program to find the missing number in a given array of integers taken from the sequence 0, 1, 2, 3, ...,n. 
// Sample Input: arr[10] = {10, 9, 4, 6, 3, 2, 5, 7, 1, 0 }
// Sample Output: Missing number in the said array: 8
// Sample Input: arr1[4] = {0, 3, 4, 2}
// Sample Output: Missing number in the said array: 1


// 27. Write a C++ program to find the number of perfect square (e.g. 1, 4, 9, 16, ...) numbers which represent a sum of a given number. 
// Sample Input: n = 5
// Number of perfect square whose sum equal to 5 = 2
// Sample Input: n = 7
// Number of perfect square whose sum equal to 7 = 4


// 28. Write a C++ program to break a given integer in at least two parts (positive integers) to maximize the product of those integers. 
// Sample Input: n = 5
// After breaking in +ve integers maximumn product from 5 = 6
// Sample Input: n = 12
// After breaking in +ve integers maximumn product from 12 = 81


// 29. Write a C++ program to count all the numbers with unique digits within a given range 0 = y < 10n where y represent the unique digits numbers and take n as a input from the user. 
// Sample Input: n = 1
// Number of unique digits: 10
// Sample Input: n = 2
// Number of unique digits: 91


// 30. Write a C++ program to check whether a given positive integer is a perfect square or not. 
// In mathematics, a square number or perfect square is an integer that is the square of an integer, in other words, it is the product of some integer with itself. For example, 9 is a square number, since it can be written as 3 x 3.
// Sample Input: n = 1
// Is 1 is perfect number? 1
// Sample Input: n = 13
// Is 13 is perfect number? 0


// 31. Write a C++ program to replace a given number until it become 1. 
// If the given number(n) is even replace n with n/2 and if the given number(n) is odd replace n with either n+1 or n-1. Find the minimum number of replacements.
// Sample Input: n = 8
// Number of replacements: 3
// Sample Input: n = 10
// Number of replacements: 4
