// 1. Write a C++ program to check whether a given number is a power of two or not. 
// Is 8 is power of 2: True
// Is 256 is power of 2: True
// Is 124 is power of 2: False

#include <iostream>
#include <cmath>
using namespace std;
string Powers_of_Two(int n) {

	for (int x = 0; x < INT_MAX; x++)
	{
		if (pow(2, x) == n)
		{
			return "True";
		}
		else if (pow(2, x) > n)
		{
			break;
		}
	}

	return "False";
}
int main() {
	cout << "Is 8 is power of 2: " << Powers_of_Two(8) << endl;
	cout << "Is 256 is power of 2: " << Powers_of_Two(256) << endl;
	cout << "Is 124 is power of 2: " << Powers_of_Two(124) << endl;
	return 0;
}

// 2. Write a C++ program to check the additive persistence of a given number. 
// Additive Persistence
// Consider the process of taking a number, adding its digits, then adding the digits of the number derived from it, etc., until the remaining number has only one digit. The number of additions required to obtain a single digit from a number n is called the additive persistence of n, and the digit obtained is called the digital root of n.
// For example, the sequence obtained from the starting number 9876 is (9876, 30, 3), so 9876 has an additive persistence of 2 and a digital root of 3. The additive persistences of the first few positive integers are 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, ... (OEIS A031286). The smallest numbers of additive persistence n for n=0, 1, ... are 0, 10, 19, 199, 19999999999999999999999, ... (OEIS A006050).
// Source: https://mathworld.wolfram.com/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int AdditivePersistence(int num) {

	int ctr = 0;

	if (num < 10)
	{
		return 0;
	}

	stringstream convert;
	convert << num;
	string y = convert.str();
	int total_num, n;
	
	do
	{
		total_num = 0;
		ctr++; 

		for (int x = 0; x < y.length(); x++)
		{
			n = int(y[x]) - 48;
			total_num += n;
		}

		stringstream convert;
		convert << total_num;
		y = convert.str();
	} while (total_num >= 10);
	
	return ctr;
}

int main() {

	cout << "Additive persistence of 4 is " << AdditivePersistence(4) << endl;
	cout << "\nAdditive persistence of 125 is " << AdditivePersistence(125) << endl;
	cout << "\nAdditive persistence of 5489 is " << AdditivePersistence(5489) << endl;
	cout << "\nAdditive persistence of 36024 is " << AdditivePersistence(36024) << endl;
	return 0;
}

// 3. Write a C++ program to reverse the digits of a given integer. 
// Sample Input: 4
// Sample Output: 4

// Sample Input: 123
// Sample Output: 321

#include <iostream>
using namespace std;

    int reverse_int(int x) {
        
        int res = 0;
        while(x != 0)
        {
            int pop = x % 10;
            x = x / 10;

            int candidate = res * 10 + pop;

            if (candidate / 10 != res)
            {
                return 0;
            }

            res = candidate;            
        }

        return res;
    }

int main() {

	cout << "Reverse of 4 is " << reverse_int(4) << endl;
	cout << "Reverse of 123 is " << reverse_int(123) << endl;
	cout << "Reverse of 208478933 is " << reverse_int(208478933) << endl;
	cout << "Reverse of -73634 is " << reverse_int(-73634) << endl;

	return 0;
}

// 4. Write a C++ program to divide two integers (dividend and divisor) without using multiplication, division and mod operator. 
// Dividend 7 Divisor 2
// Result: 3
// Dividend -17 Divisor 5
// Result: -3

#include <iostream>
using namespace std;
int divide_result(int dividend_num, int divisor_num) {
       if (dividend_num == INT_MIN && divisor_num == -1)
       {
           return INT_MAX;
       }
       bool minus = ((dividend_num > 0) ^ (divisor_num > 0));
       long long num = labs(dividend_num);
       long long div = labs(divisor_num);
       int ans = 0;
       while (num >= div)
       {
           long long temp = div;
           long long mul = 1;
           while(num >= (temp << 1))
           {
               mul <<= 1;
               temp <<= 1;
           }
           ans += mul;
           num -= temp;
       }
       return minus ? -ans: ans;
   }
int main(void)
{
   int dividend_num = 7;
   int divisor_num = 2;
   cout << "\nDividend " << dividend_num << " Divisor " << divisor_num << endl;
   cout << "Result: " << divide_result(dividend_num, divisor_num) << endl;
   dividend_num = -17;
   divisor_num = 5;
   cout << "\nDividend " << dividend_num << " Divisor " << divisor_num << endl;
   cout << "Result: " << divide_result(dividend_num, divisor_num) << endl;
   dividend_num = 35;
   divisor_num = 7;
   cout << "\nDividend " << dividend_num << " Divisor " << divisor_num << endl;
   cout << "Result: " << divide_result(dividend_num, divisor_num) << endl;
   return 0;
}

