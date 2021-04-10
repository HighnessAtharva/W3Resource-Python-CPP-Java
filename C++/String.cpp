// 1. Write a C++ program to reverse a given string. 
// Example:
// Sample Input: w3resource
// Sample Output: ecruoser3w

#include <iostream>
#include <string>
using namespace std;

string reverse_string(string str) {
	string temp_str = str;
	int index_pos = 0;

	for (int x = temp_str.length()-1; x >= 0; x--)
	{
		str[index_pos] = temp_str[x];
		index_pos++;
	}
	return str;
}

int main() 
{
	cout << "Original string: w3resource"; 
	cout << "\nReverse string: " << reverse_string("w3resource");
	cout << "\n\nOriginal string: Python"; 
	cout << "\nReverse string: " << reverse_string("Python");
	return 0;
}

// 2. Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a). 
// Example:
// Sample Input: w3resource
// Sample Output: x3sftpvsdf

#include <iostream>
#include <string>
using namespace std;

string change_letter(string str) {

	int char_code;
	
	for (int x = 0; x < str.length(); x++)
	{
		char_code = int(str[x]);

		if (char_code == 122)
		{
			str[x] = char(97);
		}
		else if (char_code == 90)
		{
			str[x] = char(65);
		}
		else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
		{
			str[x] = char(char_code + 1);
		}
	
	}

	return str;
}

int main() 
{
	cout << "Original string: w3resource"; 
	cout << "\nNew string: " << change_letter("w3resource");
	cout << "\n\nOriginal string: Python"; 
	cout << "\nNew string: " << change_letter("Python");
	return 0;
}

// 3. Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space. 
// Example:
// Sample Input: cpp string exercises
// Sample Output: Cpp String Exercises

#include <iostream>
#include <string>

using namespace std;

string Capitalize_first_letter(string text) {

	for (int x = 0; x < text.length(); x++)
	{
		if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x - 1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}

	return text;
}

int main() 
{
	cout << Capitalize_first_letter("Write a C++ program");
	cout << "\n" << Capitalize_first_letter("cpp string exercises");
	return 0;
}

// 4. Write a C++ program to find the largest word in a given string. 
// Example:
// Sample Input: C++ is a general-purpose programming language.
// Sample Output: programming

#include <iostream>
#include <string>

using namespace std;

string Longest_Word(string text) {

	string result_word, temp_str1;

	for (int x = 0; x < text.length(); x++)
	{
		if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x])<= 57)))
		{
			result_word.push_back(text[x]);
		}
		else
		{
			break;
		}
	}

   for (int x = 0; x < text.length(); x++)
	{
		if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57)))
		{
			temp_str1.push_back(text[x]);

			if (x + 1 == text.length() && temp_str1.length() > result_word.length())
			{
				result_word = temp_str1;
			}
		}
		else
		{
			if (temp_str1.length() > result_word.length())
			{
				result_word = temp_str1;
			}

			temp_str1.clear();
		}
	}
  
	return result_word;
}

int main() {
	cout << "Original String: C++ is a general-purpose programming language. \nLongest word: " << Longest_Word("C++ is a general-purpose programming language.") << endl;
	cout << "\nOriginal String: The best way we learn anything is by practice and exercise questions. \nLongest word: " << Longest_Word("The best way we learn anything is by practice and exercise questions.") << endl;
    cout << "\nOriginal String: Hello \nLongest word: " << Longest_Word("Hello") << endl;
	return 0;
}

// 5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string. 
// Example:
// Sample Input: python
// Sample Output: hnopty
#include <iostream>
#include <string>

using namespace std;

string sort_characters(string text) {

	bool flag;
	char ch;

	do
	{
		flag = false;

		for (int x = 0; x < text.length() - 1; x++)
		{
			if (text[x] > text[x + 1])
			{
				ch = text[x];
				text[x] = text[x + 1];
				text[x + 1] = ch;
				flag = true;
			}
		}
	} while (flag);

	// Remove spaces
	string str;
	for (int y = 0; y < text.length(); y++)
	{
		if (text[y] != ' ')
		{
			str.push_back(text[y]);
		}
	}

	return str;
}

