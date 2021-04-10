// 1. Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum. 
// Sample Input
// 1, 2
// 3, 2
// 2, 2
// Sample Output:
// 3
// 5
// 12
#include <iostream>

using namespace std;

int test(int x, int y)
        {
            return x == y ? (x + y)*3 : x + y;
        }
        
        
int main() 
 {
  cout << test(1, 2) << endl;  
  cout << test(3, 2) << endl;  
  cout << test(2, 2) << endl;  
  return 0;    
}


// 2. Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference. 
// Sample Input:
// 53
// 30
// 51
// Sample Output:
// 6
// 21
// 0
#include <iostream>

using namespace std;

int test(int n)
        {
            const int x = 51;

            if (n > x)
            {
                return (n - x)*3;
            }
            return x - n;
        }
        
        
int main() 
 {
  cout << test(53) << endl;  
  cout << test(30) << endl;  
  cout << test(51) << endl;  
  return 0;    
}


// 3. Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30. 
// Sample Input:
// 30, 0
// 25, 5
// 20, 30
// 20, 25
// Sample Output:
// 1
// 1
// 1
// 0

#include <iostream>
using namespace std;

bool test(int x, int y)
        {
            return x == 30 || y == 30 || (x + y == 30);
        }        
        
int main() 
 {
  cout << test(30, 0) << endl;  
  cout << test(25, 5) << endl;  
  cout << test(20, 30) << endl;  
  cout << test(20, 25) << endl;    
  return 0;    
}

// 4. Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200. 
// Sample Input:
// 103
// 90
// 89
// Sample Output:
// 1
// 1
// 0

#include <iostream>

using namespace std;

bool test(int x)
        {
              if(abs(x - 100) <= 10 || abs(x - 200) <= 10)
                return true;
            return false;
        }
        
int main() 
 {
  cout << test(103) << endl;  
  cout << test(90) << endl;  
  cout << test(89) << endl;  
  return 0;    
}


// 5. Write a C++ program to create a new string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged. 
// Sample Input:
// "if else"
// "else"
// Sample Output:
// if else
// if else

#include <iostream>

using namespace std;

string test(string s)
        {
            if (s.length() > 2 && s.substr(0, 2)=="if")
            {
                return s;
            }
            return "if " + s;
        }
        
int main() 
 {
  cout << test("if else") << endl;  
  cout << test("else") << endl;  
  return 0;    
}

// 6. Write a C++ program to remove the character in a given position of a given string. The given position will be in the range 0..string length -1 inclusive. 
// Sample Input:
// "Python", 1
// "Python", o
// "Python", 4
// Sample Output:
// Pthon
// ython
// Pythn
#include <iostream>

using namespace std;

string test(string str, int n)
        {
            return str.erase(n, 1);
        }
        
int main() 
 {
  cout << test("Python", 1) << endl;  
  cout << test("Python", 0) << endl;  
  cout << test("Python", 4) << endl;  
  return 0;    
}


// 7. Write a C++ program to exchange the first and last characters in a given string and return the new string. 
// Sample Input:
// "abcd"
// "a"
// "xy"
// Sample output:
// dbca
// a
// yx
#include <iostream>
using namespace std;

string test(string str)
        {
            return str.length() > 1
                ? str.substr(str.length() - 1) + str.substr(1, str.length() - 2) + str.substr(0, 1) : str;
        }
        
int main() 
 {
  cout << test("abcd") << endl;  
  cout << test("a") << endl;  
  cout << test("xy") << endl;  
  return 0;    
}


// 8. Write a C++ program to create a new string which is 4 copies of the 2 front characters of a given string. If the given string length is less than 2 return the original string. 
// Sample Input:
// "C Sharp"
// "JS"
// "a"
// Sample Output:
// C C C C
// JSJSJSJS
// a

#include <iostream>
using namespace std;

string test(string str)
        {
             return str.length() < 2 ? str : str.substr(0, 2) + str.substr(0, 2) + str.substr(0, 2)  + str.substr(0, 2); 
        }
        
int main() 
 {
  cout << test("C Sharp") << endl;  
  cout << test("JS") << endl;  
  cout << test("a") << endl;  
  return 0;    
}

// 9. Write a C++ program to create a new string with the last char added at the front and back of a given string of length 1 or more. 
// Sample Input:
// "Red"
// "Green"
// "1"
// Sample Output:
// dRedd
// nGreenn
// 111

#include <iostream>
using namespace std;

string test(string str)
        {
            string s = str.substr(str.length()-1);
            return s + str + s;
        }
        
int main() 
 {
  cout << test("Red") << endl;  
  cout << test("Green") << endl;  
  cout << test("1") << endl;  
  return 0;    
}

// 10. Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7. 
// Sample Input
// 3
// 14
// 12
// 37
// Sample Output:
// 1
// 1
// 1
// 0

#include <iostream>
using namespace std;

bool test(int n)
        {
            return n % 3 == 0 || n % 7 == 0;
        }
        
int main() 
 {
  cout << test(3) << endl;  
  cout << test(14) << endl;  
  cout << test(12) << endl;  
  cout << test(37) << endl;  
  return 0;    
}

// 11. Write a C++ program to create a new string taking the first 3 characters of a given string and return the string with the 3 characters added at both the front and back. If the given string length is less than 3, use whatever characters are there. 
// Sample Input:
// "Python"
// "JS"
// "Code"
// Sample Output:
// PytPythonPyt
// JSJSJS
// CodCodeCod