// 5. Write a C++ program to calculate x raised to the power n (xn). 
// Sample Input: x = 7.0
// n = 2
// Sample Output: 49

#include <iostream>
using namespace std;

double powxn(double x, int n) {
        if (n < 0){
            x = 1 / x;
            n = -n;
        }
         
        double result = 1;
        for (auto i = 0; i < n; ++i)
        {
            result = result * x;
        }

        return result;
    }

int main(void)
{
    double x = 7.0;
    int n = 2;
    cout << "\n" << x << "^" << n << " = " << powxn(x, n) << endl; 
    x = 3;
    n = 9;
    cout << "\n" << x << "^" << n << " = " << powxn(x, n) << endl;     
    x = 6.2;
    n = 3;
    cout << "\n" << x << "^" << n << " = " << powxn(x, n) << endl;         
    return 0;
}

// 6. Write a C++ program to get the fraction part from two given integers representing the numerator and denominator in string format. 
// Sample Input: x = 3
// n = 2
// Sample Output: 1.5

#include <iostream>
#include <unordered_map> 
using namespace std;

    string fraction_to_decimal(int numerator_part, int denominator_part) {
        string result;
        if ((numerator_part ^ denominator_part) >> 31 && numerator_part != 0) {
            result = "-";
        }

        auto dvd_part = llabs(numerator_part);
        auto dvs_part = llabs(denominator_part);
        result += to_string(dvd_part / dvs_part);
        dvd_part %= dvs_part;
        if (dvd_part > 0) {
            result += ".";
        }
        
        unordered_map<long long, int> lookup;
        while (dvd_part && !lookup.count(dvd_part)) {
            lookup[dvd_part] = result.length();
            dvd_part *= 10;
            result += to_string(dvd_part / dvs_part);
            dvd_part %= dvs_part;
        }

        if (lookup.count(dvd_part)) {
            result.insert(lookup[dvd_part], "(");
            result.push_back(')');
        }
        return result;
    }


int main(void)
{
    int x = 3;
    int n = 2;
    cout << "\nFractional part of " << x << " and " << n << " = " << fraction_to_decimal(x, n) << endl; 
    x = 4;
    n = 7;
    cout << "\nFractional part of " << x << " and " << n << " = " << fraction_to_decimal(x, n) << endl; 
    return 0;
}

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

#include <iostream>
using namespace std;

    string convert_num_to_Excel_Title(int num) {
        if (num == 0) {
            return "";
        }
        return convert_num_to_Excel_Title((num - 1) / 26) + static_cast<char>((num - 1) % 26 + 'A');
    }


int main(void)
{
    int n = 2;
    cout << "\nColumn Number n =  " << n << " Excel column title = " << convert_num_to_Excel_Title(n) << endl; 
    n = 29;
    cout << "\nColumn Number n =  " << n << " Excel column title = " << convert_num_to_Excel_Title(n) << endl; 
    n = 153;
    cout << "\nColumn Number n =  " << n << " Excel column title = " << convert_num_to_Excel_Title(n) << endl; 
    return 0;
}

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

#include <iostream>
using namespace std;
    int excel_title_to_Number(string s) {
    int number = 0;
        for (const auto& c : s) {
            number *= 26;
            number += c  - 'A' + 1;
        }
        return number;
    }

int main(void)
{
    string col_title1 ="C";
    cout << "\nExcel column title = " << col_title1 << ", Corresponding number = " << excel_title_to_Number(col_title1) << endl; 
    col_title1 ="AD";
    cout << "\nExcel column title = " << col_title1 << ", Corresponding number = " << excel_title_to_Number(col_title1) << endl; 
    col_title1 ="WX";
    cout << "\nExcel column title = " << col_title1 << ", Corresponding number = " << excel_title_to_Number(col_title1) << endl; 
 
    return 0;
}

// 9. Write a C++ program to find the number of trailing zeroes in a given factorial. 
// Sample Input: n = 4
// Sample Output: 0
// Sample Input: n = 6
// Sample Output: 1

#include <iostream>
using namespace std;

int trailing_Zeroes(int n) {
        int number = 0;
        while (n > 0) {
            number += n / 5;
            n /= 5;
        }
        return number;
    }