int main() {

	cout << "Original text: python \nSorted text: ";
	cout << sort_characters("python") << endl;
	cout << "\nOriginal text: AaBb \nSorted text: ";
	cout << sort_characters("AaBb") << endl;
	cout << "\nOriginal text: the best way we learn anything is by practice and exercise questions \nSorted text: ";
	cout << sort_characters("the best way we learn anything is by practice and exercise questions") << endl;
	return 0;

}


// 6. Write a C++ program to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least once. 
// + Example:
// Sample Input: eagerer
// Sample Output: eagerer -> 1

#include <iostream>

using namespace std;

bool Check_chars(string text) {

  int len = int(text.size());
  for (int i = 0; i < len; i++){
    if (text[i] == 'e' || text[i] == 'E'){
      if (i+2 < len  && (text[i+2] == 'g' || text[i+2] == 'G'))
          return true;
    }
    if (text[i] == 'g' || text[i] == 'G'){
      if (i+2 < len  && (text[i+2] == 'e' || text[i+2] == 'e'))
          return true;
    }
  }
  return false;

}

    int main() {
        cout << "Original string: eagerer -> " << Check_chars("eagerer") << endl;
        cout << "\nOriginal string: eaglets -> " << Check_chars("eaglets") << endl;
        cout << "\nOriginal string: eardrop -> " << Check_chars("eardrop") << endl;
        cout << "\nOriginal string: After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday. -> ";
		cout << Check_chars("After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday.") << endl;
        return 0;
}

// 7. Write a C++ program to count all the vowels in a given string. 
// Example:
// Sample Input: eagerer
// Sample output: number of vowels -> 4

#include <iostream>

using namespace std;

int Vowel_Count(string text) {
  int ctr = 0;
  for(int i = 0; i < int(text.size()); i++){
    if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
      ++ctr;
    if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
      ++ctr;
  }
  return ctr;

}

int main() {
        cout << "Original string: eagerer, number of vowels -> " << Vowel_Count("eagerer") << endl;
        cout << "\nOriginal string: eaglets, number of vowels -> " << Vowel_Count("eaglets") << endl;
        cout << "\nOriginal string: w3resource, number of vowels -> " << Vowel_Count("w3resource") << endl;
        cout << "\nOriginal string: After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday., number of vowels -> ";
		cout << Vowel_Count("After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday.") << endl;
        return 0;
}

// 8. Write a C++ program to count all the words in a given string. 
// Example:
// Sample Input: Python
// Sample Output: number of words -> 1

#include <iostream>
#include <string>
using namespace std;

int Word_count(string text) {

	int ctr = 0;
	for (int x = 0; x < text.length(); x++)
	{
		if (text[x] == ' ')
			ctr++;
	}
	return ctr + 1;
}

int main() {
        cout << "Original string: Python, number of words -> " << Word_count("Python") << endl;
        cout << "\nOriginal string: CPP Exercises, number of words -> " << Word_count("CPP Exercises") << endl;
        cout << "\nOriginal string: After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday., \nnumber of words -> ";
		cout << Word_count("After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday.") << endl;
        return 0;
}


// 9. Write a C++ program to check whether two characters present equally in a given string. 
// Example:
// Sample Input: aabcdeef
// Sample Output: True

#include <iostream>
#include <string>

using namespace std;

string count_chars(string str, string chr1, string chr2) {

	int ctr1 = 0, ctr2 = 0;

	for (int x = 0; x < str.length(); x++)
	{
		if (str[x] == chr1[0])
			ctr1++;

		if (str[x] == chr2[0])
			ctr2++;
	}

	if (ctr1 == ctr2)
	{
		return "True";
	}
	else
	{
		return "False";
	}
}

int main() {

	cout << count_chars("aabcdeef","a","e") << endl; // true
    cout << "\n" << count_chars("aabcdef","a","e") << endl; //false
    cout << "\n" << count_chars("aab11cde22f","1","2") << endl; //true
	return 0;
}

// 10. Write a C++ program to check if a given string is a Palindrome or not. 
// A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam, racecar.
// Example:
// Sample Input: madam
// Sample Output: True

#include <iostream>

using namespace std;