#include <iostream>
using namespace std;

string  test(string str)
        {
             if (str.length() < 3)
            {
                return str + str + str;
            }
            else
            {
                string front = str.substr(0, 3);
                return front + str + front;
            }
        }
        
int main() 
 {
  cout << test("Python") << endl;  
  cout << test("JS") << endl;  
  cout << test("Code") << endl;  
  return 0;    
}

// 12. Write a C++ program to check if a given string starts with 'C#' or not. 
// Sample Input:
// "C++ Sharp"
// "C#"
// "C++"
// Sample Output:
// 1
// 1
// 0
#include <iostream>

using namespace std;

 bool test(string str)
        {
            return (str.length() < 3 && str=="C#") || (str.substr(0,2)=="C#" && str[2] == ' ');
        }
        
int main() 
 {
  cout << test("C# Sharp") << endl;  
  cout << test("C#") << endl;  
  cout << test("C++") << endl;  
  return 0;    
}


// 13. Write a C++ program to check if one given temperatures is less than 0 and the other is greater than 100. 
// Sample Input:
// 120, -1
// -1, 120
// 2, 120
// Sample Output:
// 1
// 1
// 0

#include <iostream>
using namespace std;

bool test(int temp1, int temp2)
        {
            return temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;
        }
        
int main() 
 {
  cout << test(120, -1) << endl;  
  cout << test(-1, 120) << endl;  
  cout << test(2, 120) << endl;  
  return 0;    
}

// 14. Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive. 
// Sample Input:
// 100, 199
// 250, 300
// 105, 190
// Sample Output:
// 1
// 0
// 1

#include <iostream>
using namespace std;

bool test(int x, int y)
        {
            return (x >= 100 && x <= 200) || (y >= 100 && y <= 200);
        }
        
int main() 
 {
  cout << test(100, 199) << endl;  
  cout << test(250, 300) << endl;  
  cout << test(105, 190) << endl;  
  return 0;    
}

// 15. Write a C++ program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise false. 
// Sample Input:
// 11, 20, 12
// 30, 30, 17
// 25, 35, 50
// 15, 12, 8
// Sample Output:
// 1
// 1
// 1
// 0
#include <iostream>
using namespace std;

bool test(int x, int y, int z)
        {
            return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
        }
        
int main() 
 {
  cout << test(11, 20, 12) << endl;  
  cout << test(30, 30, 17) << endl;  
  cout << test(25, 35, 50) << endl;  
  cout << test(15, 12, 8) << endl;    
  return 0;    
}


// 16. Write a C++ program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the said range otherwise false. 
// Sample Input:
// 20, 84
// 14, 50
// 11, 45
// 25, 40
// Sample Output:
// 1
// 1
// 1
// 0

#include <iostream>

using namespace std;

bool test(int x, int y)
        {
            return (x <= 20 || y >= 50) || (y <= 20 || x >= 50);
        }
        
int main() 
 {
  cout << test(20, 84) << endl;  
  cout << test(14, 50) << endl;  
  cout << test(11, 45) << endl;  
  cout << test(25, 40) << endl;    
  return 0;    
}

// 17. Write a C++ program to check if a string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string. 
// Sample Input:
// "Python"
// "ytade"
// "jsues"
// Sample Output:
// Phon
// ytade
// jsues

#include <iostream>
using namespace std;

string test(string str)
        {
            return str.substr(1, 2)=="yt" ? str.erase(1, 2) : str;
        }
        
int main() 
 {
  cout << test("Python") << endl;  
  cout << test("ytade") << endl;  
  cout << test("jsues") << endl;  
  return 0;    
}

// 18. Write a C++ program to check the largest number among three given integers. 
// Sample Input:
// 1,2,3
// 1,3,2
// 1,1,1
// 1,2,2
// Sample Output:
// 3
// 3
// 1
// 2
#include <iostream>
using namespace std;

int test(int x, int y, int z)
        {
            int result = max(x, max(y, z));
            return result;
        }
        
int main() 
 {
  cout << test(1,2,3) << endl;  
  cout << test(1,3,2) << endl;  
  cout << test(1,1,1) << endl;  
  cout << test(1,2,2) << endl;  
  return 0;    
}


// 19. Write a C++ program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal. 
// Sample Input:
// 78, 95
// 95, 95
// 99, 70
// Sample Output:
// 95
// 0
// 99
#include <iostream>
using namespace std;

int test(int x, int y)
        {
            const int n = 100;
            int val = abs(x - n);
            int val2 = abs(y - n);

            return val == val2 ? 0 : (val < val2 ? x : y);
        }
        
int main() 
 {
  cout << test(78, 95) << endl;  
  cout << test(95, 95) << endl;  
  cout << test(99, 70) << endl;  
  return 0;    
}


// 20. Write a C++ program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive. 
// Sample Input:
// 78, 95
// 25, 35
// 40, 50
// 55, 60
// Sample Output:
// 0
// 0
// 1
// 1
#include <iostream>

using namespace std;

bool test(int x, int y)
        {
            return (x >= 40 && x <= 50 && y >= 40 && y <= 50) || (x >= 50 && x <= 60 && y >= 50 && y <= 60);
        }
        
