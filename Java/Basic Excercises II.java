// 151. Write a Java program to find the value of specified expression. 

// a) 101 + 0) / 3
// b) 3.0e-6 * 10000000.1
// c) true && true
// d) false && true
// e) (false && false) || (true && true)
// f) (false || false) && (true && true)
// Expected Output :
// (101 + 0) / 3)-> 33
// (3.0e-6 * 10000000.1)-> 30.0000003
// (true && true)-> true
// (false && true)-> false
// ((false && false) || (true && true))-> true
// (false || false) && (true && true)-> false


// 152. Write a Java program that accepts four integer from the user and prints equal if all four are equal, and not equal otherwise. 

// Sample Output:
// Input first number: 25
// Input second number: 37
// Input third number: 45
// Input fourth number: 23
// Numbers are not equal!


// 153. Write a Java program that accepts two double variables and test if both strictly between 0 and 1 and false otherwise. 

// Sample Output:
// Input first number: 5
// Input second number: 1
// false


// 154. Write a Java program to print the contents of a two-dimensional Boolean array where t will represent true and f will represent false. 

// Sample array:
// array = {{true, false, true},
// {false, true, false}};
// Expected Output :
// t f t
// f t f


// 155. Write a Java program to print an array after changing the rows and columns of a given two-dimensional array. 

// Original Array:
// 10 20 30
// 40 50 60
// After changing the rows and columns of the said array:10 40
// 20 50
// 30 60


// 156. Write a Java program that returns the largest integer but not larger than the base-2 logarithm of a specified integer. 

// Original Number: 2350
// Result: 115


// 157. Write a Java program to prove that Euclid’s algorithm computes the greatest common divisor of two positive given integers. 

// According to Wikipedia "The Euclidean algorithm is based on the principle that the greatest common divisor of two numbers does not change if the larger number is replaced by its difference with the smaller number. For example, 21 is the GCD of 252 and 105 (as 252 = 21 × 12 and 105 = 21 × 5), and the same number 21 is also the GCD of 105 and 252 − 105 = 147. Since this replacement reduces the larger of the two numbers, repeating this process gives successively smaller pairs of numbers until the two numbers become equal. When that occurs, they are the GCD of the original two numbers. By reversing the steps, the GCD can be expressed as a sum of the two original numbers each multiplied by a positive or negative integer, e.g., 21 = 5 × 105 + (−2) × 252. The fact that the GCD can always be expressed in this way is known as Bézout's identity."

// Expected Output:
// result: 24
// result: 1


// 158. Write a Java program to create a two-dimension array (m x m) A[][] such that A[i][j] is true if I and j are prime and have no common factors, otherwise A[i][j] becomes false. 

// Sample Output:
// true true true
// true true true
// true true false


// 159. Write a Java program to find the k largest elements in a given array. Elements in the array can be in any order. 

// Expected Output:
// Original Array:
// [1, 4, 17, 7, 25, 3, 100]
// 3 largest elements of the said array are:
// 100 25 17


// 160. Write a Java program to find the k smallest elements in a given array. Elements in the array can be in any order. 

// Expected Output:
// Original Array:
// [1, 4, 17, 7, 25, 3, 100]
// 3 largest elements of the said array are:
// 100 25 17


// 161. Write a Java program to find the kth smallest and largest element in a given array. Elements in the array can be in any order. 

// Expected Output:
// Original Array:
// [1, 4, 17, 7, 25, 3, 100]
// K'th smallest element of the said array:
// 3
// K'th largest element of the said array:
// 25


// 162. Write a Java program to find the numbers greater than the average of the numbers of a given array. 

// Expected Output:
// Original Array:
// [1, 4, 17, 7, 25, 3, 100]
// The average of the said array is: 22.0
// The numbers in the said array that are greater than the average are:
// 25
// 100


// 163. Write a Java program that will accept an integer and convert it into a binary representation. Now count the number of bits which is equal to zero of the said binary representation. 

// Expected Output:
// Input first number: 25
// Binary representation of 25 is: 11001
// Number of zero bits: 2


// 164. Write a Java program to divide the two given integers using subtraction operator. 

// Expected Output:
// Input the dividend: 625
// Input the divider: 25
// Result: 25.0


// 165. Write a Java program to move every positive number to the right and every negative number to the left of a given array of integers. 

// Expected Output:
// Original array: [-2, 3, 4, -1, -3, 1, 2, -4, 0]
// Result: [-4, -3, -2, -1, 0, 1, 2, 3, 4]


// 166. Write a Java program to transform a given integer to String format. 

// Expected Output:
// Input an integer: 35
// String format of the said integer: 35


// 167. Write a Java program to move every zero to the right side of a given array of integers. 

// Original array: [0, 3, 4, 0, 1, 2, 5, 0]
// Result: [3, 4, 1, 2, 5, 0, 0, 0]