string test_Palindrome(string text) {
  string str1, str2;
  int str_len = int(text.size());
  for (int i = 0; i < str_len; i++){
    if((text[i] >= 'a' && text[i] <= 'z' ) || (text[i] >= 'A' && text[i] <= 'Z' ))
      str1+=tolower(text[i]);
    if((text[str_len-1-i] >= 'a' && text[str_len-1-i] <= 'z' ) || (text[str_len-1-i] >= 'A' && text[str_len-1-i] <= 'Z' ))
      str2+=tolower(text[str_len-1-i]);
  }

  if (str1 == str2)
    return "True";
  return "False";

}

int main() {
  cout << "Is madam a Palindrome? " << test_Palindrome("madam");
  cout << "\nIs racecar a Palindrome? " << test_Palindrome("racecar");
  cout << "\nIs abc a Palindrome? " << test_Palindrome("abc");
  return 0;

}


// 11. Write a C++ program to find a word in a given string which has the highest number of repeated letters. 
// Example:
// Sample Input: Print a welcome text in a separate line.
// Sample Output: Word which has the highest number of repeated letters. separate

#include <iostream>
#include <string>
using namespace std;

string highest_repeated_letters(string str) {

	int str_size = str.length();
	int ctr1 = 0, ctr2 = 0, high1 = 0, high2 = 0;
	int start = -1, end = 0;
	int temp1, temp2;
	char letter;

	for (int x = 0; x < str_size; x++, end++)
	{
		if (start == -1) 
		{
			start = x;
		}

		if (str[x] == ' ' || x == str_size-1)
		{
			if (end == str_size - 1)
			{
				end += 1;
			}

			for (int y = start; y < end; y++)
			{
				letter = str[y];

				for (int z = start; z < end; z++)
				{
					if (y == z)
					{
						continue;
					}
					else if (letter == str[z])
					{
						ctr1++;
					}
				}

				if (ctr1)
				{
					ctr2++;
				}
				

				if (ctr1 > high1 && ctr2 > high2)
				{
					high1 = ctr1;
					high2 = ctr2;
					temp1 = start;
					temp2 = end;
				}

				ctr1 = 0;
			}

			if (ctr2 > high2)
			{
				high2 = ctr2;
				temp1 = start;
				temp2 = end;
			}
			ctr2 = 0;

			start = end+1;
		}
	}

	if (high1 > 0)
	{
		string repeated;

		for (temp1; temp1 < temp2; temp1++)
		{
			repeated.push_back(str[temp1]);
		}

		return repeated;
	}
	else
	{
		return "-1";
	}
}

int main() {

	cout << "Original string: Print a welcome text in a separate line.\nWord which has the highest number of repeated letters. ";
	cout << highest_repeated_letters("Print a welcome text in a separate line.") << endl;  
	
	cout << "\nOriginal string: Count total number of alphabets, digits and special characters in a string.\nWord which has the highest number of repeated letters. ";
	cout << highest_repeated_letters("Count total number of alphabets, digits and special characters in a string.") << endl; 
	
	cout << "\nOriginal string: abcdef abcdfgh ijklop 1234.\nWord which has the highest number of repeated letters. ";
	cout << highest_repeated_letters("abcdef abcdfgh ijklop 1234") << endl; //Not found, return -1
	return 0;
}

// 12. Write a C++ program to insert a dash character (-) between two odd numbers in a given string of numbers. 
// Example:
// Sample Input: 1345789
// Sample Output: Result-> 1-345-789

#include <iostream>
#include <string>

using namespace std;

string Insert_dash(string num_str) {

	string result_str = num_str;

	for (int x = 0; x < num_str.length() - 1; x++)
	{
		if ((num_str[x] == '1' || num_str[x] == '3' || num_str[x] == '5' || num_str[x] == '7' || num_str[x] == '9') && (num_str[x + 1] == '1' || num_str[x + 1] == '3' || num_str[x + 1] == '5' || num_str[x + 1] == '7' || num_str[x + 1] == '9'))
		{
			result_str.insert(x+1,"-");
			num_str = result_str;
		}
	}

	return result_str;
}

int main() {

	cout << "Original number-123456789 : Result-> "<< Insert_dash("123456789") << endl;
	cout << "\nOriginal number-1345789 : Result-> "<< Insert_dash("1345789") << endl;
	cout << "\nOriginal number-1345789 : Result-> "<< Insert_dash("34635323928477") << endl;
	return 0;
}