int main() 
 {
  cout << test(78, 95) << endl;  
  cout << test(25, 35) << endl;  
  cout << test(40, 50) << endl;  
  cout << test(55, 60) << endl;  
  return 0;    
}


// 21. Write a C++ program to find the larger value from two positive integer values that is in the range 20..30 inclusive, or return 0 if neither is in that range. 
// Sample Input:
// 78, 95
// 20, 30
// 21, 25
// 28, 28
// Sample Output:
// 0
// 30
// 25
// 28

#include <iostream>

using namespace std;

int test(int x, int y)
        {
            if (x >= 20 && x <= 30 && y >= 20 && y <= 30)
            {
                if (x >= y)
                {
                    return x;
                }
                else
                {
                    return y;
                }
            }
            else if (x >= 20 && y <= 30)
            {
                return x;
            }
            else if (y >= 20 && y <= 30)
            {
                return y;
            }
            else
            {
                return 0;
            }
        }

        
int main() 
 {
  cout << test(78, 95) << endl;  
  cout << test(20, 30) << endl;  
  cout << test(21, 25) << endl;  
  cout << test(28, 28) << endl;  
  return 0;    
}

// 22. Write a C++ program to check if a given string contains between 2 and 4 'z' character. 
// Sample Input:
// "frizz"
// "zane"
// "Zazz"
// "false"
// Sample Output:
// 1
// 0
// 1
// 0

#include <iostream>

using namespace std;

bool test(string str)
        {
            int ctr = 0;

            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] == 'z')
                {
                    ctr++;
                }
            }

            return ctr > 1 && ctr < 4;
        }      

        
int main() 
 {
  cout << test("frizz") << endl;  
  cout << test("zane") << endl;  
  cout << test("Zazz") << endl;  
  cout << test("false") << endl;  
  return 0;    
}


// 23. Write a C++ program to check if two given non-negative integers have the same last digit. 
// Sample Input:
// 123, 456
// 12, 512
// 7, 87
// 12, 45
// Sample Output:
// 0
// 1
// 1
// 0

#include <iostream>
using namespace std;

bool test(int x, int y)
        {
            return abs(x % 10) == abs(y % 10);
        }
        
int main() 
 {
  cout << test(123, 456) << endl;  
  cout << test(12, 512) << endl;  
  cout << test(7, 87) << endl;  
  cout << test(12, 45) << endl;  
  return 0;    
}

// 24. Write a C++ program to create a new string which is n (non-negative integer) copies of a given string. 
// Sample Input:
// "JS", 2
// "JS", 3
// "JS", 1
// Sample Output:
// JSJS
// JSJSJS
// JS
#include <iostream>
using namespace std;

string test(string s, int n)
        {
            string result = "";
            for (int i = 0; i < n; i++)
            {
                result += s;
            }
            return result;
        }
        
int main() 
 {
  cout << test("JS", 2) << endl;  
  cout << test("JS", 3) << endl;  
  cout << test("JS", 1) << endl;  
  return 0;    
}


// 25. Write a C++ program to create a new string which is n (non-negative integer) copies of the first 3 characters of a given string. If the length of the given string is less than 3 then return n copies of the string. 
// Sample Input:
// "Python", 2
// "Python", 3
// "JS", 3
// Sample Output:
// PytPyt
// PytPytPyt
// JSJSJS

#include <iostream>
using namespace std;

string test(string s, int n)
        {
            string result = " ";
            int frontOfString = 3;

            if (frontOfString > s.length())
                frontOfString = s.length();

            string front = s.substr(0, frontOfString);

            for (int i = 0; i < n; i++)
            {
                result += front;
            }
            return result;
        }
        
int main() 
 {
  cout << test("Python", 2) << endl;  
  cout << test("Python", 3) << endl;  
  cout << test("JS", 3) << endl;  
  return 0;    
}

// 26. Write a C++ program to count the string "aa" in a given string and assume "aaa" contains two "aa". 
// Sample Input:
// "bbaaccaag"
// "jjkiaaasew"
// "JSaaakoiaa"
// Sample Output:
// 2
// 2
// 3
#include <iostream>
using namespace std;


int test(string s)
        {
            int ctr_aa = 0;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s.substr(i, 2) == "aa")
                {
                    ctr_aa++;
                }
            }
            return ctr_aa;
        }
        
int main() 
 {
  cout << test("bbaaccaag") << endl;  
  cout << test("jjkiaaasew") << endl;  
  cout << test("JSaaakoiaa") << endl;  
  return 0;    
}


// 27. Write a C++ program to check if the first appearance of "a" in a given string is immediately followed by another "a". 
// Sample Input:
// "caabb"
// "babaaba"
// "aaaaa"
// Sample Output:
// 1
// 0
// 1
#include <iostream>
using namespace std;


bool test(string str)
        {
            int counter = 0;
            for (int i = 0; i < str.length()-1; i++)
            {
                if (str[i] == 'a') counter++;
                if(str.substr(i, 2) == "aa" && counter < 2) 
                return true;
            }
            return false;
        }
        
int main() 
 {
  cout << test("caabb") << endl;  
  cout << test("babaaba") << endl;  
  cout << test("aaaaa") << endl;  
  return 0;    
}


// 28. Write a C++ program to create a new string made of every other character starting with the first from a given string. 
// Sample Input:
// "Python"
// "PHP"
// "JS"
// Sample Output:
// Pto
// PP
// J