// 168. Write a Java program to multiply two given integers without using the multiply operator(*). 

// Input the first number: 25
// Input the second number: 5
// Result: 125


// 169. Write a Java program to reverse the content of a sentence (assume a single space between two words) without reverse every word. 

// Input a string: The quick brown fox jumps over the lazy dog
// Result: dog lazy the over jumps fox brown quick The


// 170. Write a Java program to find the length of the longest consecutive sequence of a given array of integers. 

// Original array: [1, 1, 2, 3, 3, 4, 5, 2, 4, 5, 6, 7, 8, 9, 6, -1, -2]
// 7


// 171. Write a Java program to accept two string and test if the second string contains the first one. 

// Input first string: Once in a blue moon
// Input second string: See eye to eye
// If the second string contains the first one? false


// 172. Write a Java program to get the number of element in a given array of integers that are smaller than the integer of another given array of integers. 

// Expected Output:
// 0
// 3
// 7


// 173. Write a Java program to find the median of the number inside the window (size k) at each moving in a given array of integers with duplicate numbers. Move the window from the start of the array. 

// Sample Output:
// {|1, 2, 3|, 4, 5, 6, 7, 8, 8} -> Return median 2
// {1, |2, 3, 4|, 5, 6, 7, 8, 8} -> Return median 3
// {1, 2, |3, 4, 5|, 6, 7, 8, 8} -> Return median 4
// {1, 2, 3, |4, 5, 6|, 7, 8, 8} -> Return median 5
// {1, 2, 3, 4, |5, 6, 7|, 8, 8} -> Return median 6
// {1, 2, 3, 4, 5, |6, 7, 8|, 8} -> Return median 7
// {1, 2, 3, 4, 5, 6, |7, 8, 8|} -> Return median 8
// Result array {2, 3, 4, 5, 6, 7, 8}

// Expected Output:

// Original array: [1, 2, 3, 4, 5, 6, 7, 8, 8]

// Value of k: 3

// Result: 
// 2
// 3
// 4
// 5
// 6
// 7
// 8


// 174. Write a Java program to find the maximum number inside the number in the window (size k) at each moving in a given array of integers with duplicate numbers. Move the window from the start of the array. 

// Sample output:
// {|1, 2, 3|, 4, 5, 6, 7, 8, 8} -> Return maximum 3
// {1, |2, 3, 4|, 5, 6, 7, 8, 8} -> Return maximum 4
// {1, 2, |3, 4, 5|, 6, 7, 8, 8} -> Return maximum 5
// {1, 2, 3, |4, 5, 6|, 7, 8, 8} -> Return maximum 6
// {1, 2, 3, 4, |5, 6, 7|, 8, 8} -> Return maximum 7
// {1, 2, 3, 4, 5, |6, 7, 8|, 8} -> Return maximum 8
// {1, 2, 3, 4, 5, 6, |7, 8, 8|} -> Return maximum 8
// Result array {3, 4, 5, 6, 7, 8, 8}

// Expected Output:

// Original array: [1, 2, 3, 4, 5, 6, 7, 8, 8]

// Value of k: 3

// Result: 
// 2
// 3
// 4
// 5
// 6
// 7
// 8


// 175. Write a Java program to delete a specified node in the middle of a singly linked list. 

// Sample Singly linked list: 10->20->30->40->50
// Delete the fourth node i.e. 40
// Result: 10->20->30->50
// Expected Output:

// Original Linked list:
// 10->20->30->40->50
// After deleting the fourth node, Linked list becomes:
// 10->20->30->50


// 176. Write a Java program to partition an given array of integers into even number first and odd number second. 

// Expected Output

// Original array: [7, 2, 4, 1, 3, 5, 6, 8, 2, 10]
// After partition the said array becomes: [10, 2, 4, 2, 8, 6, 5, 3, 1, 7]


// 177. Write a Java program to get a new binary tree with same structure and same value of a given binary tree. 

// Expected Output:

// Original Treenode:
// 4
// 5
// 2
// 3
// 1

// Clone of the said Treenode:
// 4
// 5
// 2
// 3
// 1


// 178. Write a Java program to find the longest increasing continuous subsequence in a given array of integers. 

// Expected Output:

// Original array: [10, 11, 12, 13, 14, 7, 8, 9, 1, 2, 3]
// Size of longest increasing continuous subsequence: 5


// 179. Write a Java program to plus one to the number of a given positive numbers represented as an array of digits. 

// Sample array: [9, 9, 9, 9] which represents 9999
// Output: [1, 0, 0, 0, 0].

// Expected Output:

// Original array: [9, 9, 9, 9]
// Array of digits: [1, 0, 0, 0, 0]


// 180. Write a Java program to swap every two adjacent nodes of a given linked list. 

// Expected Output:

// Original Linked list:
// 10->20->30->40->50