int main(void)
{
    int n = 4;
    cout << "\nNumber of trailing zeroes of factorial " << n << " = " << trailing_Zeroes(n) << endl; 
    n = 6;
    cout << "\nNumber of trailing zeroes of factorial " << n << " = " << trailing_Zeroes(n) << endl;     
    n = 7;
    cout << "\nNumber of trailing zeroes of factorial " << n << " = " << trailing_Zeroes(n) << endl;  
    n = 10;
    cout << "\nNumber of trailing zeroes of factorial " << n << " = " << trailing_Zeroes(n) << endl; 
    return 0;   
}

// 10. Write a C++ program to count the total number of digit 1 appearing in all positive integers less than or equal to a given integer n. 
// Example:
// Sample Input: n = 12,
// Sample Output: 5
// Return 5, because digit 1 occurred 5 times in the following numbers: 1, 10, 11, 12.

#include <iostream>
using namespace std;

int count_DigitOne(int num) {
        int m = 0, k = 0, result = 0, base = 1;
        while (num > 0) {
            k = num % 10;
            num = num / 10;

            if (k > 1) { result += (num+1)*base; }
            else if (k < 1) { result += num*base; }
            else { result += num*base+m+1; }

            m += k*base;
            base *= 10;
        }
        return result;
    }

int main(void)
{
    int n = 6;
    cout << "\nTotal number of digit 1 appearing in " << n << " (less than or equal) is " << count_DigitOne(n) << endl; 
    n = 15;
    cout << "\nTotal number of digit 1 appearing in " << n << " (less than or equal) is " << count_DigitOne(n) << endl;
    n = 100;
    cout << "\nTotal number of digit 1 appearing in " << n << " (less than or equal) is " << count_DigitOne(n) << endl;
    return 0;   
}

// 11. Write a C++ programming to add repeatedly all digits of a given non-negative number until the result has only one digit. 
// Example:
// Sample Input: 58
// Sample Output: 4
// Explanation: The formula is like: 5 + 8 = 13, 1 + 3 = 4.

#include <iostream>
using namespace std;

int addDigits(int num) {
        return num - (num - 1) / 9 * 9;
    }

int main(void)
{
    int n = 15;
    cout << "\nInitial number is "<< n << " single digit number is " << addDigits(n) << endl; 
    n = 57;
    cout << "\nInitial number is "<< n << " single digit number is " << addDigits(n) << endl; 
    return 0;   
}

// 12. Write a C++ programming to check if a given integer is a power of three or not. 
// Sample Input: 9
// Sample Output: true
// Sample Input: 15
// Sample Output: False

#include <iostream>
using namespace std;

string is_PowerOf_Three(int n) {
        while (n % 3 == 0) {
            n = n / 3;
        }

        if (1 == n) {
            return "True";
        } else {
            return "False";
        }
    }

int main(void)
{
    int n = 15;
    cout << "\nIf " << n << " is power of three? " << is_PowerOf_Three(n) << endl; 
    n = 9;
    cout << "\nIf " << n << " is power of three? " << is_PowerOf_Three(n) << endl; 
    n = 243;
	cout << "\nIf " << n << " is power of three? " << is_PowerOf_Three(n) << endl; 
    return 0;   
}

// 13. For a non negative integer in the range 0 = i = n write a C++ programming to calculate the number of 1's in their binary representation and return them as an array. 
// Original number: 4
// 0 1 1 2 1
// Original number: 7
// 0 1 1 2 1 2 2 3

#include <iostream>
#include <vector>
using namespace std;

vector countBits(int num) {
    	vector res;
        for (int i = 0; i <= num; ++i) {
            res.push_back(0);
        }

        for (int i = 1; i <= num; ++i) {
            res[i] = res[i / 2] + i % 2;
        }

        return res;
    }
    
int main()
{
    int n = 4;
    vector result;
	cout << "Original number: " << n << endl; 
	result = countBits(n);
	for (int x : result) 
        cout << x << " "; 
    n = 7;    
	cout << "\nOriginal number: " << n << endl; 
	result = countBits(n);
	for (int x : result) 
        cout << x << " ";   
    return 0;
}

// 14. Write a C++ programming to get the maximum product from a given integer after breaking the integer into the sum of at least two positive integers. 
// Sample Input: 12
// Sample Output: 81
// Explanation: 12 = 3 + 3 + 3 + 3, 3 x 3 x 3 x 3 = 81.
// Sample Input: 7
// Sample Output: 12
// Explanation: 7 = 3 + 2 + 2, 3 x 2 x 2 = 12.

#include <iostream>
#include <cmath>
using namespace std;

int integer_Break(int n) {
            if (n == 2) {
                return 1;
            } else if (n == 3) {
                return 2;
            } else if (n % 3 == 0) {
                return (int) pow(3, n / 3);
            } else if (n % 3 == 1) {
                return 2 * 2 * (int) pow(3, (n - 4) / 3);
            } else {
                return 2 * (int) pow(3, n / 3);
            }
        }
   