#include <iostream>
using namespace std;

string test(string s)
        {
           string result = " ";
            for (int i = 0; i < s.length(); i++)
             {
                 if (i % 2 == 0) result += s[i];
             }
            return result;
        }
        
int main() 
 {
  cout << test("Python") << endl;  
  cout << test("PHP") << endl;  
  cout << test("JS") << endl;  
  return 0;    
}

// 29. Write a C++ program to create a string like "aababcabcd" from a given string "abcd". 
// Sample Input:
// "abcd"
// "abc"
// "a"
// Sample Output:
// aababcabcd
// aababc
// a

#include <iostream>
using namespace std;

string test(string str)
        {
            string result = "";
            for (int i = 0; i < str.length(); i++)
            {
                result += str.substr(0, i + 1);
            }
            return result;
        }
        
int main() 
 {
  cout << test("abcd") << endl;  
  cout << test("abc") << endl;  
  cout << test("a") << endl;  
  return 0;    
} 

// 30. Write a C++ program to count a substring of length 2 appears in a given string and also as the last 2 characters of the string. Do not count the end substring. 
// Sample Input:
// "abcdsab"
// "abcdabab"
// "abcabdabab"
// "abcabd"
// Sample Output:
// 1
// 2
// 3
// 0

#include <iostream>
using namespace std;

int test(string str)
        {
            string last_two_char = str.substr(str.length()-2);
            int ctr = 0;

            for (int i = 0; i < str.length()-2; i++)
            {
               if (str.substr(i, 2) == (last_two_char)) ctr++;
            }
            return ctr;
        }
        
int main() 
 {
  cout << test("abcdsab") << endl;  
  cout << test("abcdabab") << endl;  
  cout << test("abcabdabab") << endl;  
  cout << test("abcabd") << endl;  
  return 0;    
}

// 31. Write a C++ program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere. 
// Sample Input:
// {1,1,2,3,1}
// {1,1,2,4,1}
// {1,1,2,1,2,3}
// Sample Output:
// 1
// 0
// 1


// 32. Write a C++ program to compare two given strings and return the number of the positions where they contain the same length 2 substring. 
// Sample Input:
// "abcdefgh", "abijsklm"
// "abcde", "osuefrcd"
// "pqrstuvwx", "pqkdiewx"
// Sample Output:
// 1
// 1
// 2


// 33. Create a new string from a give string where a specified character have been removed except starting and ending position of the given string. 
// Sample Input:
// "xxHxix", "x"
// "abxdddca", "a"
// "xabjbhtrb", "b"
// Sample Output:
// xHix
// abxdddca
// xajhtrb


// 34. Write a C++ program to create a new string of the characters at indexes 0,1, 4,5, 8,9 ... from a given string. 
// Sample Input:
// "Python"
// "JavaScript"
// "HTML"
// Sample Output:
// Pyon
// JaScpt
// HT


// 35. Write a C++ program to count the number of two 5's are next to each other in an array of integers. Also count the situation where the second 5 is actually a 6. 
// Sample Input:
// { 5, 5, 2 }
// { 5, 5, 2, 5, 5 }
// { 5, 6, 2, 9}
// Sample Output:
// 1
// 2
// 1


// 36. Write a C++ program to check if a triple is presents in an array of integers or not. If a value appears three times in a row in an array it is called a triple. 
// Sample Input:
// { 1, 1, 2, 2, 1 }
// { 1, 1, 2, 1, 2, 3 }
// { 1, 1, 1, 2, 2, 2, 1 }
// Sample Output:
// 0
// 0
// 1


// 37. Write a C++ program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30. 
// Sample Input:
// 12, 17
// 2, 17
// 22, 17
// 20, 0
// Sample Output:
// 29
// 30
// 39
// 30


// 38. Write a C++ program that accept two integers and return true if either one is 5 or their sum or difference is 5. 
// Sample Input:
// 5, 4
// 4, 3
// 1, 4
// Sample Output:
// 1
// 0
// 1


// 39. Write a C++ program to test if a given non-negative number is a multiple of 13 or it is one more than a multiple of 13. 
// Sample Input:
// 13
// 14
// 27
// 41
// Sample Output:
// 1
// 1
// 1
// 0


// 40. Write a C++ program to check if a given non-negative given number is a multiple of 3 or 7, but not both. 
// Sample Input:
// 3
// 7
// 21
// Sample Output:
// 1
// 1
// 0


// 41. Write a C++ program to check if a given number is within 2 of a multiple of 10. 
// Sample Input:
// 3
// 7
// 8
// 21
// Sample Output:
// 0
// 0
// 1
// 1


// 42. Write a C++ program to compute the sum of the two given integers. If one of the given integer value is in the range 10..20 inclusive return 18. 
// Sample Input:
// 3, 7
// 10, 11
// 10, 20
// 21, 220
// Sample Output:
// 10
// 18
// 18
// 241


// 43. Write a C++ program to check whether a given string starts with "F" or ends with "B". If the string starts with "F" return "Fizz" and return "Buzz" if it ends with "B" If the string starts with "F" and ends with "B" return "FizzBuzz". In other cases return the original string. 
// Sample Input:
// "FizzBuzz "
// "Fizz"
// "Buzz"
// "Founder"
// Sample Output:
// FizzBuzz
// Fizz
// Buzz
// Founder