// After swiping Linked list becomes:
// 20->10->40->30->50


// 181. Write a Java program to find the length of last word of a given string. The string contains upper/lower-case alphabets and empty space characters ' '. 

// Sample Output:

// Original String: The length of last word
// Length of the last word of the above string: 4


// 182. Write a Java program to check if two binary trees are identical or not. Assume that two binary trees have the same structure and every identical position has the same value. 

// Sample Output:

// Comparing TreeNode a and TreeNode b:
// false

// Comparing TreeNode b and TreeNode c:
// true


// 183. Write a Java program to accept a positive number and repeatedly add all its digits until the result has only one digit. 

// Expected Output:

// Input a positive integer:  25
// 7


// 184. Write a Java program to find the length of the longest consecutive sequence path of a given binary tree. 
// Note: The longest consecutive path need to be from parent to child.
// Java Basic Exercises: Find the length of the longest consecutive sequence path of a given binary tree.

// Expected Output:

// Length of the longest consecutive sequence path:  4


// 185. Write a Java program to check if two given strings are isomorphic or not. 

// Expected Output:

// Is abca and zbxz are Isomorphic? true


// 186. Write a Java program to check if a number is a strobogrammatic number. The number is represented as a string. 

// According to Wikipedia "A strobogrammatic number is a number whose numeral is rotationally symmetric, so that it appears the same when rotated 180 degrees. In other words, the numeral looks the same right-side up and upside down (e.g., 69, 96, 1001). A strobogrammatic prime is a strobogrammatic number that is also a prime number, i.e., a number that is only divisible by one and itself (e.g., 11). It is a type of ambigram, words and numbers that retain their meaning when viewed from a different perspective, such as palindromes."
// The first few strobogrammatic numbers are:
// 0, 1, 8, 11, 69, 88, 96, 101, 111, 181, 609, 619, 689, 808, 818, 888, 906, 916, 986, 1001, 1111, 1691, 1881, 1961, 6009, 6119, 6699, 6889, 6969, 8008, 8118, 8698, 8888, 8968, 9006, 9116, 9696, 9886, 9966, ...

// Expected Output:

// Is 9006 is Strobogrammatic? true


// 187. Write a Java program to find the index of first non-repeating character in a given string. 

// Expected Output:

// Index of first non-repeating character in 'google' is: 4


// 188. Write a Java program to find all the start indices of a given string's anagrams in another given string. 

// Expected Output:

// Original String: zyxwyxyxzwxyz
// Starting anagram indices of xyz: [0, 6, 10]


// 189. Write a Java program to Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2. 

// Expected Output:

// '123' + '456' = 579


// 190. Write a Java program to find the missing string from two given strings. 

// Expected Output:

// Missing string: [Solution]


// 191. Write a Java program to test whether there are two integers x and y such that x^2 + y^2 is equal to a given positive number. 

// Expected Output:

// Input a positive integer:  25
// Is 25 sum of two square numbers? true


// 192. Write a Java program to rearrange the alphabets in the order followed by the sum of digits in a given string containing uppercase alphabets and integer digits (from 0 to 9). 

// Expected Output:

// ADEHNS23


// 193. Write a Java program that accept an integer and find the sum of all the elements from all possible subsets of a set formed by first n natural numbers. 

// Expected Output:

// Input a positive integer:  25
// Sum of subsets of n is : 1157627904


// 194. Write a Java program to find the all positions of a given number in a given matrix. If the number not found print ("Number not found!"). 

// Expected Output:

// (0,2)

// (1,0)

// (2,1)


// 195. Write a Java program to check if three given side lengths (integers) can make a triangle or not. 

// Expected Output:

// Input side1:  5
// Input side2:  6
// Input side3:  8
// Is the said sides form a triangle: true 


// 196. rite a Java program to create a spiral array of n * n sizes from a given integer n. 

// Expected Output:

//  Input a number:  5
// Spiral array becomes:
// 1 2 3 4 5
// 16 17 18 19 6
// 15 24 25 20 7
// 14 23 22 21 8
// 13 12 11 10 9


// 197. Write a Java program to test if a given number (positive integer ) is a perfect square or not. 

// Expected Output:

// Input a positive integer:  6
// Is the said number perfect square? false 


// 198. Write a Java program to get the position of a given prime number. 

// Expected Output:

// Input a positive integer:  15
// Position of the said Prime number: 6


// 199. Write a Java program to check a string follows a given pattern. 

// Example pattern:
// Given pattern = "xyyx", str = "red black black red", return true.
// Given pattern = "xyyx", str = "red black black green", return false.
// Given pattern = "xxxx", str = "red black black red", return false.
// Given pattern = "xxxx", str = "red red red red", return true.

// Expected Output:

// Is the string and pattern matched? false


// 200. Write a Java program to remove duplicate letters and arrange in lexicographical order from a given string which contains only lowercase letters. 