int main()
{
    int n = 7;
    cout << "\nMaximum product of " << n << " after breaking the integer is " << integer_Break(n) << endl;
    n = 9;
    cout << "\nMaximum product of " << n << " after breaking the integer is " << integer_Break(n) << endl;
    n = 12;
    cout << "\nMaximum product of " << n << " after breaking the integer is " << integer_Break(n) << endl; 
    return 0;
}

// 15. Write a C++ programming to find the nth digit of number 1 to n?. 
// Infinite integer sequence: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 .. where n is a positive integer.
// Input: 7
// Output: 7
// Input: 12
// Output: 1
// The 12th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is 1, which is part of the number 11.

#include <iostream>
#include <cmath>
using namespace std;

    int find_Nth_Digit(int n) {
        int digit_length = 1;
        while (n > digit_length * 9 * pow(10, digit_length - 1)) {
            n -= digit_length * 9 * pow(10, digit_length - 1);
            ++digit_length;
        }

        const int num = pow(10, digit_length - 1) + (n - 1) / digit_length;

        int result = num / pow(10, (digit_length - 1) - (n - 1) % digit_length);
        
		result %= 10;

        return result;
    }
   
int main()
{
    int n = 7;
    cout << "\n " <<  n << "th digit of the infinite integer sequence is " << find_Nth_Digit(n) << endl;
    n = 13;
    cout << "\n " <<  n << "th digit of the infinite integer sequence is " << find_Nth_Digit(n) << endl;    
    return 0;
}

// 16. Write a C++ program to find the square root of a number using Babylonian method. 
// Sample Input: n = 50
// Sample Output: 7.07107
// Sample Input: n = 81
// Sample Output: 9

#include <iostream>

using namespace std; 

float square_Root(float num) 
    { 
        float x = num; 
        float y = 1; 
        float e = 0.000001;
        while (x - y > e) { 
            x = (x + y) / 2; 
            y = num / x; 
        } 
        return x; 
    } 
  
int main() 
{ 
    int n = 50; 
    cout << "Square root of " << n << " is " << square_Root(n); 
    n = 81; 
    cout << "\nSquare root of " << n << " is " << square_Root(n);     
    return 0;
}


// 17. Write a C++ program to multiply two integers without using multiplication, division, bitwise operators, and loops. 
// Sample Input: 8, 9
// Sample Output: 72

// Input: -11, 19
// Output: -209

#include <iostream>
  
using namespace std; 
int multiply_two_nums(int x, int y) 
{ 
    if(y == 0) 
    return 0; 
  
    if(y > 0 ) 
    return (x + multiply_two_nums(x, y-1 )); 
  
    if(y < 0 ) 
    return - multiply_two_nums(x, -y); 
}

int main() 
{ 
    cout << multiply_two_nums(8, 9) << endl; 
    cout << multiply_two_nums(-11, 19) << endl ;
    return 0; 
} 

// 18. Write a C++ program to convert a given integer to a roman numeral. 
// From Wikipedia:
// Roman numerals are a numeral system that originated in ancient Rome and remained the usual way of writing numbers throughout Europe well into the Late Middle Ages. Numbers in this system are represented by combinations of letters from the Latin alphabet. Modern usage employs seven symbols, each with a fixed integer value:[1]
// CPP Math exercises: Convert a given integer to a roman numeral
// Sample Input: n = 7
// Sample Output: Roman VII

// Input: n = 19
// Output: Roman XIX

#include <iostream>
  
using namespace std; 

    string integer_to_Roman(int n) {

        string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        string result = "";

        for (auto int i = 0; i < 13; ++i)
        {
            while(n - values[i] >= 0)
            {
                result += str_romans[i];
                n -= values[i];
            }
        }

        return result;
    }

  
int main()  
{  
    int n = 7;
	cout << "Integer " << n << " : Roman " << integer_to_Roman(7) << endl;
	n = 19;
	cout << "Integer " << n << " : Roman " << integer_to_Roman(19) << endl;
	n = 789;
	cout << "Integer " << n << " : Roman " << integer_to_Roman(789) << endl;
	n = 1099;
	cout << "Integer " << n << " : Roman " << integer_to_Roman(1099) << endl;
	n = 23456;
	cout << "Integer " << n << " : Roman " << integer_to_Roman(23456) << endl;			
    return 0;  
}  

// 19. Write a C++ program to convert a given roman numeral to a integer. 
// Sample Input: n = VII
// Sample Output: Integer 7