// 44. Write a C++ program to check if it is possible to add two integers to get the third integer from three given integers. 
// Sample Input:
// 1, 2, 3
// 4, 5, 6
// -1, 1, 0
// Sample Output:
// 1
// 0
// 1


// 45. Write a C++ program to check if y is greater than x, and z is greater than y from three given integers x,y,z. 
// Sample Input:
// 1, 2, 3
// 4, 5, 6
// -1, 1, 0
// Sample Output:
// 1
// 1
// 0


// 46. Write a C++ program to check if three given numbers are in strict increasing order, such as 4 7 15, or 45, 56, 67, but not 4 ,5, 8 or 6, 6, 8.However,if a fourth parameter is true, equality is allowed, such as 6, 6, 8 or 7, 7, 7. 
// Sample Input:
// 1, 2, 3, false
// 1, 2, 3, true
// 10, 2, 30, false
// 10, 10, 30, true
// Sample Output:
// 1
// 1
// 0
// 1


// 47. Write a C++ program to check if two or more non-negative given integers have the same rightmost digit. 
// Sample Input:
// 11, 21, 31
// 11, 22, 31
// 11, 22, 33
// Sample Output:
// 1
// 1
// 0


// 48. Write a C++ program to check three given integers and return true if one of them is 20 or more less than one of the others. 
// Sample Input:
// 11, 21, 31
// 11, 22, 31
// 10, 20, 15
// Sample Output:
// 1
// 1
// 0


// 49. Write a C++ program to find the larger from two given integers. However if the two integers have the same remainder when divided by 7, then the return the smaller integer. If the two integers are the same, return 0. 
// Sample Input:
// 11, 21
// 11, 20
// 10, 10
// Sample Output:
// 21
// 20
// 0


// 50. Write a C++ program to check two given integers, each in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33. 
// Sample Input:
// 11, 21
// 11, 20
// 10, 10
// Sample Output:
// 1
// 0
// 1


// 51. Write a C++ program to compute the sum of two given non-negative integers x and y as long as the sum has the same number of digits as x. If the sum has more digits than x then return x without y. 
// Sample Input:
// 4, 5
// 7, 4
// 10, 10
// Sample Output:
// 9
// 7
// 20


// 52. Write a C++ program to compute the sum of three given integers. If the two values are same return the third value. 
// Sample Input:
// 4, 5, 7
// 7, 4, 12
// 10, 10, 12
// 12, 12, 18
// Sample Output:
// 16
// 23
// 12
// 18


// 53. Write a C++ program to compute the sum of the three integers. If one of the values is 13 then do not count it and its right towards the sum. 
// Sample Input:
// 4, 5, 7
// 7, 4, 12
// 10, 13, 12
// 13, 12, 18
// Sample Output:
// 16
// 23
// 10
// 0


// 54. Write a C++ program to compute the sum of the three given integers. However, if any of the values is in the range 10..20 inclusive then that value counts as 0, except 13 and 17. 
// Sample Input:
// 4, 5, 7
// 7, 4, 12
// 10, 13, 12
// 17, 12, 18
// Sample Output:
// 16
// 11
// 13
// 17


// 55. Write a C++ program to check two given integers and return the value whichever value is nearest to 13 without going over. Return 0 if both numbers go over. 
// Sample Input:
// 4, 5
// 7, 12
// 10, 13
// 17, 33
// Sample Output:
// 5
// 12
// 13
// 0


// 56. Write a C++ program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is same. 
// Sample Input:
// 4, 5, 6
// 7, 12, 13
// -1, 0, 1
// Sample Output:
// 1
// 0
// 1


// 57. Write a C++ program to create a new string using two given strings s1, s2, the format of the new string will be s1s2s2s1. 
// Sample Input:
// "Hi", "Hello"
// "whats", "app"
// Sample Output:
// HiHelloHelloHi
// whatsappappwhats


// 58. Write a C++ program to insert a given string into middle of the another given string of length 4. 
// Sample Input:
// "[[]]","Hello"
// "(())", "Hi"
// Sample Output:
// [[Hello]]
// ((Hi))


// 59. Write a C++ program to create a new string using three copies of the last two character of a given string of length atleast two. 
// Sample Input:
// "Hello"
// "Hi"
// Sample Output:
// lololo
// HiHiHi


// 60. Write a C++ program to create a new string using first two characters of a given string. If the string length is less than 2 then return the original string. 
// Sample Input:
// "Hello"
// "Hi"
// "H"
// " "
// Sample Output:
// He
// Hi
// H


// 61. Write a C++ program to create a new string of the first half of a given string of even length. 
// Sample Input:
// "Hello"
// "Hi"
// Sample Output:
// He
// H


// 62. Write a C++ program to create a new string without the first and last character of a given string of length atleast two. 
// Sample Input:
// "Hello"
// "Hi"
// "Python"
// Sample Output:
// ell
// ytho


// 63. Write a C++ program to create a new string from two given string one is shorter and another is longer. The format of the new string will be long string + short string + long string. 
// Sample Input:
// "Hello", "Hi"
// "JS", "Python"
// Sample Output:
// HelloHiHello
// PythonJSPython


// 64. Write a C++ program to concat two given string of length atleast 1, after removing their first character. 
// Sample Input:
// "Hello", "Hi"
// "JS", "Python"
// Sample Output:
// elloi
// Sython