// Note: In mathematics, the lexicographic or lexicographical order (also known as lexical order, dictionary order, alphabetical order or lexicographic(al) product) is a generalization of the way words are alphabetically ordered based on the alphabetical order of their component letters.

// Expected Output:

// Original string: zxywooxz
// After removing duplicate characters: xywoz


// 201. Write a Java program to divide a given array of integers into given k non-empty subsets whose sums are all equal. Return true if all sums are equal otherwise return false. 

// Example:
// nums = {1,3,3,5,6,6}, k = 4;
// 4 subsets (5,1), (3, 3), (6), (6) with equal sums.

// Expected Output:

// Original Array: [1, 3, 3, 5, 6, 6]
// Target of subsets: 4
// After removing duplicate characters: true


// 202. Write a Java program to find the total number of continuous subarrays in a given array of integers whose sum equals to an given integer. 

// Expected Output:

// Original Array: [4, 2, 3, 3, 7, 2, 4]
// Value of k: 6
// Total number of continuous subarrays: 3


// 203. Write a Java program to find the contiguous subarray of given length k which has the maximum average value of a given array of integers. Display the maximum average value. 

// Expected Output:

// Original Array: [4, 2, 3, 3, 7, 2, 4]
// Value of k: 3
// Maximum average value: 4.333333333333333


// 204. Write a Java program to compute xn % y where x, y and n are all 32bit integers. 

// Expected Output:

// Input x :  25
// Input n :  35
// Input y :  45
// x^n % y = 5.0


// 205. Write a Java program to check whether an given integer is power of 2 or not using O(1) time. 

// Note: O(1) means that it takes a constant time, like 12 nanoseconds, or two minutes no matter the amount of data in the set.
// O(n) means it takes an amount of time linear with the size of the set, so a set twice the size will take twice the time. You probably don't want to put a million objects into one of these.

// Expected Output:

// Input a number :  25
// false


// 206. Write a Java program to find all unique combinations from a collection of candidate numbers. The sum of the numbers will be equal to a given target number. 

// Expected Output:

// Input number of elements of the array: 
//  3
// Input number format: 2 3 4 5: 
// Enter elements:
//  6 7 8
// Enter target sum:
//  21
// A solution set is:
// { 6 7 8 }


// 207. Write a Java program to merge two sorted (ascending) linked lists in ascending order. 

// Expected Output:

// How many elements do you want to add in 1st linked list?:  3
// Input numbers of 1st linked list in ascending order:  1 2 3

// How many elements do you want to add in 2nd linked list?:  3
// Input numbers of 2nd linked list in ascending order:  4 5 6

// Merged list: 1 2 3 4 5 6 


// 208. Write a Java program to create a basic string compression method using the counts of repeated characters. 

// Input string: aaaabbbbcccccddddeeee

// Expected Output:

// Enter a string (you can include space as well)
//  aaaabbbbcccccddddeeee
// The compressed string along with the counts of repeated characters is:
// a4b4c5d4e4


// 209. Write a Java program to find all unique combinations from a collection of candidate numbers. The sum of the numbers will be equal to a given target number. 

// Input number of elements of the array:
// 3
// Input number format: 2 3 4 5:

// Expected Output:

// Enter elements:
//  6 7 8
// Enter target sum:
//  21
// A solution set is:
// { 6 7 8 }


// 210. Write a Java program to match any single character (use ?) or any sequence of characters use *) including the empty. The matching should cover the entire input string. 

// Expected Output:

// Enter a string
//  bb
// Enter a pattern
//  b*
// Yes


// 211. Write a Java program to find heights of the top three building in descending order from eight given buildings. 

// Input:

// 0 ≤ height of building (integer) ≤ 10,000

// Expected Output:

// Input the heights of eight buildings:
//  25 19 23 45 18 23 24 19

// Heights of the top three buildings:
// 45
// 25
// 24


// 212. Write a Java program to compute the digit number of sum of two given integers. 

// Input:

// Each test case consists of two non-negative integers a and b which are separated by a space in a line. 0 ≤ a, b ≤ 1,000,000

// Expected Output:

// Input two integers(a b):
//  13 25
// Digit number of sum of said two integers:
// 2


// 213. Write a Java program to check whether three given lengths (integers) of three sides form a right triangle. Print "Yes" if the given sides form a right triangle otherwise print "No". 

// Input:

// Each test case consists of two non-negative integers a and b which are separated by a space in a line. 0 ≤ a, b ≤ 1,000,000

// Expected Output:

// Input three integers(sides of a triangle)
//  6 9 12
// If the given sides form a right triangle?
// No


// 214. Write a Java program which solve the equation: 
// ax+by=c
// dx+ey=f
// Print the values of x, y where a, b, c, d, e and f are given.

// Input:

// a,b,c,d,e,f separated by a single space.
// (-1,000 ≤ a,b,c,d,e,f ≤ 1,000)

// Expected Output:

// Input the value of a, b, c, d, e, f:
//  5 6 8 9 7 4
// -1.684 2.737


// 215. Write a Java program to compute the amount of the debt in n months. The borrowing amount is $100,000 and the loan adds 4% interest of the debt and rounds it to the nearest 1,000 above month by month. 

// Input:

// An integer n (0 ≤ n ≤ 100)

// Expected Output:

// Input number of months:
//  6

// Amount of debt: 
// 129000


// 216. Write a Java program which reads an integer n and find the number of combinations of a,b,c and d (0 ≤ a,b,c,d ≤ 9) where (a + b + c + d) will be equal to n. 

// Input:

// a,b,c,d,e,f separated by a single space.
// (-1,000 ≤ a,b,c,d,e,f ≤ 1,000)

// Expected Output:

// Input the number(n):
//  5 
// Number of combinations of a, b, c and d :
// 56


// 217. Write a Java program to print the number of prime numbers which are less than or equal to a given integer. 

// Input:

// n (1 ≤ n ≤ 999,999)

// Expected Output:

// Input the number(n):
//  1235
// Number of prime numbers which are less than or equal to n.:
// 202


// 218. Write a Java program to compute the radius and the central coordinate (x, y) of a circle which is constructed by three given points on the plane surface. 

// Input:

// x1, y1, x2, y2, x3, y3 separated by a single space.

// Expected Output:

// Input x1, y1, x2, y2, x3, y3 separated by a single space:
//  5 6 4 8 7 9

// Radius and the central coordinate:
// 1.821 (5.786 7.643)                     


// 219. Write a Java program to check if a point (x, y) is in a triangle or not. There is a triangle formed by three points. 

// Input:

// x1, y1, x2, y2, x3, y3 separated by a single space.

// Expected Output:

// Input (x1, y1)
// 2
// 6
// Input (x2, y2)
// 3
// 5
// Input (x3, y3)
// 4
// 6
// Input (xp, yp)
// 5
// 6
// The point is outside the triangle.                    


// 220. Write a Java program to compute and print sum of two given integers (more than or equal to zero). If given integers or the sum have more than 80 digits, print "overflow". 

// Input:

// Expected Output:

// Input two integers:
// 25
// 46

// Sum of the said two integers:
// 71                   


// 221. Write a Java program that accepts six numbers as input and sorts them in descending order. 

// Input:

// Input consists of six numbers n1, n2, n3, n4, n5, n6 (-100000 ≤ n1, n2, n3, n4, n5, n6 ≤ 100000). The six numbers are separated by a space.

// Expected Output:

//   Input six integers:
//  4 6 8 2 7 9
// After sorting the said integers:
// 9 8 7 6 4 2                   


// 222. Write a Java program to test whether two lines PQ and RS are parallel. The four points are P(x1, y1), Q(x2, y2), R(x3, y3), S(x4, y4). 

// Input:

// −100 ≤ x1, y1, x2, y2, x3, y3, x4, y4 ≤ 100
// Each value is a real number with at most 5 digits after the decimal point.

// Expected Output:

// Input P(x1,y1),separated by a space.
//  5 6
// Input Q(x2,y2),separated by a space.
//  4 2
// Input R(x3,y3),separated by a space.
//  5 3
// Input S(x4,y4),separated by a space.
//  5 6
// Two lines are not parallel.             


// 223. Write a Java program to find the maximum sum of a contiguous subsequence from a given sequence of numbers a1, a2, a3, ... an. A subsequence of one element is also a continuous subsequence. 

// Input:

// You can assume that 1 ≤ n ≤ 5000 and -100000 ≤ ai ≤ 100000.
// Input numbers are separated by a space.
// Input 0 to exit.

// Expected Output:

// How many integers would you like to input?
//  5
// Input the integers:
//  25 61 35 42 66
// Maximum sum of the said contiguous subsequence:
// 229             


// 224. There are two circles C1 with radius r1, central coordinate (x1, y1) and C2 with radius r2 and central coordinate (x2, y2) 
// Write a Java program to test the followings -
// "C2 is in C1" if C2 is in C1
// "C1 is in C2" if C1 is in C2
// "Circumference of C1 and C2 intersect" if circumference of C1 and C2 intersect, and
// "C1 and C2 do not overlap" if C1 and C2 do not overlap.

// Input:

// Input numbers (real numbers) are separated by a space.

// Expected Output:

// Input x1, y1, r1: (numbers are separated by a space)
//  5 6 8 7
// Input x2, y2, r2: (numbers are separated by a space)
//  8 9 5 4
// C1 and C2  do not overlap      


// 225. Write a Java program to that reads a date (from 2004/1/1 to 2004/12/31) and prints the day of the date. Jan. 1, 2004, is Thrusday. Note that 2004 is a leap year. 