// Input: n = XIX
// Output: Integer 19

#include <iostream>
  
using namespace std; 

    int roman_to_integer(string rstr) {
        int n = int(rstr.length());
        if (0 == n) {
            return 0;
        }

        int result = 0;
        for (int i = 0; i < n; i++) {
            switch (rstr[i]) {
                case 'I':
                    result += 1;
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'X':
                    result += 10;
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'C':
                    result += 100;
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'M':
                    result += 1000;
                    break;
            }
        }

        for (int i = 1; i < n; i++) {
            if ((rstr[i] == 'V' || rstr[i] == 'X') && rstr[i - 1] == 'I') {
                result -= 1 + 1;
            }

            if ((rstr[i] == 'L' || rstr[i] == 'C') && rstr[i - 1] == 'X') {
                result -= 10 + 10;
            }

            if ((rstr[i] == 'D' || rstr[i] == 'M') && rstr[i - 1] == 'C') {
                result -= 100 + 100;
            }
        }
        return result;
    }

  
int main()  
{  
    string s = "VII";
	cout << "Roman " << s << " -> Integer " << roman_to_integer(s) << endl;
    s = "XIX";
	cout << "Roman " << s << " -> Integer " << roman_to_integer(s) << endl;  
    s = "DCCLXXXIX";
	cout << "Roman " << s << " -> Integer " << roman_to_integer(s) << endl;   
    s = "MXCIX";
	cout << "Roman " << s << " -> Integer " << roman_to_integer(s) << endl; 
    s = "MMMMMMMMMMMMMMMMMMMMMMMCDLVI";
	cout << "Roman " << s << " -> Integer " << roman_to_integer(s) << endl;

    return 0;  
}  

// 20. Write a C++ program to calculate the product of two positive integers represented as strings. Return the result as a string. 
// Sample Input: sn1 = "12"
// sn2 = "5"
// Sample Output: 12 X 5 = 60

// Sample Input: sn1 = "48"
// sn2 = "85"
// Sample Output: 48 X 85 = 4080

#include <iostream>
#include <algorithm>
#include <vector> 
#include <functional>

using namespace std; 
  
string multiply(string sn1, string sn2) {
        const auto char_to_int = [](const char c) { return c - '0'; };
        const auto int_to_char = [](const int i) { return i + '0'; };

        vector<int> n1;
        transform(sn1.rbegin(), sn1.rend(), back_inserter(n1), char_to_int);
        vector<int> n2;
        transform(sn2.rbegin(), sn2.rend(), back_inserter(n2), char_to_int);

        vector<int> temp(n1.size() + n2.size());
        for(int i = 0; i < n1.size(); ++i) {
            for(int j = 0; j < n2.size(); ++j) {
                temp[i + j] += n1[i] * n2[j];
                temp[i + j + 1] += temp[i + j] / 10;
                temp[i + j] %= 10;
            }
        }
            
        string result;
        transform(find_if(temp.rbegin(), prev(temp.rend()),
                         [](const int i) { return i != 0; }),
                  temp.rend(), back_inserter(result), int_to_char);
        return result;
    }
  
int main()  
{  
    string sn1 = "12";
    string sn2 = "5";    
	cout << sn1 <<" X " << sn2 << " = " << multiply(sn1, sn2) << endl;
    sn1 = "48";
    sn2 = "85";    
	cout << sn1 <<" X " << sn2 << " = " << multiply(sn1, sn2) << endl;	    
    return 0;  
}  

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

#include <iostream>

using namespace std;

bool isNumber(string str_num) {
    int i=0;
    int str_len = str_num.size();
    while (i<str_len && str_num[i]==' ')
        i++;
    if (i<str_len && (str_num[i]=='+' || str_num[i]=='-'))
        i++;
    int digits=0, dots=0;
    while (i<str_len && ((str_num[i]>='0' && str_num[i]<='9')||(str_num[i]=='.'))) {
        if (str_num[i]>='0' && str_num[i]<='9')
            digits++;
        else if (str_num[i] == '.')
            dots++;
        i++;
    }
    if (digits == 0 || dots>1)
        return false;
    if (i<str_len && str_num[i]=='e') {
        if (++i<str_len && (str_num[i]=='+' || str_num[i]=='-'))
            i++;
        if (i==str_len || (str_num[i]<'0' || str_num[i]>'9'))
            return false;
        while (i<str_len && (str_num[i]>='0' && str_num[i]<='9'))
            i++;
    }
    while (i<str_len && str_num[i]==' ')  //optional trailing spaces
        i++;
    return (i==str_len); //if at end of string then success
}
int main() {
    string s = "0";
    cout << "\n Is " << s << " a  decimal number? " << isNumber(s) << endl;	    
    s = "abc 123";
    cout << "\n Is " << s << " a  decimal number? " << isNumber(s) << endl;	    
    s = "abc";
    cout << "\n Is " << s << " a  decimal number? " << isNumber(s);
    s = "0.12";
    cout << "\n Is " << s << " a  decimal number? " << isNumber(s) << endl;	    
    s = "123.33";
    cout << "\n Is " << s << " a  decimal number? " << isNumber(s) << endl;	    
    s = "76.4e93";
    cout << "\n Is " << s << " a  decimal number? " << isNumber(s) << endl;	    	    
    s = "+123";
    cout << "\n Is " << s << " a  decimal number? " << isNumber(s) << endl;	    	    
    s = "+-33";
    cout << "\n Is " << s << " a  decimal number? " << isNumber(s) << endl;	    	    
    return 0;
}