// 65. Write a C++ program to move the first two characters to the end of a given string of length at least two. 
// Sample Input:
// "Hello"
// "JS"
// Sample Output:
// lloHe
// JS


// 66. Write a C++ program to create a new string without the first and last character of a given string of any length. 
// Sample Input:
// "Hello"
// "JS"
// ""
// Sample Output:
// ell



// 67. Write a C++ program to create a new string using the two middle characters of a given string of even length (at least 2). 
// Sample Input:
// "Hell"
// "JS"
// Sample Output:
// el
// JS


// 68. Write a C++ program to create a new string using the first and last n characters from a given string of length at least n. 
// Sample Input:
// "Hello", 1
// "Python", 2
// "on", 1
// "o", 1
// Sample Output:
// Ho
// Pyon
// on
// oo


// 69. Write a C++ program to create a new string of length 2 starting at the given index of a given string. 
// Sample Input:
// "Hello", 1
// "Python", 2
// "on", 1
// Sample Output:
// el
// th
// on


// 70. Write a C++ program to create a new string taking 3 characters from the middle of a given string at least 3. 
// Sample Input:
// "Hello"
// "Python"
// "abc"
// Sample Output:
// ell
// yth
// abc


// 71. Write a C++ program to create a new string of length 2, using first two characters of a given string. If the given string length is less than 2 use '#' as missing characters. 
// Sample Input:
// "Hello"
// "Python"
// "a"
// ""
// Sample Output:
// He
// Py
// a#
// ##


// 72. Write a C++ program to create a new string taking the first character from a given string and the last character from another given string. If the length of any given string is 0, use '#' as its missing character. 
// Sample Input:
// "Hello", "Hi"
// "Python", "PHP"
// "JS", "JS"
// "Csharp", ""
// Sample Output:
// Hi
// PP
// JS
// C#


// 73. Write a C++ program to create a new string from a given string after swapping last two characters. 
// Sample Input:
// "Hello"
// "Python"
// "PHP"
// "JS"
// "C"
// Sample Output:
// Helol
// Pythno
// PPH
// SJ
// C


// 74. Write a C++ program to check if a given string begins with 'abc' or 'xyz'. If the string begins with 'abc' or 'xyz' return 'abc' or 'xyz' otherwise return the empty string. 
// Sample Input:
// "abc"
// "abcdef"
// "C"
// "xyz"
// "xyzsder"
// Sample Output:
// abc
// abc

// xyz
// xyz


// 75. Write a C++ program to check whether the first two characters and last two characters of a given string are same. 
// Sample Input:
// "abab"
// "abcdef"
// "xyzsderxy"
// Sample Output:
// 1
// 0
// 1


// 76. Write a C++ program to concat two given strings. If the given strings have different length remove the characters from the longer string. 
// Sample Input:
// "abc", "abcd"
// "Python", "Python"
// "JS", "Python"
// Sample Output:
// abcbcd
// PythonPython
// JSon


// 77. Write a C++ program to create a new string using 3 copies of the first 2 characters of a given string. If the length of the given string is less than 2 use the whole string. 
// Sample Input:
// "abc"
// "Python"
// "J"
// Sample Output:
// ababab
// PyPyPy
// JJJ


// 78. Write a C++ program to create a new string from a given string. If the two characters of the given string from its beginning and end are same return the given string without the first two characters otherwise return the original string. 
// Sample Input:
// "abcab"
// "Python"
// "abcabab"
// Sample Output:
// cab
// Python
// cabab


// 79. Write a C++ program to create a new string from a given string without the first and last character if the first or last characters are 'a' otherwise return the original given string. 
// Sample Input:
// "abcab"
// "python"
// "abcda"
// "jython"
// Sample Output:
// bcab
// python
// bcd
// jython


// 80. Write a C++ program to create a new string from a given string. If the first or first two characters is 'a', return the string without those 'a' characters otherwise return the original given string. 
// Sample Input:
// "abcab"
// "python"
// "aacda"
// "jython"
// Sample Output:
// bcab
// python
// cda
// jython


// 81. Write a C++ program to check a given array of integers of length 1 or more and return true if 10 appears as either first or last element in the given array. 
// Sample Input:
// { 10, 20, 40, 50 }
// { 5, 20, 40, 10 }
// { 10, 20, 40, 10 }
// { 12, 24, 35, 55 }
// Sample Output:
// 1
// 1
// 1
// 0


// 82. Write a C++ program to check a given array of integers of length 1 or more and return true if the first element and the last element are equal in the given array. 
// Sample Input:
// { 10, 20, 40, 50 }
// { 10, 20, 40, 10 }
// { 12, 24, 35, 55 }
// Sample Output:
// 0
// 1
// 0


// 83. Write a C++ program to check two given arrays of integers of length 1 or more and return true if they have the same first element or they have the same last element. 
// Sample Input:
// { 10, 20, 40, 50 }, { 10, 20, 40, 50 }
// { 10, 20, 40, 50 }, { 10, 20, 40, 5 }
// { 10, 20, 40, 50 }, { 1, 20, 40, 5 }
// Sample Output:
// 1
// 1
// 0


// 84. Write a C++ program to compute the sum of the elements of an given array of integers. 
// Sample Input:
// { 10, 20, 30, 40, 50 }
// { 10, 20, -30, -40, 50 }
// Sample Output:
// 150
// 10