// 13. Write a C++ program to change the case (lower to upper and upper to lower cases) of each character of a given string. 
// Example:
// Sample Input: Pythpn
// Sample Output: pYTHON

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string change_Case(string text) {

	for (int x = 0; x < text.length(); x++)
	{
		if (isupper(text[x]))
		{
			text[x] = tolower(text[x]);
		}
		else
		{
			text[x] = toupper(text[x]);
		}
	}

	return text;
}

int main() {

	cout << "Original string: Python, After changing cases-> "<< change_Case("Python") << endl;
	cout << "Original string: w3resource,  After changing cases-> "<< change_Case("w3resource") << endl;
	cout << "Original string: AbcdEFH Bkiuer,  After changing cases-> "<< change_Case(" AbcdEFH Bkiuer") << endl;
	return 0;
}

// 14. Write a C++ program to find the numbers in a given string and calculate the sum of all numbers. 
// Example:
// Sample Input: w3resource from 2008
// Sample Output: Sum of the numbers: 2011

#include <iostream>
#include <string>

using namespace std;

int find_nums_and_sum(string str) {

	int sum_num = 0;
	string temp_str;

	for (int x = 0; x < str.length(); x++)
	{
		if (isdigit(str[x]))
		{
			temp_str.push_back(str[x]);

			for (int y = x + 1; y < str.length(); y++)
			{
				if (y >= str.length())
				{
					break;
				}
				else if (isdigit(str[y]))
				{
					temp_str.push_back(str[y]);
					x = y;
				}
				else
				{
					break;
				}
			}

			sum_num += stoi(temp_str);
			temp_str.clear();
		}
	}

	return sum_num;
}

int main() {

	cout << "Original string: 91, ABC Street.-> Sum of the numbers: "<< find_nums_and_sum("91, ABC Street.") << endl;
 	cout << "Original string: w3resource from 2008->  Sum of the numbers: "<< find_nums_and_sum("w3resource from 2008") << endl;
 	cout << "Original string: C++ Versiuon 14aa11bb23->  Sum of the numbers: "<< find_nums_and_sum("C++ Versiuon 14aa11bb23") << endl; 
	return 0;
}

// 15. Write a C++ program to convert a givern non-negative integer to english words. 
// Example:
// Sample Input: 12
// Sample Output: Twelve
// Sample Input: 29
// Sample Output: Twenty Nine
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

static string belowTwenty[] ={"Zero","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                 "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", 
                 "Seventeen", "Eighteen", "Nineteen"};
                 
static string belowHundred[]={"","", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };


static string overThousand[]={"Hundred", "Thousand", "Million", "Billion" };


string number_to_words_below_hundred(long long int num) {
    string result;

    if (num == 0) {
        return result;
    }else if (num < 20) {
        return belowTwenty[num];
    } else if (num < 100) {
        result = belowHundred [num/10];
        if (num%10 > 0) { 
            result += " " + belowTwenty[num%10];
        }
    }else {
        result = belowTwenty[num/100] + " " + overThousand[0];
        if ( num % 100 > 0 ) {
            result += " " + number_to_words_below_hundred( num % 100 );
        }
    }
    return result;
}

string number_to_words(int num) {
    if (num ==0 ) return belowTwenty[num];

    vector<string> ret;
    for( ;num > 0; num/=1000 ) {
        ret.push_back( number_to_words_below_hundred(num % 1000) );
    }

    string result=ret[0];
    for (int i=1; i<ret.size(); i++){
        if (ret[i].size() > 0 ){
            if ( result.size() > 0 ) {
                result = ret[i] + " " + overThousand[i] + " " + result; 
            } else {
                result = ret[i] + " " + overThousand[i]; 
            }
        }

    }
    return result;
}

int main() 
{
      
	  long long int num = 0;
      cout << num << " ->  " << number_to_words(num) <<  endl;
      num = 9;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;
      num = 12;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;
      num = 29;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;
      num = 234;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;
      num = 777;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;
      num = 1023;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;
      num = 45321;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;
      num = 876543;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;	  	  	  	  	  	        
      num = 8734210;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;	  	  	  	  	  	        
      num = 329876120;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;	  	 
      num = 18348797629876120;
      cout << "\n" << num << " ->  " << number_to_words(num) <<  endl;	   	  	  	  	        	        
    return 0;
}