// 22. Write a C++ program to compute the sum of two given binary strings. Return result will be a binary string and input strings should not be blank and contains only 1 or 0 charcters. 
// Sample Input: bstr1 = "10"
// bstr2 = "1"
// Sample Output: 10 + 1 = 11

// Sample Input: bstr1 = "1100"
// bstr2 = "1010"
// Sample Output: 1100 + 1010 = 10110

#include <iostream>

using namespace std;

string binary_add(string bstr1, string bstr2) {
        int size = max(bstr1.size(), bstr2.size());
        int temp = 0;

        string result_str = "";
        for(auto i = 0; i < size; ++i)
        {
            int digit1 = (i + 1 <= bstr1.size()) ? bstr1[bstr1.size() - 1 - i] - '0' : 0;
            int digit2 = (i + 1 <= bstr2.size()) ? bstr2[bstr2.size() - 1 - i] - '0' : 0;
            int number = (digit1 + digit2 + temp);
            temp = number / 2;
            result_str = to_string(number % 2) + result_str;
        }

        if (temp > 0)
        {
            result_str = to_string(temp) + result_str;
        }

        return result_str;
    }

int main() {
    string bstr1 = "10";
    string bstr2 = "1";
    cout << "\n" << bstr1 << " + " << bstr2 <<" = " << binary_add(bstr1, bstr2) << endl;
    bstr1 = "1100";
    bstr2 = "1010";
    cout << "\n" << bstr1 << " + " << bstr2 <<" = " << binary_add(bstr1, bstr2) << endl;
    bstr1 = "10";
    bstr2 = "10";
    cout << "\n" << bstr1 << " + " << bstr2 <<" = " << binary_add(bstr1, bstr2) << endl;			    
    return 0;
}

// 23. Write a C++ program to compute square root of a given non-negative integer. Return type should be an integer. 
// Sample Input: n = 81
// Sample Output: Square root of 81 = 9
// Input: n = 8
// Output: Square root of 8 = 2

#include <iostream>

using namespace std;

int square_root(int num1) {
            long left_part = 0;
            long right_part = num1 / 2 + 1;
            while (left_part <= right_part) {
                long mid = left_part + (right_part - left_part) / 2;
                long result = mid * mid;
                if (result == (long) num1) {
                    return (int) mid;
                } else if (result > num1) {
                    right_part = mid - 1;
                } else {
                    left_part = mid + 1;
                }
            }
            return (int) right_part;
        }
    

int main() {
    int n = 81;
	cout << "\nSquare root of " << n << " = " << square_root(n) << endl;		
    n = 8;
	cout << "\nSquare root of " << n << " = " << square_root(n) << endl;
    n = 627;
	cout << "\nSquare root of " << n << " = " << square_root(n) << endl;
	n =225;
	cout << "\nSquare root of " << n << " = " << square_root(n) << endl;
	return 0;
}

// 24. Write a C++ program to count the prime numbers less than a given positive number. 
// Sample Input: n = 8
// Sample Output: Number of prime numbers less than 8 is 2
// Sample Input: n = 30
// Sample Output: Number of prime numbers less than 30 is 10

#include <iostream>
#include <cmath>