// 85. Write a C++ program to rotate the elements of a given array of integers (length 4 ) in left direction and return the new array. 
// Sample Input:
// { 10, 20, 30, 40 }
// Sample Output:
// Rotated array:
// 20 30 40 10


// 86. Write a C++ program to reverse a given array of integers and length 5. 
// Sample Input:
// { 0, 10, 20, 30, 40 }
// Sample Output:
// Reverse array:
// 40 30 20 10 0


// 87. Write a C++ program to create a new array containing the middle elements from the two given arrays of integers, each length 5. 
// Sample Input:
// {0, 10, 20, 30, 40}
// {0, -10, -20, -30, -40}
// Sample Output:
// New array:
// 20 -20


// 88. Write a C++ program to create a new array taking the first and last elements of a given array of integers and length 1 or more. 
// Sample Input:
// { 10, 20, -30, -40, 30 }
// Sample Output:
// New array:
// 10 30


// 89. Write a C++ program to check if a given array of integers and length 2, contains 15 or 20. 
// Sample Input:
// { 12, 20 }
// { 14, 15 }
// { 11, 21 }
// Sample Output:
// 1
// 1
// 0


// 90. Write a C++ program to check if a given array of integers and length 2, does not contain 15 or 20. 
// Sample Input:
// { 12, 20 }
// { 14, 15 }
// { 11, 21 }
// Sample Output:
// 0
// 0
// 1


// 91. Write a C++ program to check a given array of integers and return true if the array contains 10 or 20 twice. The length of the array will be 0, 1, or 2. 
// Sample Input:
// { 12, 20 }
// { 20, 20 }
// { 10, 10 }
// { 10 }
// Sample Output:
// 0
// 1
// 1
// 0


// 92. Write a C++ program to check a given array of integers, length 3 and create a new array. If there is a 5 in the given array immediately followed by a 7 then set 7 to 1. 
// Sample Input:
// { 1, 5, 7 }
// { 1, 5, 3, 7 }
// Sample Output:
// New array:
// 1 5 1
// New array:
// 1 5 3 7


// 93. Write a C++ program to compute the sum of the two given arrays of integers, length 3 and find the array which has the largest sum. 
// Sample Input:
// { 1, 5, 7 }
// { 1, 5, 3 }
// Sample Output:
// New array:
// 1 5 7


// 94. Write a C++ program to create an array taking two middle elements from a given array of integers of length even. 
// Sample Input:
// { 1, 5, 7, 9, 11, 13 }
// Sample Output:
// New array:
// 7 9


// 95. Write a C++ program to create a new array swapping the first and last elements of a given array of integers and length will be least 1. 
// Sample Input:
// { 1, 5, 7, 9, 11, 13 }
// Sample Output:
// New array (after swapping the first and last elements of the said array):
// 13 5 7 9 11 1


// 96. Write a C++ program to create a new array length 3 from a given array (length atleast 3) using the elements from the middle of the array. 
// Sample Input:
// { 1, 5, 7, 9, 11, 13 }
// Sample Output:
// New array:
// 7 9 11


// 97. Write a C++ program to find the largest value from first, last, and middle elements of a given array of integers of odd length (atleast 1). 
// Sample Input:
// {1}
// {1,2,9}
// {1,2,9,3,3}
// {1,2,3,4,5,6,7}
// {1,2,2,3,7,8,9,10,6,5,4}
// Sample Output:
// 1
// 9
// 9
// 7
// 8


// 98. Write a C++ program to count even number of elements in a given array of integers. 
// Sample Input:
// { 1, 5, 7, 9, 10, 12 }
// {0, 2, 4, 6, 8, 10}
// Sample Output:
// 2
// 6


// 99. Write a C++ program to compute the difference between the largest and smallest values in a given array of integers and length one or more. 
// Sample Input:
// { 1, 5, 7, 9, 10, 12}
// {0, 2, 4, 6, 8, 10}
// Sample Output:
// 11
// 10


// 100. Write a C++ program to compute the sum of values in a given array of integers except the number 17. Return 0 if the given array has no integer. 
// Sample Input:
// { 1, 5, 7, 9, 10, 17 }
// Sample Output:
// Sum of values in the array of integers except the number 17:
// 32


// 101. Write a C++ program to compute the sum of the numbers in a given array except those numbers starting with 5 followed by atleast one 6. Return 0 if the given array has no integer. 
// Sample Input:
// { 1, 5, 9, 10, 17 }
// { 1, 5, 6, 9, 10, 17 }
// Sample Output:
// Sum of the numbers of the said array except those numbers starting with 5 followed by atleast one 6:
// 42
// Sum of the numbers of the said array except those numbers starting with 5 followed by atleast one 6:
// 37


// 102. Write a C++ program to check if a given array of integers contains 5 next to a 5 somewhere. 
// Sample Input:
// { 1, 5, 6, 9, 10, 17 }
// { 1, 5, 5, 9, 10, 17 }
// { 1, 5, 5, 9, 10, 17, 5, 5 }
// Sample Output:
// 0
// 1
// 1


// 103. Write a C++ program to check whether a given array of integers contains 5's and 7's. 
// Sample Input:
// { 1, 5, 6, 9, 10, 17 }
// { 1, 4, 7, 9, 10, 17 }
// { 1, 1, 2, 9, 10, 17}
// Sample Output:
// 1
// 1
// 0