// Expected Output:

// Input the month(1-12)
//  9
// Input date (1-31)
//  15
// Name of the date: 
// Wednesday


// 226. Write a Java program to print mode values from a given a sequence of integers. The mode value is the element which occurs most frequently. If there are several mode values, print them in ascending order. 

// Input:

// A sequence of integer’s ai (1 ≤ ai ≤ 100). The number of integers is less than or equals to 100.

// Expected Output:

// How many integers would you like to input(Max.100?)
// 5
// Input the integers:
// 25
// 35
// 15
// 5
// 45
// Mode value(s)in ascending order:
// 5
// 15
// 25
// 35
// 45


// 227. Write a Java program which reads a text (only alphabetical characters and spaces.) and prints two words. The first one is the word which is arise most frequently in the text. The second one is the word which has the maximum number of letters. 
// Note: A word is a sequence of letters which is separated by the spaces.

// Input:

// A sequence of integer’s ai (1 ≤ ai ≤ 100). The number of integers is less than or equals to 100.

// Expected Output:

// Thank you for your comment and your participation.
// Input a text in a line:
// Most frequent text and the word which has the maximum number of letters:
// your participation.


// 228. Write a Java program that reads n digits (given) chosen from 0 to 9 and prints the number of combinations where the sum of the digits equals to another given number (s). Do not use the same digits in a combination. 
// For example, the combinations where n = 3 and s = 6 are as follows:
// 1 + 2 + 3 = 6
// 0 + 1 + 5 = 6
// 0 + 2 + 4 = 6

// Input:

// Two integers as number of combinations and their sum by a single space in a line. Input 0 0 to exit.

// Expected Output:

// Input number of combinations and sum (separated by a space in a line):
// 3 6
// Number of combinations:
// 3


// 229. Write a Java program which reads the two adjoined sides and the diagonal of a parallelogram and check whether the parallelogram is a rectangle or a rhombus. 
// According to Wikipedia-
// parallelograms: In Euclidean geometry, a parallelogram is a simple (non-self-intersecting) quadrilateral with two pairs of parallel sides. The opposite or facing sides of a parallelogram are of equal length and the opposite angles of a parallelogram are of equal measure.
// rectangles: In Euclidean plane geometry, a rectangle is a quadrilateral with four right angles. It can also be defined as an equiangular quadrilateral, since equiangular means that all of its angles are equal (360°/4 = 90°). It can also be defined as a parallelogram containing a right angle.
// rhombus: In plane Euclidean geometry, a rhombus (plural rhombi or rhombuses) is a simple (non-self-intersecting) quadrilateral whose four sides all have the same length. Another name is equilateral quadrilateral, since equilateral means that all of its sides are equal in length. The rhombus is often called a diamond, after the diamonds suit in playing cards which resembles the projection of an octahedral diamond, or a lozenge, though the former sometimes refers specifically to a rhombus with a 60° angle (see Polyiamond), and the latter sometimes refers specifically to a rhombus with a 45° angle.

// Input:

// Two adjoined sides and the diagonal.
// 1 ≤ ai, bi, ci ≤ 1000, ai + bi > ci

// Expected Output:

// Input two adjoined sides and the diagonal of a parallelogram (comma separated):
// 8,8,8
// This is a rhombus.


// 230. Write a Java program to replace a string "python" with "java" and "java" with "python" in a given string. 

// Input:

// English letters (including single byte alphanumeric characters, blanks, symbols) are given on one line. The length of the input character string is 1000 or less.
// Output:
// Exchanged character string of python and java on one line.

// Expected Output:

// Input the string:
// python is more propular than java
// New string:
// java is more propular than python


// 231. Write a Java program to find the difference between the largest integer and the smallest integer which are created by 8 numbers from 0 to 9. The number that can be rearranged shall start with 0 as in 00135668. 

// Input:

// Data is a sequence of 8 numbers (numbers from 0 to 9).
// Output:
// The difference between the largest integer and the smallest integer.

// Sample Output:

// Input an integer created by 8 numbers from 0 to 9:
// 567894321
// Difference between the largest and the smallest integer from the given integer:
// 75308643


// 232. Write a Java program to compute the sum of first n given prime numbers. 

// Input:

// n ( n ≤ 10000). Input 0 to exit the program.

// Sample Output:

// Input a number (n<=10000) to compute the sum:
// 100
// Sum of first 100 prime numbers:
// 24133


// 233. Write a Java program that accept a even number (n should be greater than or equal to 4 and less than or equal to 50,000, Goldbach number) from the user and create a combinations that express the given number as a sum of two prime numbers. Print the number of combinations. 