using namespace std;
class Solution {
public:
    int count_Primes(int n) {
        int ctr = 0;
        for (int i = 2; i < n; i++) {
            if (is_Prime(i)) {
            
                ctr++;
            }
        }
        return ctr;
    }

bool is_Prime(int n) {
        int n_ = int(sqrt(n));
        for (int i = 2; i <= n_; i++) {
            if (0 == n % i) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution *solution = new Solution();
    int n = 8;
    cout << "Number of prime numbers less than " << n << " is " <<  solution->count_Primes(5) << endl;
    n = 30;
    cout << "Number of prime numbers less than " << n << " is " <<  solution->count_Primes(30) << endl;    
    n = 100;
    cout << "Number of prime numbers less than " << n << " is " <<  solution->count_Primes(100) << endl;    
    return 0;
}

// 25. Write a C++ program to count the total number of digit 1 pressent in all positive numbers less than or equal to a given integer. 
// Sample Input: n = 10
// Sample Output: Number of digit 1 present in all +ve numbers less than or equal to 10 is 2
// Sample Input: n = 19
// Sample Output: Number of digit 1 present in all +ve numbers less than or equal to 19 is 12

#include <iostream>
#include <cmath>

using namespace std;

int count_digit_one(int n) {
        int ctr = 0;
        for (int i = 1; i <= n; i *= 10) {
            int a = n / i;
            int b = n % i;
            ctr += (a + 8) / 10 * i;
            if (1 == a % 10) {
                ctr += b + 1;
            }
        }
        return ctr;
    }

int main() {
	int n = 10;
    cout << "Number of digit 1 present in all +ve numbers less than or equal to " << n  << " is "<< count_digit_one(n);
	n = 19;
    cout << "\nNumber of digit 1 present in all +ve numbers less than or equal to " << n  << " is "<< count_digit_one(n);
	n = 100;
    cout << "\nNumber of digit 1 present in all +ve numbers less than or equal to " << n  << " is "<< count_digit_one(n);
	return 0;    
}


// 26. Write a C++ program to find the missing number in a given array of integers taken from the sequence 0, 1, 2, 3, ...,n. 
// Sample Input: arr[10] = {10, 9, 4, 6, 3, 2, 5, 7, 1, 0 }
// Sample Output: Missing number in the said array: 8
// Sample Input: arr1[4] = {0, 3, 4, 2}
// Sample Output: Missing number in the said array: 1

#include <iostream>

using namespace std;

int missingNumber(int nums[], int arr_size) {
        if (NULL == nums || arr_size == 0) {
            return 0;
        }
        int result = arr_size;
        for (int i = 0; i < arr_size; i++) {
            result ^= i;
            result ^= nums[i];
        }
        return result;
    }

int main() {
	int arr[10] = {10, 9, 4, 6, 3, 2, 5, 7, 1, 0 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	cout << "Original array\n";
	for (int i = arr_size - 1; i >= 0; i--) 
    cout << arr[i] << " ";
    cout << "\nMissing number in the said array: ";
    cout << "\n" <<  missingNumber(arr, arr_size);
    
    int arr1[4] = {0, 3, 4, 2};
	arr_size = sizeof(arr1) / sizeof(arr1[0]);
	cout << "\n\nOriginal array\n";
	for (int i = arr_size - 1; i >= 0; i--) 
    cout << arr1[i] << " ";
    cout << "\nMissing number in the said array: ";
    cout << "\n" <<  missingNumber(arr1, arr_size);
    return 0;
}

// 27. Write a C++ program to find the number of perfect square (e.g. 1, 4, 9, 16, ...) numbers which represent a sum of a given number. 
// Sample Input: n = 5
// Number of perfect square whose sum equal to 5 = 2
// Sample Input: n = 7
// Number of perfect square whose sum equal to 7 = 4

#include <iostream>
#include <vector>

using namespace std;

int numSquares(int n) {
        
        vector<int> table(n + 1, 0);

        for(auto i = 1; i <= n; ++i)
        {
            int value = INT_MAX;
            for(auto j = 1; j * j <= i; ++j)
            {
                value = min(value, table[i - j * j] + 1);
            }

            table[i] = value;
        }

        return table[n];
    }

int main() 
{
    int n = 5;  // (4 + 1)
    cout << "\nNumber of perfect square whose sum equal to " << n << " = " << numSquares(n) << endl;
	n = 7;  // (4 + 1 + 1 + 1)
    cout << "\nNumber of perfect square whose sum equal to " << n << " = " << numSquares(n) << endl;	   	  	  	  	        	        
    n = 12;  // (4 + 4 + 4)
    cout << "\nNumber of perfect square whose sum equal to " << n << " = " << numSquares(n) << endl;
	return 0;
    
}

// 28. Write a C++ program to break a given integer in at least two parts (positive integers) to maximize the product of those integers. 
// Sample Input: n = 5
// After breaking in +ve integers maximumn product from 5 = 6
// Sample Input: n = 12
// After breaking in +ve integers maximumn product from 12 = 81

#include <iostream>
#include <cmath>

using namespace std;

int integer_Break(int n) {
            if (n == 2) {
                return 1;
            } else if (n == 3) {
                return 2;
            } else if (n % 3 == 0) {
                return (int) pow(3, n / 3);
            } else if (n % 3 == 1) {
                return 2 * 2 * (int) pow(3, (n - 4) / 3);
            } else {
                return 2 * (int) pow(3, n / 3);
            }
        }

int main() 
{
    int n = 5;  // (3 + 2) -> 3 x 2 = 6
    cout << "\nAfter breaking in +ve integers maximumn product from " << n << " = " << integer_Break(n) << endl;
    n = 12;  // (3 + 3 + 3 + 3) -> 3 x 3 x 3 x 3 = 81
    cout << "\nAfter breaking in +ve integers maximumn product from " << n << " = " << integer_Break(n) << endl;
    n = 17; // (3 + 3 + 3 + 3 + 3 + 2) -> 3 x 3 x 3 x 3 x 3 x 2 = 486
    cout << "\nAfter breaking in +ve integers maximumn product from " << n << " = " << integer_Break(n) << endl;    
	return 0;    
}

// 29. Write a C++ program to count all the numbers with unique digits within a given range 0 = y < 10n where y represent the unique digits numbers and take n as a input from the user. 
// Sample Input: n = 1
// Number of unique digits: 10
// Sample Input: n = 2
// Number of unique digits: 91

#include <iostream>
#include <cmath>

using namespace std;

int count_Unique_Digits_numbers(int n) {
        if (n == 0) {
            return 1;
        }
        int ctr = 10;
        for (int k = 2, fk = 9; k <= n; ++k) { 
            fk *= 10 - (k - 1);
            ctr += fk;
        }
        return ctr;  
    }
int main() 
{
    int n = 1;
    cout << "\nn = " << n << ", Number of unique digits: " << count_Unique_Digits_numbers(n) << endl;   
    n = 2;  
    cout << "\nn = " << n << ", Number of unique digits: " << count_Unique_Digits_numbers(n) << endl;       
	return 0;    
}

// 30. Write a C++ program to check whether a given positive integer is a perfect square or not. 
// In mathematics, a square number or perfect square is an integer that is the square of an integer, in other words, it is the product of some integer with itself. For example, 9 is a square number, since it can be written as 3 x 3.
// Sample Input: n = 1
// Is 1 is perfect number? 1
// Sample Input: n = 13
// Is 13 is perfect number? 0

#include <iostream>
#include <cmath>

using namespace std;

bool is_Perfect_Square(int num) {
        long long start_num = 0;
        long long end_num = num;
        
        while(start_num + 1 < end_num)
        {
            long long mid_num = start_num + (end_num - start_num) / 2;
            if (mid_num * mid_num < num)
            {
                start_num = mid_num;
            }
            else if(mid_num * mid_num > num)
            {
                end_num = mid_num;
            }
            else
            {
                return true;
            }
        }
        
        return start_num * start_num == num || end_num * end_num == num;
    }
    
int main() 
{
    int n = 1;
    cout << "\nIs "<< n << " is perfect number? " << is_Perfect_Square(n) << endl;   
    n = 13;
    cout << "\nIs "<< n << " is perfect number? " << is_Perfect_Square(n) << endl; 
    n = 16;
    cout << "\nIs "<< n << " is perfect number? " << is_Perfect_Square(n) << endl; 
    n = 125;
    cout << "\nIs "<< n << " is perfect number? " << is_Perfect_Square(n) << endl;    
	return 0;    
}

// 31. Write a C++ program to replace a given number until it become 1. 
// If the given number(n) is even replace n with n/2 and if the given number(n) is odd replace n with either n+1 or n-1. Find the minimum number of replacements.
// Sample Input: n = 8
// Number of replacements: 3
// Sample Input: n = 10
// Number of replacements: 4

#include <iostream>
#include <cmath>

using namespace std;
  
    long long num_replace(long long n) 
    {
        if (n==1) return 0;
        
        if (n%2==0)
            return num_replace(n/2)+1;
        else
            return min(num_replace(n+1), num_replace(n-1))+1;
    }    
int main() 
{
    long n = 8; // 8 -> 4 -> 2 -> 1
    cout << "\nOriginal number: "<< n << "  Number of replacements: " <<  num_replace(n) << endl;      
    n = 10; // 10 -> 5 -> 4 -> 2 -> 1
    cout << "\nOriginal number: "<< n << "  Number of replacements: " <<  num_replace(n) << endl;      
    n = 12; // 12 -> 6 -> 3 -> 2 -> 1
    cout << "\nOriginal number: "<< n << "  Number of replacements: " <<  num_replace(n) << endl;      
    
	return 0;    
}