// 104. Write a C++ program to check if the sum of all 5' in the array exactly 15 in a given array of integers. 
// Sample Input:
// { 1, 5, 6, 9, 10, 17 }
// { 1, 5, 5, 5, 10, 17 }
// { 1, 1, 5, 5, 5, 5}
// Sample Output:
// 0
// 1
// 0


// 105. Write a C++ program to check if the number of 3's is greater than the number of 5's. 
// Sample Input:
// { 1, 5, 6, 9, 3, 3 }
// { 1, 5, 5, 5, 10, 17 }
// { 1, 3, 3, 5, 5, 5}
// Sample Output:
// 1
// 0
// 0


// 106. Write a C++ program to check if a given array of integers contains a 3 or a 5. 
// Sample Input:
// { 5, 5, 5, 5, 5 }
// { 3, 3, 3, 3 }
// { 3, 3, 3, 5, 5, 5}
// { 1, 6, 8, 10}
// Sample Output:
// 1
// 1
// 1
// 0


// 107. Write a C++ program to check if a given array of integers contains no 3 or a 5. 
// Sample Input:
// { 5, 5, 5, 5, 5 }
// { 3, 3, 3, 3 }
// { 3, 3, 3, 5, 5, 5}
// { 1, 6, 8, 10}
// Sample Output:
// 1
// 1
// 0
// 1


// 108. Write a C++ program to check if an array of integers contains a 3 next to a 3 or a 5 next to a 5 or both. 
// Sample Input:
// { 5, 5, 5, 5, 5 }
// { 1, 2, 3, 4 }
// { 3, 3, 5, 5, 5, 5}
// { 1, 5, 5, 7, 8, 10}
// Sample Output:
// 1
// 0
// 1
// 1


// 109. Write a C++ program to check a given array of integers and return true if the given array contains two 5's next to each other, or two 5 separated by one element. 
// Sample Input:
// { 5, 5, 1, 5, 5 }
// { 1, 2, 3, 4 }
// { 3, 3, 5, 5, 5, 5}
// { 1, 5, 5, 7, 8, 10}
// Sample Output:
// 1
// 0
// 1
// 1


// 110. Write a C++ program to check a given array of integers and return true if there is a 3 with a 5 somewhere later in the given array. 
// Sample Input:
// { 3, 5, 1, 3, 7 }
// { 1, 2, 3, 4 }
// { 3, 3, 5, 5, 5, 5}
// { 2, 5, 5, 7, 8, 10}
// Sample Output:
// 1
// 0
// 1
// 0


// 111. Write a C++ program to check a given array of integers and return true if the given array contains either 2 even or 2 odd values all next to each other. 
// Sample Input:
// { 3, 5, 1, 3, 7 }
// { 1, 2, 3, 4 }
// { 3, 3, 5, 5, 5, 5}
// { 2, 4, 5, 6}
// Sample Output:
// 1
// 0
// 1
// 1


// 112. Write a C++ program to check a given array of integers and return true if the value 5 appears 5 times and there are no 5 next to each other. 
// Sample Input:
// { 3, 5, 1, 5, 3, 5, 7, 5, 1, 5 }
// { 3, 5, 5, 5, 5, 5, 5}
// { 3, 5, 2, 5, 4, 5, 7, 5, 8, 5}
// { 2, 4, 5, 5, 5, 5}
// Sample Output:
// 1
// 0
// 1
// 0


// 113. Write a C++ program to check a given array of integers and return true if every 5 that appears in the given array is next to another 5. 
// Sample Input:
// { 3, 5, 5, 3, 7 }
// { 3, 5, 5, 4, 1, 5, 7}
// { 3, 5, 5, 5, 5, 5}
// { 2, 4, 5, 5, 6, 7, 5}
// Sample Output:
// 1
// 0
// 1
// 0


// 114. Write a C++ program to check a given array of integers and return true if the specified number of same elements appears at the start and end of the given array. 
// Sample Input:
// { 3, 7, 5, 5, 3, 7 }, 2
// { 3, 7, 5, 5, 3, 7 }, 3
// { 3, 7, 5, 5, 3, 7, 5 }, 3
// Sample Output:
// 1
// 0
// 1


// 115. Write a C++ program to check a given array of integers and return true if the array contains three increasing adjacent numbers. 
// Sample Input:
// { 1, 2, 3, 5, 3, 7 }
// { 3, 7, 5, 5, 3, 7 }
// { 3, 7, 5, 5, 6, 7, 5 }
// Sample Output:
// 1
// 0
// 1


// 116. Write a C++ program to check if the value of each element is equal or greater than the value of previous element of a given array of integers. 
// Sample Input:
// { 5, 5, 1, 5, 5 }
// { 1, 2, 3, 4 }
// { 3, 3, 5, 5, 5, 5}
// { 1, 5, 5, 7, 8, 10}
// Sample Output:
// 0
// 1
// 1
// 1


// 117. Write a C++ program to check a given array (length will be atleast 2) of integers and return true if there are two values 15, 15 next to each other. 
// Sample Input:
// { 5, 5, 1, 15, 15 }
// { 15, 2, 3, 4, 15 }
// { 3, 3, 15, 15, 5, 5}
// { 1, 5, 15, 7, 8, 15}
// Sample Output:
// 1
// 0
// 1
// 0