// Goldbach number: A Goldbach number is a positive even integer that can be expressed as the sum of two odd primes.[4] Since four is the only even number greater than two that requires the even prime 2 in order to be written as the sum of two primes, another form of the statement of Goldbach's conjecture is that all even integers greater than 4 are Goldbach numbers.
// The expression of a given even number as a sum of two primes is called a Goldbach partition of that number. The following are examples of Goldbach partitions for some even numbers:
// 6 = 3 + 3
// 8 = 3 + 5
// 10 = 3 + 7 = 5 + 5
// 12 = 7 + 5
// ...
// 100 = 3 + 97 = 11 + 89 = 17 + 83 = 29 + 71 = 41 + 59 = 47 + 53

// Sample Output:

// Input an even number: 100

// Number of combinations: 6


// 234. If you draw a straight line on a plane, the plane is divided into two regions. For example, if you pull two straight lines in parallel, you get three areas, and if you draw vertically one to the other you get 4 areas. 

// Write a Java program to create maximum number of regions obtained by drawing n given straight lines.
// Input:
// xp,yp, xq, yq, xr, yr, xs and ys are -100 to 100 respectively and each value can be up to 5 digits after the decimal point It is given as a real number including the number of.
// Output: Yes or No.

// Sample Output:

// Input number of straight lines:
// 5
// Number of regions:
// 16


// 235. There are four different points on a plane, P(xp,yp), Q(xq, yq), R(xr, yr) and S(xs, ys).
// Write a Java program to test whether AB and CD are orthogonal or not.
// Write a Java program to create maximum number of regions obtained by drawing n given straight lines.
// Input:
// xp,yp, xq, yq, xr, yr, xs and ys are -100 to 100 respectively and each value can be up to 5 digits after the decimal point It is given as a real number including the number of.
// Output: Yes or No.

// Sample Output:

// Input xp, yp, xq, yq, xr, yr, xs, ys:
// 3.5 4.5 2.5 -1.5 3.5 1.0 0.0 4.5
// Two lines are not orthogonal.


// 236. Write a Java program to sum of all numerical values (positive integers) embedded in a sentence. 

// Input:
// Sentences with positive integers are given over multiple lines. Each line is a character string containing one-byte alphanumeric characters, symbols, spaces, or an empty line. However the input is 80 characters or less per line and the sum is 10,000 or less.

// Sample Output:

// Input some text and numeric values:
// 5 apple and 10 orange are rotten in the basket

// Sum of the numeric values:
// 15


// 237. There are 10 vertical and horizontal squares on a plane. Each square is painted blue and green. Blue represents the sea, and green represents the land. When two green squares are in contact with the top and bottom, or right and left, they are said to be ground. The area created by only one green square is called "island". For example, there are five islands in the figure below.
// Write a Java program to read the mass data and find the number of islands. 

// Input:
// A single data set is represented by 10 rows of 10 numbers representing green squares as 1 and blue squares as zeros.
// Output: For each data set, output the number of islands.

// Sample Output:

// Input 10 rows of 10 numbers representing green squares (island) as 1 and blue squares (sea) as zeros
// 1100000111
// 1000000111
// 0000000111
// 0010001000
// 0000011100
// 0000111110
// 0001111111
// 1000111110
// 1100011100
// 1110001000
// Number of islands:
// 5


// 238. When character are consecutive in a string , it is possible to shorten the character string by replacing the character with a certain rule. For example, in the case of the character string YYYYY, if it is expressed as # 5 Y, it is compressed by one character.
// Write a Java program to restore the original string by entering the compressed string with this rule. However, the # character does not appear in the restored character string. 
// Note: The original sentences are uppercase letters, lowercase letters, numbers, symbols, less than 100 letters, and consecutive letters are not more than 9 letters.

// Input:
// Multiple character strings are given. One string is given per line.
// Output: The restored character string for each character on one line.

// Sample Output:

// Input the text:
// XY#6Z1#4023
// XYZZZZZZ1000023


// 239. Internet search engine giant, such as Google accepts web pages around the world and classify them, creating a huge database. The search engines also analyze the search keywords entered by the user and create inquiries for database search. In both cases, complicated processing is carried out in order to realize efficient retrieval, but basics are all cutting out words from sentences.
// Write a Java program to cut out words of 3 to 6 characters length from a given sentence not more than 1024 characters. 

// Input:
// English sentences consisting of delimiters and alphanumeric characters are given on one line.
// Output: Output a word delimited by one space character on one line.

// Sample Output:

// Input a sentence (1024 characters. max.)
// The quick brown fox

// 3 to 6 characters length of words:
// The quick brown fox


// 240. Arrange integers (0 to 99) as narrow hilltop, as illustrated in Figure 1. Reading such data representing huge, when starting from the top and proceeding according to the next rule to the bottom.
// Write a Java program that compute the maximum value of the sum of the passing integers. 

// Input:
// A series of integers separated by commas are given in diamonds. No spaces are included in each line. The input example corresponds to Figure 1. The number of lines of data is less than 100 lines.
// Output: The maximum value of the sum of integers passing according to the rule on one line.

// Sample Output:

// Input the numbers (ctrl+c to exit):
// 8
// 4,9
// 9,2,1
// 3,8,5,5
// 5,6,3,7,6
// 3,8,5,5
// 9,2,1
// 4,9
// 8
// Maximum value of the sum of integers passing according to the rule on one line.
// 64


// 241. Write a Java program to find the number of combinations that satisfy p + q + r + s = n where n is a given number <= 4000 and p, q, r, s in the range of 0 to 1000. 

// Sample Output:

// Input a positive integer:
// 252
// Number of combinations of a,b,c,d:
// 2731135


// 242. Your task is to develop a small part of spreadsheet software. Write a Java program which adds up columns and rows of given table as shown in the specified figure: 

// Input number of rows/columns (0 to exit)
// 4
// 25 69 51 26
// 68 35 29 54
// 54 57 45 63
// 61 68 47 59
// Result:
//    25   69   51   26  171
//    68   35   29   54  186
//    54   57   45   63  219
//    61   68   47   59  235
//   208  229  172  202  811


// 243. Write a Java program which reads a list of pairs of a word and a page number, and prints the word and a list of the corresponding page numbers. 

// Input:

// Input pairs of a word and a page number:
// apple 5
// banana 6

// Word and page number in alphabetical order:
// apple
// 5
// banana
// 6


// 244. Write a Java program which accepts a string from the user and check whether the string is correct or not. 

// The conditions for getting the "correct answer" are:
// a) There must be only three characters X, Y, and Z in the string, and no other characters.
// b) Any string of any form such as aXYZa can get the "correct answer", where a is either an empty string or a string consisting only of the letter X;
// c) If aXbZc is correct, aXbYZca is also correct, where a, b, c are either empty strings or a string consisting only of the letter X.

// Input:

// Input a string:
//  XYZ
// Correct format..


// 245. Write a Java program which accepts students name, id, and marks and display the highest score and the lowest score. 

// The student name and id are all strings of no more than 10 characters. The score is an integer between 0 and 100.

// Input:

// Input number of students:
// 3
// Input Student Name, ID, Score:
// Devid v1 72
// Peter v2 68
// Johnson v3 85
// name, ID of the highest score and the lowest score:
// Johnson v3
// Peter v2


// 246. Let us use the letter H to mean "hundred", the letter T to mean "ten" and “1, 2, . . . n” to represent the ones digit n (<10). Write a Java program to convert 3 digits positive number in given format. For example, 234 should be output as BBSSS1234 because it has 2 "hundreds", 3 "ten", and 4 of the ones. 

// The student name and id are all strings of no more than 10 characters. The score is an integer between 0 and 100.

// Input:
// 235
// 230
// Output:
// HHTTT12345
// HHTTT

// Input a positive number(max three digits):
// 235
// Result:
// HHTTT12345


// 247. Write a Java program which accepts three integers and check whether sum of the first two given integers is greater than third one. Three integers are in the interval [-231, 231 ]. 

// Input:

// Input three integers (a,b,c):
// 5 8 9
// Check whether (a + b) is greater than c?
// true


// 248. From Wikipedia, An abecedarium (or abecedary) is an inscription consisting of the letters of an alphabet, almost always listed in order. Typically, abecedaria (or abecedaries) are practice exercises.
// Write a Java program to check if each letter of a given word (Abecadrian word) is less than the one before it. 

// Input:

// Input a word:  ABCD
// Is Abecadrian word? true


// 249. From Wikipedia,
// The Hamming weight of a string is the number of symbols that are different from the zero-symbol of the alphabet used. It is thus equivalent to the Hamming distance from the all-zero string of the same length. For the most typical case, a string of bits, this is the number of 1's in the string, or the digit sum of the binary representation of a given number and the ℓ₁ norm of a bit vector. In this binary case, it is also called the population count, popcount, sideways sum, or bit summation.

// Example:
// String 	Hamming weight
// 11101 	4
// 11101000 	4
// 00000000 	0
// 789012340567 	10
// Write a Java program to count the number of set bits in a 32-bit integer. 

// Input:

// Input a number:  1427
// 6


// 250. From Wikipedia,
// A cyclic redundancy check (CRC) is an error-detecting code commonly used in digital networks and storage devices to detect accidental changes to raw data. Blocks of data entering these systems get a short check value attached, based on the remainder of a polynomial division of their contents. On retrieval, the calculation is repeated and, in the event the check values do not match, corrective action can be taken against data corruption. CRCs can be used for error correction.

// Example:
// Write a Java program to generate a crc32 checksum of a given string or byte array. 

// Input:

// Input a string:  The quick brown fox
// crc32 checksum of the string: b74574de
