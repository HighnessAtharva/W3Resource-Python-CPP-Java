// 1. Write a program in C++ to print a welcome text in a separate line. 
#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Print a welcome text in a separate line :\n";
	cout << "----------------------------------------------\n";
    cout << " Welcome to \n" ;
    cout << " w3resource.com "<<endl ;
    
}


// 2. Write a program in C++ to print the sum of two numbers. 
// Sample Output:
// Print the sum of two numbers :
// -----------------------------------
// The sum of 29 and 30 is : 59
#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Print the sum of two numbers :\n";
	cout << "-----------------------------------\n";
    cout << " The sum of 29 and 30 is : "<< 29+30 <<"\n\n" ;
}





// 3. Write a program in C++ to find Size of fundamental data types. 
// Sample Output:
// Find Size of fundamental data types :
// ------------------------------------------
// The sizeof(char) is : 1 bytes
// The sizeof(short) is : 2 bytes
// The sizeof(int) is : 4 bytes
// The sizeof(long) is : 8 bytes
// The sizeof(long long) is : 8 bytes
// The sizeof(float) is : 4 bytes
// The sizeof(double) is : 8 bytes
// The sizeof(long double) is : 16 bytes
// The sizeof(bool) is : 1 bytes


#include <iostream>
using namespace std;
 
int main() 
{
    cout << "\n\n Find Size of fundamental data types :\n";
	cout << "------------------------------------------\n";
   cout << " The sizeof(char) is :          " << sizeof(char) << " bytes \n" ;
   cout << " The sizeof(short) is :         " << sizeof(short) << " bytes \n" ;
   cout << " The sizeof(int) is :           " << sizeof(int) << " bytes \n" ;
   cout << " The sizeof(long) is :          " << sizeof(long) << " bytes \n" ;
   cout << " The sizeof(long long) is :     " << sizeof(long long) << " bytes \n";
   cout << " The sizeof(float) is :         " << sizeof(float) << " bytes \n" ;
   cout << " The sizeof(double) is :        " << sizeof(double) << " bytes \n";
   cout << " The sizeof(long double) is :   " << sizeof(long double) << " bytes \n";
   cout << " The sizeof(bool) is :          " << sizeof(bool) << " bytes \n\n";
   return 0;
}



// 4. Write a program in C++ to print the sum of two numbers using variables. 
// Print the sum of two numbers :
// -----------------------------------
// The sum of 29 and 30 is : 59

#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Print the sum of two numbers :\n";
	cout << "-----------------------------------\n";
	int a;
	int b;
	int sum;
	a=29;
	b=30;
	sum=a+b;
	cout << " The sum of "<< a << " and "<<b <<" is : "<< sum <<"\n\n" ;
}



// 5. Write a program in C++ to check the upper and lower limits of integer. 
// Expected Output:
// Check the upper and lower limits of integer :
// --------------------------------------------------
// The maximum limit of int data type : 2147483647
// The minimum limit of int data type : -2147483648
// The maximum limit of unsigned int data type : 4294967295
// The maximum limit of long long data type : 9223372036854775807
// The minimum limit of long long data type : -9223372036854775808
// The maximum limit of unsigned long long data type : 18446744073709551615
// The Bits contain in char data type : 8
// The maximum limit of char data type : 127
// The minimum limit of char data type : -128
// The maximum limit of signed char data type : 127
// The minimum limit of signed char data type : -128
// The maximum limit of unsigned char data type : 255
// The minimum limit of short data type : -32768
// The maximum limit of short data type : 32767
// The maximum limit of unsigned short data type : 65535

#include <iostream>
#include <climits>   // integer limits in header file
using namespace std;
 
int main() 
{
    cout << "\n\n Check the upper and lower limits of integer :\n";
	cout << "--------------------------------------------------\n";
	cout << " The maximum limit of int data type :                  " << INT_MAX << endl;
	cout << " The minimum limit of int data type :                  " << INT_MIN << endl;
	cout << " The maximum limit of unsigned int data type :         " << UINT_MAX << endl;
	cout << " The maximum limit of long long data type :            " << LLONG_MAX << endl;
	cout << " The minimum limit of long long data type :             " << LLONG_MIN << endl;
	cout << " The maximum limit of unsigned long long data type :   " << ULLONG_MAX << endl;
	cout << " The Bits contain in char data type :                  " << CHAR_BIT << endl;
	cout << " The maximum limit of char data type :                 " << CHAR_MAX << endl;
	cout << " The minimum limit of char data type :                 " << CHAR_MIN << endl;
	cout << " The maximum limit of signed char data type :          " << SCHAR_MAX << endl;
	cout << " The minimum limit of signed char data type :          " << SCHAR_MIN << endl;
	cout << " The maximum limit of unsigned char data type :        " << UCHAR_MAX << endl;
	cout << " The minimum limit of short data type :                " << SHRT_MIN << endl;
    cout << " The maximum limit of short data type :                " << SHRT_MAX << endl;
    cout << " The maximum limit of unsigned short data type :       " << USHRT_MAX << endl;
   cout << endl;
   return 0;
}






// 6. Write a program in C++ to check whether the primitive values crossing the limits or not. 
// Check whether the primitive values crossing the limits or not :
// --------------------------------------------------------------------
// The Gender is : F
// Is she married? : 1
// Number of sons she has : 2
// Year of her appointment : 2009
// Salary for a year : 1500000
// Height is : 79.48
// GPA is 4.69
// Salary drawn upto : 12047235
// Balance till : 995324987


#include <iostream>
using namespace std;
 
int main() 
{
    cout << "\n\n Check whether the primitive values crossing the limits or not :\n";
	cout << "--------------------------------------------------------------------\n";
   char gender = 'F';             // char is single-quoted
   bool isEmployed = true;         // true(non-zero) or false(0)
   unsigned short numOfsons = 2; // [0, 255]
   short yearOfAppt = 2009;      // [-32767, 32768]
   unsigned int YearlyPackage = 1500000;   // [0, 4294967295]
   double height = 79.48;       // With fractional part
   float gpa = 4.69f;           // Need suffix 'f' for float
   long totalDrawan = 12047235L;     // Suffix 'L' for long
   long long balance = 995324987LL;  // Need suffix 'LL' for long long int  

   cout << " The Gender is : " << gender << endl;
   cout << " Is she married? : " << isEmployed << endl;
   cout << " Number of sons she has : " << numOfsons << endl;
   cout << " Year of her appointment : " << yearOfAppt << endl;
   cout << " Salary for a year : " << YearlyPackage << endl;
   cout << " Height is : " << height << endl;
   cout << " GPA is " << gpa << endl;
   cout << " Salary drawn upto : " << totalDrawan << endl;
   cout << " Balance till : " << balance << endl;   
   return 0;
}


// 7. Write a program in C++ to display various type or arithmetic operation using mixed data type. 
// Sample output:
// Display arithmetic operations with mixed data type :
// ---------------------------------------------------------
// 5 + 7 = 12
// 3.7 + 8.0 = 11.7
// 5 + 8.0 = 13.0
// 5 - 7 = -2
// 3.7 - 8.0 = -4.3
// 5 - 8.0 = -3.0
// 5 * 7 = 35
// 3.7 * 8.0 = 29.6
// 5 * 8.0 = 40.0
// 5 / 7 = 0
// 3.7 / 8.0 = 0.5
// 5 / 8.0 = 0.6

#include <iostream>
#include <iomanip>   // formatting floating-point numbers with 1 decimal place
using namespace std;
 
int main() 
{
   int m1 = 5, m2 = 7;
   double d1 = 3.7, d2 = 8.0;
   
    cout << "\n\n Display arithmetic operations with mixed data type :\n";
	cout << "---------------------------------------------------------\n";
   cout << fixed << setprecision(1);  
 
   cout <<" "<< m1 << " + " << m2 << " = " << m1+m2 << endl;  
   cout <<" "<< d1 << " + " << d2 << " = " << d1+d2 << endl;  
   cout <<" "<< m1 << " + " << d2 << " = " << m1+d2 << endl;  
 
   cout <<" "<< m1 << " - " << m2 << " = " << m1-m2 << endl;  
   cout <<" "<< d1 << " - " << d2 << " = " << d1-d2 << endl;  
   cout <<" "<< m1 << " - " << d2 << " = " << m1-d2 << endl;  
 
   cout <<" "<< m1 << " * " << m2 << " = " << m1*m2 << endl; 
   cout <<" "<< d1 << " * " << d2 << " = " << d1*d2 << endl;  
   cout <<" "<< m1 << " * " << d2 << " = " << m1*d2 << endl;  
 
   cout <<" "<< m1 << " / " << m2 << " = " << m1/m2 << endl;  
   cout <<" "<< d1 << " / " << d2 << " = " << d1/d2 << endl;  
   cout <<" "<< m1 << " / " << d2 << " = " << m1/d2 << endl;  
   cout << endl;
   return 0;
}

// 8. Write a program in C++ to check overflow/underflow during various arithmetical operation. 
// Sample Output:
// Check overflow/underflow during various arithmetical operation :
// Range of int is [-2147483648, 2147483647]
// ---------------------------------------------------------------------
// Overflow the integer range and set in minimum range : -2147483648
// Increasing from its minimum range : -2147483647
// Product is :1
// Underflow the range and set in maximum range : 2147483647
// Decreasing from its maximum range : 2147483646
// Product is : 0


#include <iostream>
using namespace std;
 
int main() 
{
    cout << "\n\n Check overflow/underflow during various arithmetical operation :\n";
    cout << " Range of int is [-2147483648, 2147483647]"<< endl;
	cout << "---------------------------------------------------------------------\n";   
   int n1 = 2147483647;      // maximum range of integer
   cout <<" Overflow the integer range and set in minimum range : " << n1 + 1 << endl; 
   cout <<" Increasing from its minimum range : " << n1 + 2 << endl; 
   cout <<" Product is :" << n1 * n1 << endl; 
 
   int n2 = -2147483648;     // minimum range of integer
   cout <<" Underflow the range and set in maximum range : " << n2 - 1 << endl; 
   cout <<" Decreasing from its maximum range : " << n2 - 2 << endl; 
   cout <<" Product is : " << n2 * n2 << endl; 
   cout << endl;
   return 0;
}


// 9. Write a program in C++ to display the operation of pre and post increment and decrement. 
// Sample Output:
// Display the operation of pre and post increment and decrement :
// --------------------------------------------------------------------
// The number is : 57
// After post increment by 1 the number is : 58
// After pre increment by 1 the number is : 59
// After increasing by 1 the number is : 60
// After post decrement by 1 the number is : 59
// After pre decrement by 1 the number is : 58
// After decreasing by 1 the number is : 57
#include <iostream>
using namespace std;
 
int main() 
{
   int num = 57;      
    cout << "\n\n Display the operation of pre and post increment and decrement :\n";
	cout << "--------------------------------------------------------------------\n";    
   cout <<" The number is : " << num << endl; 
   num++;               // increase by 1 (post-increment)
   cout <<" After post increment by 1 the number is : " << num << endl; 
   ++num;               // increase by 1 (pre-increment)
   cout <<" After pre increment by 1 the number is : " << num << endl; 
   num = num + 1;  // num is now increased by 1.
   cout <<" After increasing by 1 the number is : " << num << endl; // 79
   num--;               // decrease by 1 (post-decrement)
   cout <<" After post decrement by 1 the number is : " << num << endl; 
   --num;               // decrease by 1 (pre-decrement)
   cout <<" After pre decrement by 1 the number is : " << num << endl; 
   num = num - 1; // num is now decreased by 1.
   cout <<" After decreasing by 1 the number is : " << num << endl;
   cout << endl;
   return 0;
}


// 10. Write a program in C++ to formatting the output. 
// Sample Output:
// Formatting the output :
// ----------------------------
// The value of pi : 3.1416
// The value of pi 4 decimal place of total width 8 : | 3.1416|
// The value of pi 4 decimal place of total width 10 : | 3.1416|
// The value of pi 4 decimal place of total width 8 : |--3.1416|
// The value of pi 4 decimal place of total width 10 : |----3.1416|
// The value of pi in scientific format is : 3.1416e+00
// Status in number : 0
// Status in alphabet : false

#include <iostream>
#include <iomanip>    // Needed to do formatted I/O
using namespace std;
 
int main() 
{
    cout << "\n\n Formatting the output :\n";
	cout << "----------------------------\n"; 
   
   double pi = 3.14159265; // this is floating point number
   cout << fixed << setprecision(4); // number is set to display with 4 decimal places
   cout <<" The value of pi : " << pi << endl;
   cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; // setw() sets the total width
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 
   
   cout << setfill('-'); // setfill() sets to fill the blanks with specified character
   cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; 
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 
   
   cout << scientific;  // set value in scientific format with exponent
   cout <<" The value of pi in scientific format is : " << pi << endl;
   
   bool done = false; // this is boolean variable
   cout <<" Status in number : " << done << endl;  
   cout << boolalpha;     // set output in alphabet true or false
   cout <<" Status in alphabet : " << done << endl;
   cout << endl;
   return 0;
}

// 11. Write a program in C++ to print the result of the specified operations. 
// Sample Output:
// Print the result of some specific operation :
// --------------------------------------------------
// Result of 1st expression is : 23
// Result of 2nd expression is : 5
// Result of 3rd expression is : 12
// Result of 4th expression is : 3

#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Print the result of some specific operation :\n";
	cout << "--------------------------------------------------\n";
    cout << " Result of 1st expression is : "<< (-1+4*6) <<"\n" ; //-1 + 24 = 23
    cout << " Result of 2nd expression is : "<< ((35+5)%7) <<"\n" ; //40 % 7 = 5 (remainder of 40/7)
    cout << " Result of 3rd expression is : "<< (14+-4*6/11) <<"\n" ;  //14 - (24/11)= 14 - 2 = 12
    cout << " Result of 4th expression is : "<< (2+15/6*1-7%2) <<"\n\n" ; //2 + (15/6) - remainder of (7/2) = 2 + 2 - 1 = 4 - 1 = 3	
	
}

// 12. Write a program in C++ to add two numbers accept through keyboard. 
// Sample Output:
// Original array:
// [10, 20, 30]
// After append values to the end of the array:
// [10 20 30 40 50 60 70 80 90]
#include <iostream>
using namespace std;
 
int main()
{
	int num1, num2, sum;
    cout << "\n Sum of two numbers :\n";
	cout << "-------------------------\n";   
	cout << " Input 1st number : ";
	cin >> num1 ;
	cout << " Input 2nd number : ";
	cin >> num2;
	sum = num1 + num2;
	cout <<" The sum of the numbers is : " << sum << endl;
	cout << endl;
	return 0;
}


// 13. Write a program in C++ to swap two numbers. 
// Sample Output:
// Swap two numbers :
// -----------------------
// Input 1st number : 25
// Input 2nd number : 39
// After swapping the 1st number is : 39
// After swapping the 2nd number is : 25

#include <iostream>
using namespace std;
 
int main()
{
	cout << "\n\n Swap two numbers :\n";
	cout << "-----------------------\n";
	int num1, num2, temp;
	cout << " Input 1st number : ";
	cin >> num1 ;
	cout << " Input 2nd number : ";
	cin >> num2;	
	temp=num2;
	num2=num1;
	num1=temp;
    cout << " After swapping the 1st number is : "<< num1 <<"\n" ; 
    cout << " After swapping the 2nd number is : "<< num2 <<"\n\n" ; 	
}

// 14. Write a program in C++ to calculate the volume of a sphere. 
// Sample Output:
// Calculate the volume of a sphere :
// ---------------------------------------
// Input the radius of a sphere : 6
// The volume of a sphere is : 904.32

#include <iostream>
using namespace std;

    int main()
    {
    	int rad1;
    	float volsp;
		cout << "\n\n Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the radius of a sphere : ";
    	cin>>rad1;
    	volsp=(4*3.14*rad1*rad1*rad1)/3;
        cout<<" The volume of a sphere is : "<< volsp << endl;
        cout << endl;
        return 0;
    }

// 15. Write a program in C++ to calculate the volume of a cube. 
// Sample Output:
// Calculate the volume of a cube :
// ---------------------------------------
// Input the side of a cube : 5
// The volume of a cube is : 125

#include <iostream>
using namespace std;

    int main()
    {
    	int sid1;
    	float volcu;
		cout << "\n\n Calculate the volume of a cube :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the side of a cube : ";
    	cin>>sid1;
    	volcu=(sid1*sid1*sid1);
        cout<<" The volume of a cube is : "<< volcu << endl;
        cout << endl;
        return 0;
    }

// 16. Write a program in C++ to calculate the volume of a cylinder. 
// Sample Output:
// Calculate the volume of a cylinder :
// -----------------------------------------
// Input the radius of the cylinder : 6
// Input the height of the cylinder : 8
// The volume of a cylinder is : 904.32

#include <iostream>
using namespace std;

    int main()
    {
    	int rad1,hgt;
    	float volcy;
		cout << "\n\n Calculate the volume of a cylinder :\n";
		cout << "-----------------------------------------\n";		
        cout<<" Input the radius of the cylinder : ";
    	cin>>rad1;
		cout<<" Input the height of the cylinder : ";
    	cin>>hgt;
    	volcy=(3.14*rad1*rad1*hgt);
        cout<<" The volume of a cylinder is : "<< volcy << endl;
        cout << endl;
        return 0;
    }

// 17. Write a program in C++ to find the Area and Perimeter of a Rectangle. 
// Sample Output:
// Find the Area and Perimeter of a Rectangle :
// -------------------------------------------------
// Input the length of the rectangle : 10
// Input the width of the rectangle : 15
// The area of the rectangle is : 150
// The perimeter of the rectangle is : 50
#include <iostream>
using namespace std;

    int main()
    {
    	int width, lngth, area, peri;
		cout << "\n\n Find the Area and Perimeter of a Rectangle :\n";
		cout << "-------------------------------------------------\n";		
        cout<<" Input the length of the rectangle : ";
    	cin>>lngth;
		cout<<" Input the width of the rectangle : ";
    	cin>>width;
    	area=(lngth*width);
		peri=2*(lngth+width);
        cout<<" The area of the rectangle is : "<< area << endl;
        cout<<" The perimeter of the rectangle is : "<< peri << endl;		
        cout << endl;
        return 0;
    }


// 18. Write a program in C++ to find the area of any triangle using Heron's Formula. 
// Sample Output:
// Find the area of any triangle using Heron's Formula :
// ----------------------------------------------------------
// Input the length of 1st side of the triangle : 5
// Input the length of 2nd side of the triangle : 5
// Input the length of 3rd side of the triangle : 5
// The area of the triangle is : 10.8253

#include <iostream>
#include <math.h>
using namespace std;

    int main()
    {
    	float side1, side2, side3, area, s;
		cout << "\n\n Find the area of any triangle using Heron's Formula :\n";
		cout << "----------------------------------------------------------\n";		
        cout<<" Input the length of 1st side  of the triangle : ";
    	cin>>side1;
        cout<<" Input the length of 2nd side  of the triangle : ";
    	cin>>side2;
        cout<<" Input the length of 3rd side  of the triangle : ";
    	cin>>side3;	
		s = (side1+side2+side3)/2;
		area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        cout<<" The area of the triangle is : "<< area << endl;
        cout << endl;
        return 0;
    }

// 19. Write a program in C++ to find the area and circumference of a circle. 
// Sample Output:
// Find the area and circumference of any circle :
// ----------------------------------------------------
// Input the radius(1/2 of diameter) of a circle : 5
// The area of the circle is : 78.5397
// The circumference of the circle is : 31.4159
#include <iostream>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float radius, area, circum;
		cout << "\n\n Find the area and circumference of any circle :\n";
		cout << "----------------------------------------------------\n";		
        cout<<" Input the radius(1/2 of diameter) of a circle : ";
    	cin>>radius;
	
		circum = 2*PI*radius;
		area = PI*(radius*radius);
        cout<<" The area of the circle is : "<< area << endl;
        cout<<" The circumference of the circle is : "<< circum << endl;		
		
        cout << endl;
        return 0;
    }


// 20. Write a program in C++ to convert temperature in Celsius to Fahrenheit. 
// Sample Output:
// Convert temperature in Celsius to Fahrenheit :
// ---------------------------------------------------
// Input the temperature in Celsius : 35
// The temperature in Celsius : 35
// The temperature in Fahrenheit : 95

#include <iostream>
using namespace std;
 
int main()
{
    float frh, cel;
		cout << "\n\n Convert temperature in Celsius to Fahrenheit :\n";
		cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Celsius : ";
    cin >> cel;
    frh = (cel * 9.0) / 5.0 + 32;
    cout << " The temperature in Celsius    : " << cel << endl;
    cout << " The temperature in Fahrenheit : " << frh << endl;
	cout << endl;
    return 0;
}

// 21. Write a program in C++ to convert temperature in Fahrenheit to Celsius. 
// Sample Output:
// Convert temperature in Fahrenheit to Celsius :
// ---------------------------------------------------
// Input the temperature in Fahrenheit : 95
// The temperature in Fahrenheit : 95
// The temperature in Celsius : 35
#include <iostream>
using namespace std;
 
int main()
{
    float frh, cel;
	cout << "\n\n Convert temperature in Fahrenheit to Celsius :\n";
	cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Fahrenheit : ";
    cin >> frh;
    cel = ((frh * 5.0)-(5.0 * 32))/9;
    cout << " The temperature in Fahrenheit : " << frh << endl;
    cout << " The temperature in Celsius : " << cel << endl;
	cout << endl;
    return 0;
}


// 22. Write a program in C++ to find the third angle of a triangle. 
// Sample Output:
// Find the third angle of a triangle :
// -----------------------------------------
// Input the 1st angle of the triangle : 30
// Input the 2nd angle of the triangle : 60
// The 3rd of the triangle is : 90

#include <iostream>
using namespace std;
 
int main()
{
    float ang1, ang2, ang3;
	cout << "\n\n Find the third angle of a triangle :\n";
	cout << "-----------------------------------------\n";	
    cout<<" Input the 1st angle of the triangle : ";
    cin>>ang1;
    cout<<" Input the 2nd angle of the triangle : ";
    cin>>ang2;
	ang3=180-(ang1+ang2);
    cout << " The 3rd of the triangle is : " << ang3 << endl;
	cout << endl;
    return 0;
}	

// 23. Write a program in C++ that converts kilometers per hour to miles per hour. 
// Sample Output:
// Convert kilometers per hour to miles per hour :
// ----------------------------------------------------
// Input the distance in kilometer : 25
// The 25 Km./hr. means 15.5343 Miles/hr.

#include <iostream>
using namespace std;

int main()
{
    float kmph, miph;
	cout << "\n\n Convert kilometers per hour to miles per hour :\n";
	cout << "----------------------------------------------------\n";	
    cout << " Input the distance in kilometer : ";
    cin >> kmph;
	miph = (kmph * 0.6213712); 
    cout << " The "<< kmph <<" Km./hr. means "<< miph << " Miles/hr." << endl;
	cout << endl;
    return 0;
}	

// 24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit. 
// Sample Output:
// Convert temperature in Kelvin to Fahrenheit :
// ---------------------------------------------------
// Input the temperature in Kelvin : 300
// The temperature in Kelvin : 300
// The temperature in Fahrenheit : 80.33
#include <iostream>
using namespace std;
 
int main()
{
    float kel, frh;
		cout << "\n\n Convert temperature in Kelvin to Fahrenheit  :\n";
		cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Kelvin : ";
    cin >> kel;
    frh = (9.0 / 5) * (kel - 273.15) + 32;
    cout << " The temperature in Kelvin    : " << kel << endl;
    cout << " The temperature in Fahrenheit : " << frh << endl;
	cout << endl;
    return 0;
}


// 25. Write a program in C++ to convert temperature in Kelvin to Celsius. 
// Sample Output:
// Convert temperature in Kelvin to Celsius :
// ------------------------------------------------
// Input the temperature in Kelvin : 300
// The temperature in Kelvin : 300
// The temperature in Celsius : 26.85
#include <iostream>
using namespace std;
 
int main()
{
    float kel, cel;
		cout << "\n\n Convert temperature in Kelvin to Celsius  :\n";
		cout << "------------------------------------------------\n";	
    cout << " Input the temperature in Kelvin : ";
    cin >> kel;
    cel = kel - 273.15;
    cout << " The temperature in Kelvin    : " << kel << endl;
    cout << " The temperature in Celsius : " << cel << endl;
	cout << endl;
    return 0;
}



// 26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin. 
// Sample Output:
// Convert temperature in Fahrenheit to Kelvin :
// ---------------------------------------------------
// Input the temperature in Fahrenheit : 80.33
// The temperature in Fahrenheit : 80.33
// The temperature in Kelvin : 300


#include <iostream>
using namespace std;
 
int main()
{
    float kel, frh;
		cout << "\n\n Convert temperature in Fahrenheit to Kelvin  :\n";
		cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Fahrenheit : ";
    cin >> frh;
    kel = (5.0 / 9) * (frh - 32) + 273.15;
    cout << " The temperature in Fahrenheit : " << frh << endl;
    cout << " The temperature in Kelvin : " << kel << endl;
	cout << endl;
    return 0;
}


// 27. Write a program in C++ to convert temperature in Celsius to Kelvin. 
// Sample Output:
// Convert temperature in Celsius to Kelvin :
// ---------------------------------------------------
// Input the temperature in Celsius : 26.85
// The temperature in Celsius : 26.85
// The temperature in Kelvin : 300

#include <iostream>
using namespace std;
 
int main()
{
    float kel, cel;
		cout << "\n\n Convert temperature in Celsius to Kelvin  :\n";
		cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Celsius : ";
    cin >> cel;
    kel = cel + 273.15;
    cout << " The temperature in Celsius : " << cel << endl;
    cout << " The temperature in Kelvin : " << kel << endl;
	cout << endl;
    return 0;
}




// 28. Write a program in C++ to find the area of Scalene Triangle. 
// Sample Output:
// Find the area of Scalene Triangle :
// ----------------------------------------
// Input the length of a side of the triangle : 5
// Input the length of another side of the triangle : 6
// Input the angle between these sides of the triangle : 6
// The area of the Scalene Triangle is : 1.56793
#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float side1, side2, ang1, area;
		cout << "\n\n Find the area of Scalene Triangle :\n";
		cout << "----------------------------------------\n";		
        cout<<" Input the length of a side  of the triangle : ";
    	cin>>side1;
        cout<<" Input the length of another side  of the triangle : ";
    	cin>>side2;
        cout<<" Input the angle between these sides of the triangle : ";
    	cin>>ang1;	
		area = (side1 * side2 * sin((PI/180)*ang1))/2;
        cout<<" The area of the Scalene Triangle is : "<< area << endl;
        cout << endl;
        return 0;
    }


// 29. Write a program in C++ to compute quotient and remainder. 
// Sample Output:
// Compute quotient and remainder :
// -------------------------------------
// Input the dividend : 25
// Input the divisor : 3
// The quotient of the division is : 8
// The remainder of the division is : 1
#include <iostream>
using namespace std;

    int main()
    {
    	int dividend, divisor, quotient,remainder;
		cout << "\n\n Compute quotient and remainder :\n";
		cout << "-------------------------------------\n";		
        cout<<" Input the dividend : ";
    	cin>>dividend;
        cout<<" Input the divisor : ";
    	cin>>divisor;
		quotient=dividend / divisor;
		remainder=dividend % divisor;
        cout<<" The quotient of the division is : "<< quotient << endl;
        cout<<" The remainder of the division is : "<< remainder << endl;
        cout << endl;
        return 0;
    }


// 30. Write a program in C++ to compute the total and average of four numbers. 
// Sample Output:
// Compute the total and average of four numbers :
// ----------------------------------------------------
// Input 1st two numbers (separated by space) : 25 20
// Input last two numbers (separated by space) : 15 25
// The total of four numbers is : 85
// The average of four numbers is : 21.25

#include <iostream>
using namespace std;

    int main()
    {
    	float n1,n2,n3,n4,tot,avrg;
		cout << "\n\n Compute the total and average of four numbers :\n";
		cout << "----------------------------------------------------\n";		
        cout<<" Input 1st two numbers (separated by space) : ";
    	cin>> n1 >> n2;
        cout<<" Input last two numbers (separated by space) : ";
    	cin>> n3 >> n4;
    	tot=n1+n2+n3+n4;
		avrg=tot/4;
        cout<<" The total of four numbers is : "<< tot << endl;
        cout<<" The average of four numbers is : "<< avrg << endl;
        cout << endl;
        return 0;
    }

// 31. Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows. 
// Sample Output:
// Make a rectangular shape by a single digit number :
// --------------------------------------------------------
// Input the number : 5
// 5555
// 5 5
// 5 5
// 5 5
// 5 5
// 5555
#include <iostream>
using namespace std;

    int main()
    {
    	int x;
		cout << "\n\n Make a rectangular shape by a single digit number :\n";
		cout << "--------------------------------------------------------\n";		
        cout<<" Input the number : ";
    	cin>> x;
        cout<<" "<<x<<x<<x<<x<<endl;
        cout<<" "<<x<<" "<<" "<<x<<endl;
        cout<<" "<<x<<" "<<" "<<x<<endl;
        cout<<" "<<x<<" "<<" "<<x<<endl;
        cout<<" "<<x<<" "<<" "<<x<<endl;        
        cout<<" "<<x<<x<<x<<x<<endl;        
        cout << endl;
        return 0;
    }


// 32. Write a program in C++ to check whether a number is positive, negative or zero. 
// Sample Output:
// Check whether a number is positive, negative or zero :
// -----------------------------------------------------------
// Input a number : 8
// The entered number is positive.
#include <iostream>
using namespace std;

int main()
{
    signed long num1 = 0;
	cout << "\n\n Check whether a number is positive, negative or zero :\n";
	cout << "-----------------------------------------------------------\n";  
	cout << " Input a number : ";
    cin >> num1;
    if(num1 > 0)
    {
        cout << " The entered number is positive.\n\n";
    }
    else if(num1 < 0)
    {
        cout << " The entered number is negative.\n\n";
    }
    else
    {
        std::cout << " The number is zero.\n\n";
    }
    return 0;
}


// 33. Write a program in C++ to divide two numbers and print on the screen. 
// Sample Output:
// Divide two numbers and print:
// ----------------------------------
// The quotient of 30 and 10 is : 3
#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Divide two numbers and print:\n";
	cout << "----------------------------------\n";
	int a;
	int b;
	int resdiv;
	a=30;
	b=10;
	resdiv=a/b;
	cout << " The quotient of "<< a << " and "<<b <<" is : "<< resdiv <<"\n\n" ;
}


// 34. Write a C++ program to display the current date and time. 
// Sample Output:
// Display the Current Date and Time :
// ----------------------------------------
// seconds = 57
// minutes = 33
// hours = 12
// day of month = 6
// month of year = 7
// year = 2017
// weekday = 4
// day of year = 186
// daylight savings = 0
// Current Date: 6/7/2017
// Current Time: 12:33:57

#include<iostream>
#include<cmath>
#include <ctime>
using namespace std;

int main()
{

 time_t t = time(NULL);
 tm* tPtr = localtime(&t);
 cout << "\n\n Display the Current Date and Time :\n";
 cout << "----------------------------------------\n";
 cout << " seconds = " << (tPtr->tm_sec) << endl;
 cout << " minutes = " << (tPtr->tm_min) << endl;
 cout << " hours = " << (tPtr->tm_hour) << endl;
 cout << " day of month = " << (tPtr->tm_mday) << endl;
 cout << " month of year = " << (tPtr->tm_mon)+1 << endl;
 cout << " year = " << (tPtr->tm_year)+1900 << endl;
 cout << " weekday = " << (tPtr->tm_wday )<< endl;
 cout << " day of year = " << (tPtr->tm_yday )<< endl;
 cout << " daylight savings = " <<(tPtr->tm_isdst )<< endl;
        cout << endl;
        cout << endl;


        cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
        cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; 
           cout << endl;
    return 0;
}

// 35. Write a program in C++ to compute the specified expressions and print the output. 
// Sample Output:
// Compute the specified expressions and print the output:
// ------------------------------------------------------------
// Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : 2.13889
#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Compute the specified expressions and print the output:\n";
	cout << "------------------------------------------------------------\n";
    cout << " Result of the expression "<<"(25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : "<< (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) <<"\n" ; 
}


// 36. Write a program in C++ to test the Type Casting. 
// Sample Output:
// Formatting the output using type casting:
// ----------------------------------------------
// Print floating-point number in fixed format with 1 decimal place:
// Test explicit type casting :
// 0
// 0.5
// 0.5
// 0.0
// Test implicit type casting :
// 0
// 0
// int implicitly casts to double:
// 4.0
// double truncates to int!:
// 6
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{

    cout << "\n\n Formatting the output using type casting:\n";
	cout << "----------------------------------------------\n"; 
	cout<<"Print floating-point number in fixed format with 1 decimal place: ";
   cout << fixed << setprecision(1);
 cout<<"\nTest explicit type casting :\n";
   int i1 = 4, i2 = 8;
   cout << i1 / i2 << endl;    
   cout << (double)i1 / i2 << endl; 
   cout << i1 / (double)i2 << endl;  
   cout << (double)(i1 / i2) << endl;
 
   double d1 = 5.5, d2 = 6.6;
cout<<"\nTest implicit type casting :\n" ;  
   cout << (int)d1 / i2 << endl;    
   cout << (int)(d1 / i2) << endl;   
    cout <<"\nint implicitly casts to double: \n";
   d1 = i1;    
   cout << d1 << endl;  // 4.0
    cout<<"double truncates to int!: \n";
   i2 = d2;            
   cout << i2 << endl;  // 6
}


// 37. Write a program in C++ to print a mystery series from 1 to 50. 
// Sample Output:
// Print a mystery series:
// -------------------------
// The series are:
// 5 4 2 7 11 10 8 13 17 16 14 19 23 22 20 25 29 28 26 31 35 34 32 37 41 4 0 38 43 47 46 44 49
#include <iostream>
using namespace std;
 
int main() 
{
 cout << "\n\n Print a mystery series:\n";
	cout << "-------------------------\n";
	cout << " The series are: \n";	
   int nm1 = 1;
   while (true) 
   {
      ++nm1;
      if ((nm1 % 3) == 0) 
      continue;
      if (nm1 == 50) 
      break;
      if ((nm1 % 2) == 0) 
      {
         nm1 += 3;
      } 
      else 
      {
         nm1 -= 3;
      }
      cout << nm1 << " ";
   }
   cout << endl;
   return 0;
}


// 38. Write a program in C++ that takes a number as input and prints its multiplication table upto 10. 
// Sample Output:
// Print the multiplication table of a number upto 10:
// --------------------------------------------------------
// Input a number: 5
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// 5 x 5 = 25
// 5 x 6 = 30
// 5 x 7 = 35
// 5 x 8 = 40
// 5 x 9 = 45
// 5 x 10 = 50
#include <iostream>
using namespace std;
 
int main()
{
int a,i=0;
    cout << "\n\n Print the multiplication table of a number upto 10:\n";
	cout << "--------------------------------------------------------\n";
	cout << " Input a number: ";
	cin>> a;
	for (i=1;i<=10;i++)
	{
	cout << a<<" x "<< i << " = "<<a*i<<"\n" ;
	}
	
}


// 39. Write a program in C++ to print the following pattern. 
// Sample Output:

//  xxxxx                                                                                                        
// x     x       x        x                                                                                      
// x             x        x                                                                                      
// x          xxxxxxx  xxxxxxx                                                                                   
// x             x        x                                                                                      
// x     x       x        x                                                                                      
//  xxxxx  

#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Print the following pattern:\n";
	cout << "--------------------------------\n";
	cout << " xxxxx\n";
	cout << "x     x       x        x\n";
	cout << "x             x        x\n";
	cout << "x          xxxxxxx  xxxxxxx\n";
	cout << "x             x        x\n";
	cout << "x     x       x        x\n";
	cout << " xxxxx\n";
}



// 40. Write a program in C++ to print the area and perimeter of a rectangle. 
// Sample Output:
// Print the area and perimeter of a rectangle:
// ----------------------------------------------
// Input the width of the rectangle: 8.5
// Input the height of the rectangle: 5.6
// The area of the rectangle is: 47.6
// The perimeter of the rectangle is: 28.2

#include <iostream>
using namespace std;
 
int main()
{
float ar,peri,width,height=0;
    cout << "\n\n Print the area and perimeter of a rectangle:\n";
	cout << "----------------------------------------------\n";
	cout << " Input the width of the rectangle: ";
	cin>> width;
	cout << " Input the height of the rectangle: ";
	cin>> height;	
	peri=2 * (width+height);
	ar= height * width;
	cout<<"The area of the rectangle is: "<<ar<<"\n";
	cout<<"The perimeter of the rectangle is: "<<peri<<"\n";
	
}

// 41. Write a program in C++ to print an American flag on the screen. 
// Sample Output:

//  Print the American flag:                                              
// -----------------------------                                          
// * * * * * * ==================================                         
//  * * * * *  ==================================                         
// * * * * * * ==================================                         
//  * * * * *  ==================================                         
// * * * * * * ==================================                         
//  * * * * *  ==================================                         
// * * * * * * ==================================                         
//  * * * * *  ==================================                         
// * * * * * * ==================================                         
// ==============================================                         
// ==============================================                         
// ==============================================                         
// ==============================================                         
// ==============================================                         
// ==============================================

#include <iostream>
using namespace std;
 
int main()
{
    cout << "\n\n Print the American flag:\n";
	cout << "-----------------------------\n";
	     cout <<"* * * * * * =================================="<<"\n";
         cout <<" * * * * *  =================================="<<"\n";
         cout <<"* * * * * * =================================="<<"\n";
         cout <<" * * * * *  =================================="<<"\n";
         cout <<"* * * * * * =================================="<<"\n";
         cout <<" * * * * *  =================================="<<"\n";
         cout <<"* * * * * * =================================="<<"\n";
         cout <<" * * * * *  =================================="<<"\n";
         cout <<"* * * * * * =================================="<<"\n";
         cout <<"=============================================="<<"\n";
         cout <<"=============================================="<<"\n";
         cout <<"=============================================="<<"\n";
         cout <<"=============================================="<<"\n";
         cout <<"=============================================="<<"\n";
         cout <<"=============================================="<<"\n";	

}


// 42. Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them. 
// Sample Output:
// Print the name in reverse where last name comes first:
// -----------------------------------------------------------
// Input First Name: Alexandra
// Input Last Name: Abramov
// Name in reverse is: Abramov Alexandra

# include <iostream>
# include <string>
using namespace std;
int main()

{
char fname[30], lname [30];
 cout << "\n\n Print the name in reverse where last name comes first:\n";
 cout << "-----------------------------------------------------------\n";
cout << " Input First Name: ";
cin >> fname;
cout << " Input Last Name: ";
cin >> lname;

cout << " Name in reverse is: "<< lname << " "<< fname <<endl;
	cout << endl;
return 0;
}

// 43. Write a language program which accepts the radius of a circle from the user and compute the area and circumference. 
// Sample Output:
// Find the area and circumference of any circle :
// ----------------------------------------------------
// Input the radius(1/2 of diameter) of a circle : 5
// The area of the circle is : 78.5397
// The circumference of the circle is : 31.4159

#include <iostream>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float radius, area, circum;
		cout << "\n\n Find the area and circumference of any circle :\n";
		cout << "----------------------------------------------------\n";		
        cout<<" Input the radius(1/2 of diameter) of a circle : ";
    	cin>>radius;
	
		circum = 2*PI*radius;
		area = PI*(radius*radius);
        cout<<" The area of the circle is : "<< area << endl;
        cout<<" The circumference of the circle is : "<< circum << endl;		
		
        cout << endl;
        return 0;
    }

// 44. Write a language program to get the volume of a sphere with radius 6. 
// Sample Output:
// Calculate the volume of a sphere :
// ---------------------------------------
// Input the radius of a sphere : 5
// The volume of a sphere is : 523.333
#include <iostream>
using namespace std;

    int main()
    {
    	int rad1;
    	float volsp;
		cout << "\n\n Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the radius of a sphere : ";
    	cin>>rad1;
    	volsp=(4*3.14*rad1*rad1*rad1)/3;
        cout<<" The volume of a sphere is : "<< volsp << endl;
        cout << endl;
        return 0;
    }


// 45. Write a program in C++ to calculate the volume of a cube. 
// Sample Output:
// Calculate the volume of a cube :
// ---------------------------------------
// Input the side of a cube : 5
// The volume of a cube is : 125
#include <iostream>
using namespace std;

    int main()
    {
    	int sid1;
    	float volcu;
		cout << "\n\n Calculate the volume of a cube :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the side of a cube : ";
    	cin>>sid1;
    	volcu=(sid1*sid1*sid1);
        cout<<" The volume of a cube is : "<< volcu << endl;
        cout << endl;
        return 0;
    }


// 46. Write a program in C++ to calculate the volume of a cylinder. 
// Sample Output:
// Calculate the volume of a cylinder :
// -----------------------------------------
// Input the radius of the cylinder : 4
// Input the height of the cylinder : 8
// The volume of a cylinder is : 401.92



#include <iostream>
using namespace std;

    int main()
    {
    	int rad1,hgt;
    	float volcy;
		cout << "\n\n Calculate the volume of a cylinder :\n";
		cout << "-----------------------------------------\n";		
        cout<<" Input the radius of the cylinder : ";
    	cin>>rad1;
		cout<<" Input the height of the cylinder : ";
    	cin>>hgt;
    	volcy=(3.14*rad1*rad1*hgt);
        cout<<" The volume of a cylinder is : "<< volcy << endl;
        cout << endl;
        return 0;
    }

// 47. Write a program in C++ to find the area of any triangle using Heron's Formula. 
// Sample Output:
// Find the area of any triangle using Heron's Formula :
// ----------------------------------------------------------
// Input the length of 1st side of the triangle : 5
// Input the length of 2nd side of the triangle : 6
// Input the length of 3rd side of the triangle : 7
// The area of the triangle is : 14.6969

#include <iostream>
#include <math.h>
using namespace std;

    int main()
    {
    	float side1, side2, side3, area, s;
		cout << "\n\n Find the area of any triangle using Heron's Formula :\n";
		cout << "----------------------------------------------------------\n";		
        cout<<" Input the length of 1st side  of the triangle : ";
    	cin>>side1;
        cout<<" Input the length of 2nd side  of the triangle : ";
    	cin>>side2;
        cout<<" Input the length of 3rd side  of the triangle : ";
    	cin>>side3;	
		s = (side1+side2+side3)/2;
		area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        cout<<" The area of the triangle is : "<< area << endl;
        cout << endl;
        return 0;
    }




// 48. Write a program in C++ which swap the values of two variables not using third variable. 
// Sample Output:
// Swap two numbers without using third variable:
// ---------------------------------------------------
// Input 1st number : 25
// Input 2nd number : 20
// After swapping the 1st number is : 20
// After swapping the 2nd number is : 25

#include <iostream>
using namespace std;
 
int main()
{
	cout << "\n\n Swap two numbers without using third variable:\n";
	cout << "---------------------------------------------------\n";
	int num1, num2, temp;
	cout << " Input 1st number : ";
	cin >> num1 ;
	cout << " Input 2nd number : ";
	cin >> num2;	
	num2=num2+num1;
	num1=num2-num1;
	num2=num2-num1;
    cout << " After swapping the 1st number is : "<< num1 <<"\n" ; 
    cout << " After swapping the 2nd number is : "<< num2 <<"\n\n" ; 	
}

// 49. Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character. 
// Sample Output:
// Print code (ASCII code / Unicode code etc.) of a given character:
// -----------------------------------------------------------------------
// Input a character: a
// The ASCII value of a is: 97
// The character for the ASCII value 97 is: a

#include <iostream>
using namespace std;
int main() 
{
    char sing_ch; 
	cout << "\n\n Print code (ASCII code / Unicode code etc.) of a  given character:\n";
	cout << "-----------------------------------------------------------------------\n";
 	cout << " Input a character: ";
	    cin >> sing_ch;	
	
  cout <<" The ASCII value of "<<sing_ch<<" is: " <<(int)sing_ch << endl; 
  cout <<" The character for the ASCII value "<<(int)sing_ch <<" is: "<<(char)((int)sing_ch) << endl<< endl; 
  return 0;
}

// 50. Write a program in C++ to enter length in centimeter and convert it into meter and kilometer. 
// Sample Output:
// Convert centimeter into meter and kilometer :
// --------------------------------------------------
// Input the distance in centimeter : 250000
// The distance in meter is: 2500
// The distance in kilometer is: 2.5

#include<iostream>
using namespace std;

int main()
{
    float km, met,cent;
	cout << "\n\n Convert centimeter into meter and kilometer :\n";
	cout << "--------------------------------------------------\n";	
    cout << " Input the distance in centimeter : ";
    cin >> cent;
	met = (cent/100); 
	km = (cent/100000);
	cout << " The distance in meter is: "<< met << endl;
	cout << " The distance in kilometer is: "<< km << endl;	
	cout << endl;
    return 0;
}

// 51. Write a program in C++ that converts kilometers per hour to miles per hour. 
// Sample Output:
// Convert kilometers per hour to miles per hour :
// ----------------------------------------------------
// Input the distance in kilometer : 5
// The 5 Km./hr. means 3.10686 Miles/hr.
#include<iostream>
using namespace std;

int main()
{
    float kmph, miph;
	cout << "\n\n Convert kilometers per hour to miles per hour :\n";
	cout << "----------------------------------------------------\n";	
    cout << " Input the distance in kilometer : ";
    cin >> kmph;
	miph = (kmph * 0.6213712); 
    cout << " The "<< kmph <<" Km./hr. means "<< miph << " Miles/hr." << endl;
	cout << endl;
    return 0;
}


// 52. Write a program in C++ to enter two angles of a triangle and find the third angle. 
// Sample Output:
// Find the third angle of a triangle :
// -----------------------------------------
// Input the 1st angle of the triangle : 35
// Input the 2nd angle of the triangle : 35
// The 3rd of the triangle is : 110
#include<iostream>
using namespace std;
 
int main()
{
    float ang1, ang2, ang3;
	cout << "\n\n Find the third angle of a triangle :\n";
	cout << "-----------------------------------------\n";	
    cout<<" Input the 1st angle of the triangle : ";
    cin>>ang1;
    cout<<" Input the 2nd angle of the triangle : ";
    cin>>ang2;
	ang3=180-(ang1+ang2);
    cout << " The 3rd of the triangle is : " << ang3 << endl;
	cout << endl;
    return 0;
}


// 53. Write a program in C++ to calculate area of an equilateral triangle. 
// Sample Output:
// Calculate the area of the Equilateral Triangle :
// ----------------------------------------------------
// Input the value of the side of the equilateral triangle: 5
// The area of equilateral triangle is: 10.8253

#include<iostream>
using namespace std;
#include<math.h>

main(){

float s1;
 float area;
		cout << "\n\n Calculate the area of the Equilateral Triangle :\n";
		cout << " ----------------------------------------------------\n"; 

cout<<" Input the value of the side of the equilateral triangle: ";
 cin>>s1;
area = sqrt(3)/4*(s1*s1);
 cout<<" The area of equilateral triangle is: "<<area<<endl;
        cout << endl;
 return 0;
}

// 54. Write a program in C++ to enter P, T, R and calculate Simple Interest. 
// Sample Output:
// Calculate the Simple Interest :
// -----------------------------------
// Input the Principle: 20000
// Input the Rate of Interest: 10
// Input the Time: 1.5
// The Simple interest for the amount 20000 for 1 years @ 10 % is: 2000

#include<iostream>
using namespace std;

int main()
{
	int p,r,t,i;
		cout << "\n\n Calculate the Simple Interest :\n";
		cout << " -----------------------------------\n"; 	
	cout<<" Input the Principle: ";
	cin>>p;
	cout<<" Input the Rate of Interest: ";
	cin>>r;
	cout<<" Input the Time: ";
	cin>>t;
	i=(p*r*t)/100;
	cout<<" The Simple interest for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<i;
        cout << endl;
	return 0;
}

// 55. Write a program in C++ to enter P, T, R and calculate Compound Interest. 
// Sample Output:
// Calculate the Compound Interest :
// ------------------------------------- Input the Principle: 20000
// Input the Rate of Interest: 10
// Input the Time: 1.5
// The Interest after compounded for the amount 20000 for 1.5 years @ 10
// % is: 3073.8 The total amount after compounded for the amount 20000 for 1.5 years @
// 10 % is: 23073.8
#include<iostream>
#include<math.h>
 
using namespace std;
 
int main()
{
    float p,r,t,cp,ci;
		cout << "\n\n Calculate the Compound Interest :\n";
		cout << " -------------------------------------\n"; 	
	cout<<" Input the Principle: ";
	cin>>p;
	cout<<" Input the Rate of Interest: ";
	cin>>r;
	cout<<" Input the Time: ";
	cin>>t;	
    ci=p*pow((1+r/100),t)-p;	
    cp=p*pow((1+r/100),t);
    cout<<" The Interest after compounded for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<ci;    
    cout << endl; 
	cout<<" The total amount after compounded for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<cp;    
    cout << endl; 
       cout << endl;
    return 0;
}


// 56. Write a program in C++ to show the manipulation of a string. 
// Sample Output:
// Show the manipulation of a string:
// -------------------------------------
// The string:: welcome, w3resource
// The length of the string:: 19
// The char at index 1 of the string:: e
// The char at index 1 of the string [using array ]:: e
// Is the string empty:: 0
// Retrieve the sub-string from 3rd position for 4 characters:: come
// The sub-string replace by 'went':: welwent, w3resource
// Append a string 'end' at last of the string:: welwent, w3resource end
// Append a string 'end' at last of the string using operator:: welwent, w3resource end end
// The string 'insert' inserting at 3rd position of the string:: wel inse rt went, w3resource end
// The new string is:: wel insert went, w3resource end
// Input a sentence:: The quick brown fox jumps over the lazy dog.
// The quick brown fox jumps over the lazy dog.

#include <iostream>
#include <string>    
using namespace std;
 
int main() 
{
		cout << "\n\n Show the manipulation of a string:\n";
		cout << " -------------------------------------\n"; 
   string txt = "welcome, w3resource";
   cout <<" The string:: "<< txt << endl;
   cout <<" The length of the string:: "<< txt.length() << endl;  
   cout <<" The char at index 1 of the string:: "<< txt.at(1) << endl;     
   cout <<" The char at index 1 of the string [using array ]:: "<< txt[1] << endl;        
   cout <<" Is the string empty:: "<< txt.empty() << endl;   
   cout <<" Retrieve the sub-string from 3rd position for 4 characters:: "<< txt.substr(3, 4) << endl; 
   cout <<" The sub-string replace by 'went':: "<< txt.replace(3, 4, "went") << endl; 
   cout <<" Append a string ' end' at last of the string:: "<< txt.append(" end") << endl;  
   cout <<" Append a string ' end' at last of the string using operator:: "<< txt + " end" << endl;  
   cout <<" The string ' insert ' inserting at 3rd position of the string:: "<< txt.insert(3, " insert ") << endl;  
 
   string txt1;
   txt1 = txt;   
   cout <<" The new string is:: "<< txt1 << endl;
 
   cout << " Input a sentence:: ";
   getline(cin, txt);   
   cout << txt << endl<< endl;
}

// 57. Write a program in C++ to print the area of a hexagon. 
// Sample Output:
// Print the area of a hexagon:
// ---------------------------------
// Input the side of the hexagon: 6
// The area of the hexagon is: 93.5307

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
float ar,s;
    cout << "\n\n Print the area of a hexagon:\n";
	cout << "---------------------------------\n";
	cout << " Input the side of the hexagon: ";
	cin>> s;
	ar= (6*(s*s))/(4*tan(M_PI/6));
	cout<<"The area of the hexagon is: "<<ar<<"\n";

}

// 58. Write a program in C++ to print the area of a polygon. 
// Sample Output:
// Print the area of a polygon:
// ---------------------------------
// Input the number of sides of the polygon: 7
// Input the length of each side of the polygon: 6
// The area of the polygon is: 130.821

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
float ar,s,n;
    cout << "\n\n Print the area of a polygon:\n";
	cout << "---------------------------------\n";
	cout << " Input the number of sides of the polygon: ";
	cin>> n;
	cout << " Input the length of each side of the polygon: ";
	cin>> s;	
	ar= (n * (s * s)) / (4.0 * tan((M_PI / n)));
	cout<<" The area of the ploygon is: "<<ar<<"\n";

}

// 59. Write a program in C++ to compute the distance between two points on the surface of earth. 
// Sample Output:
// Print the the distance between two points on the surface of earth:
// -----------------------------------------------------------------------
// Input the latitude of coordinate 1: 25
// Input the longitude of coordinate 1: 35
// Input the latitude of coordinate 2: 35.5
// Input the longitude of coordinate 2: 25.5
// The distance between those points is: 1480.08

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
double d,la1,la2,lo1,lo2,er,r;
    cout << "\n\n Print the the distance between two points on the surface of earth:\n";
	cout << "-----------------------------------------------------------------------\n";
	cout << " Input the latitude of coordinate 1: ";
	cin>> la1;
	cout << " Input the longitude of coordinate 1: ";
	cin>> lo1;
	cout << " Input the latitude of coordinate 2: ";
	cin>> la2;
	cout << " Input the longitude of coordinate 2: ";
	cin>> lo2;	
	r=0.01745327; //Pi/180=3.14159/180
	la1=la1*r;
	la2=la2*r;
	lo1=lo1*r;
	lo2=lo2*r;
	er=6371.01; //Kilometers
	d=er * acos((sin(la1)*sin(la2)) + (cos(la1)*cos(la2)*cos(lo1 - lo2)));
	cout<<" The distance between those points is: "<<d<<"\n";
}

// 60. Write a program in C++ to add two binary numbers. 
// Sample Output:
// Addition of two binary numbers:
// -----------------------------------
// Input the 1st binary number: 1010
// Input the 2nd binary number: 0011
// The sum of two binary numbers is: 1101
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
	long bn1,bn2;
	int i=0, r=0;
	int sum[20]; 
    cout << "\n\n Addition of two binary numbers:\n";
	cout << "-----------------------------------\n";
	cout << " Input the 1st binary number: ";
	cin>> bn1;
	cout << " Input the 2nd binary number: ";
	cin>> bn2;
  while (bn1 != 0 || bn2 != 0) 
  {
   sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
   r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
   bn1 = bn1 / 10;
   bn2 = bn2 / 10;
  }
  if (r != 0) {
   sum[i++] = r;
  }
  --i;
  cout<<" The sum of two binary numbers is: ";
  while (i >= 0) {
   cout<<(sum[i--]);
  }
   cout<<("\n");  
 }  


// 61. Write a C++ program to swap first and last digits of any number. 
// Sample Output:
// Input any number: 12345
// The number after swapping the first and last digits are: 52341
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, first, last, sum, digits, nn, a, b;
    cout << "\n\n Find the number after swapping the first and last digits:\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    digits = (int)log10(n);
    first = n / pow(10, digits);
    last = n % 10;
    a = first * (pow(10, digits));
    b = n % a;
    n = b / 10;
    nn = last * (pow(10, digits)) + (n * 10 + first);
    cout << " The number after swaping the first and last digits are: " << nn << endl;
}  


// 62. Write a C++ program to which reads an given integer n and prints a twin prime which has the maximum size among twin primes less than or equals to n. 
// According to wikipedia "A twin prime is a prime number that is either 2 less or 2 more than another prime number" for example, either member of the twin prime pair (41, 43). In other words, a twin prime is a prime that has a prime gap of two".

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int num_primes = 10005;
    bool primes[num_primes];
    for (int i = 2; i != num_primes; ++i) {
        primes[i] = true;
    }

    for (int i = 2; i != int(sqrt(num_primes)); ++i) {
        if (primes[i]) {        
            for (int j = 2; i * j < num_primes; ++j) {
                primes[i*j] = false;
            }
        }
    }
    int n;
	cout << "Input an integer:\n";
    cin >> n;
	cout << "Twin primes are:\n";
        for (int i = n; i - 2 >= 0; --i) {
            if (primes[i] && primes[i-2]) {
                cout << i-2 << " " << i << endl;
                break;
            }
    }

    return 0;
}

// 63. Write a C++ program which prints three highest numbers from a list of numbers in descending order. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    sort(nums.rbegin(), nums.rend());

    for (int i = 0; i != 3; ++i) {
        cout << nums[i] << endl;
    }
    return 0;
}

// 64. Write a C++ program to compute the sum of the two given integers and count the number of digits of the sum value. 



#include <iostream>
#include <sstream>
using namespace std;
int main() {
    int x, y;
    while (cin >> x >> y) {
        stringstream str1;
        str1 << x + y;
        cout << str1.str().size() << endl;
	}
    return 0;
}


// 65. Write a C++ program to check whether given length of three side form a right triangle. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  
    vector<int> triangle_sides(3);

        cin >> triangle_sides[0] >> triangle_sides[1] >> triangle_sides[2];

        sort(triangle_sides.begin(), triangle_sides.end());

        if (triangle_sides[0]*triangle_sides[0] + triangle_sides[1]*triangle_sides[1] == triangle_sides[2]*triangle_sides[2]) 
        {
            cout << "Yes" << endl; 
        }
        else 
        {
            cout << "No" << endl;
        }
 
    return 0;
}

// 66. Write a C++ program to add all the numbers from 1 to a given number. 
// Add 1 to 4: 10
// Add 1 to 100: 5050

#include <iostream>
using namespace std;

int Add_1_to_given_number(int n) {

	int total = 0;

	for (int x = 1; x <= n; x++)
	{
		total += x;
	}
	return total;
}

int main() {

	cout << "\nAdd 1 to 4: " << Add_1_to_given_number(4);
	cout << "\nAdd 1 to 100: " << Add_1_to_given_number(100);
	return 0;
}


// 67. Write a C++ program to which prints the central coordinate and the radius of a circumscribed circle of a triangle which is created by three points on the plane surface.
 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
   double a, b, c, x1, y1, x2, y2, x3, y3, xp, yp, d, radius;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
            a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
            b = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
            c = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
            radius = (a*b*c) / (sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
            d = 2*(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
            xp = ((x1*x1 + y1*y1)*(y2-y3) + (x2*x2 + y2*y2)*(y3-y1) + (x3*x3 + y3*y3)*(y1-y2))/d;
            yp = ((x1*x1 + y1*y1)*(x3-x2) + (x2*x2 + y2*y2)*(x1-x3) + (x3*x3 + y3*y3)*(x2-x1))/d;
            cout << fixed << setprecision(3) << "Central coordinate of the circumscribed circle: (" << xp << ", " << yp << ")\nRadius: " << radius << endl;
         }
   	return 0;
}



// 68. Write a C++ program to read seven numbers and sorts them in descending order. 


#include <iostream>
using namespace std;

int main() {
    int num[7];
    for (int i = 0; i != 7; ++i) {
        cin >> num[i];
    }
    sort(num, num+7);
    cout << " " << num[6]  << " " << num[5]  << " " << num[4]  << " " << num[3]  << " " << num[2] << " " << num[1] << " " << num[0];
    return 0;
}


// 69. Write a C++ program to read an integer n and prints the factorial of n, assume that n = 10. 
#include <iostream>
using namespace std;

long long factorial(int num) {
    if (num == 0) {
        return 1;
    }
    else {
        return num * factorial(num-1);
    }
}

int main() {
    int num;
    cin >> num;
    cout << factorial(num) << endl;
}


// 70. Write a C++ program to replace all the lower-case letters of a given string with the corresponding capital letters.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    cout << text << endl;
    return 0;
}


// 71. Write a C++ program which reads a sequence of integers and prints mode values of the sequence. The number of integers is greater than or equals to 1 and less than or equals to 100. 
// Note: The mode of a set of data values is the value that appears most often.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums(101, 0);
    int n, mode=0;

    while (cin >> n) {
        nums[n]++;
        if (nums[n] > mode) { mode=nums[n]; }
      }
   
    for (int i = 0; i != nums.size(); ++i) {
        if (nums[i] == mode) 
        {
            cout << i << endl; 
            
        }
    }

    return 0;
}

// 72. Write a C++ program to which reads n digits chosen from 0 to 9 and counts the number of combinations where the sum of the digits equals to given number. Do not use the same digits in a combination. 
// For example, the combinations where n = 2 and s = 5 are as follows:
// 0 + 5 = 5
// 1 + 4 = 5
// 3 + 2 = 5

#include <string.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    const int MAX_NUM  = 9;
    const int MAX_NOS = 9;
    const int MAX_SUM_VAL = 100;
 
    int n, s, dp[MAX_NOS + 1][MAX_NUM + 1][MAX_SUM_VAL + 1];
 
    long long SUM_VAL = 0;
 
    memset(dp, 0, sizeof(dp));
 
    for (int i = 0; i < MAX_NUM; i++)
    {
        dp[1][i][i] = 1;
    }
 
    for (int N = 2; N <= MAX_NOS; N++)
    {
        for (int i = 1; i <= MAX_NUM; i++)
        {
            for (int j = 1; j <= MAX_SUM_VAL; j++)
            {
                if (j - i >= 0)
                {
                    for (int k = 0; k < i; k++)
                    {
                        dp[N][i][j] += dp[N - 1][k][j - i];
                    }
                }
            }
        }
    }
 
    cin >> n >> s;
 
      SUM_VAL = 0;
 
        for (int i = 0; i <= MAX_NUM; i++)
        {
            SUM_VAL += dp[n][i][s];
        }
 
        cout << "Number of digits " << n << " and Sum = " << s;
        cout << "\nNumber of pairs: " <<SUM_VAL << endl;
  
 
    return 0;
}

// 73. Write a C++ program that accepts sales unit price and sales quantity of various items and compute total sales amount and the average sales quantity. All input values must greater than or equal to 0 and less than or equal to 1,000, and the number of pairs of sales unit and sales quantity does not exceed 100. If a fraction occurs in the average of the sales quantity, round the first decimal place. 

#include <iostream>
 
using namespace std;
 
int main()
{
    int sale_price, qty, ctr = 0, sum1 = 0, sum2 = 0;
    cout << "Input Sales Price and Sales Quantity: ";
    while (cin >> sale_price >> qty)
    {
        sum1 += sale_price * qty;
        sum2 += qty;
 
        ctr++;
    }
 
    cout << "\nTotal of the sales amount and the average of the sales quantity:\n";
    cout << sum1 << endl << static_cast<int>(static_cast<double>(sum2) / ctr + 0.5) << endl;
 
    return 0;
}

// 74. Write a C++ program that accepts various numbers and compute the difference between the highest number and the lowest number. All input numbers should be real numbers between 0 and 1,000,000. The output (real number) may include an error of 0.01 or less. 

#include <iostream>
using namespace std;
int main()
{
    double num[52];
    int c=0;
    while(cin>>num[c++]);
    sort(num, num+c-1);
    cout << "Difference between the highest number and the lowest number: ";
    cout<<num[c-2]-num[0]<<endl;
}

// 75. Write a C++ program to compute the sum of the specified number of Prime numbers. 
// For example when n = 7,
// s = 2 + 3 + 5 + 7 + 11 + 13 + 17 = 58.
#include <iostream>
using namespace std;
 int main()
{
  const int MAX = 1000000;
  const int sqrtMAX = 1000;
  int n;
  int b[MAX+1] = {0};
  int i, j;
  int sum;
  int count;
  b[0] = 1;
  b[1] = 1;
  cin>> n;
  for(i=4; i<=MAX; i+=2)
      b[i] = 1;
  for(i=3; i<=sqrtMAX; i+=2)
      for(j=i+i; j<=MAX; j+=i)
          b[j] = 1;
 
      if(n == 0)
          return 0;
      sum = 0;
      count = 0;
      for(i=2; count<n; i++) {
        if(b[i]==0) {
              count++;
              sum+=i;
        }
    }
   cout << "Sum of the  first " << n << " Prime numbers is: " << sum;
  return 0;
}


// 76. An even number of 4 or more can be represented by the sum of two prime numbers. This is called Goldbach expectation, and it is confirmed that it is correct up to a considerably large number by computer calculation. For example, 10 can be expressed as the sum of two prime numbers 7 + 3, 5 + 5. Write a C++ program that accept an integer (n) from the user and outputs the number of combinations that express n as a sum of two prime numbers. 
// Note: n should be greater than or equal to 4 and less than or equal to 50,000.

#include <iostream>
using namespace std;
 
int search(const int array[], int high, int key)
{
    int low_num = 0;
    int mid_num;
    int n=-1;
    while(low_num<=high){
        mid_num = (low_num + high)/2;
        if( array[mid_num] == key ){
            n = mid_num;
            break;
        }else if ( array[mid_num] < key){
            low_num = mid_num + 1;
        }else{
            high = mid_num -1;
        }
    }
    return(n);
}
 
int main(void){
    int prime_num[5136];
    prime_num[1] = 2;
    prime_num[2] = 3;
    int ptr=3;
    for(int num=5; num<=50000; num++){
        bool f = false;
        for(int i=1; i<ptr; i++){
            if(prime_num[i]*prime_num[i] > num){
                break;
            }
            if(num%prime_num[i]==0) {
                f = true;
                break;
            }
        }
        if(!f) {
            prime_num[ptr++] = num;
        }
    }
    prime_num[ptr] = 50001;
    int n;
    while(cin >> n){
        if(!n) break;
        int count = 0;
        if(n%2==0){
            for(int i=1; prime_num[i] <= n/2; i++){
                    if(search(prime_num,ptr,n-prime_num[i])!=-1) count++;
            }
        }else{
            if(search(prime_num,ptr,n-2)!=-1) count++;
        }
        cout << "Input number: " << n;
        cout << "\nNumber of combinations: " << count << endl;
    }
    return 0;
}

// 77. There are four different points on a plane: A(x1, y1), B(x2, y2), C(x3, y3) and D(x4, y4).
// Write a C++ program to check whether two straight lines AB and CD are orthogonal or not. 
// Input:
// 0 6
// 5 6
// 3 8
// 3 2
// Output:
// yes

#include <iostream>
using namespace std;
int main(void)
{
    double x[4],y[4];
    while(cin >> x[0] >> y[0]){
        for(int i=1; i<4; i++){
            cin >> x[i] >> y[i];
        }
        if( (x[1]-x[0])*(x[3]-x[2])+(y[3]-y[2])*(y[1]-y[0]) == 0 )
        {
            cout << "Yes, AB and CD are orthogonal." << endl;
        }
        else
        {
            cout << "Yes, AB and CD are not orthogonal." << endl;
        }
    }
    return 0;
}

// 78. Write a C++ program to sum of all positive integers in a sentence. 
// Sample string: There are 12 chairs, 15 desks, 1 blackboard and 2 fans.
// Output: 30

#include <iostream>
using namespace std;
 
int main()
{
    string str1;
    int sum_num = 0, num;
     
    while (getline(cin, str1)) {
        for (int i = 0; i < (int)str1.size(); i++) {
            if (isdigit(str1[i])) continue;
            else {
                str1[i] = ' ';
            }
        }
 
        stringstream abc(str1);
        while (abc >> num) {
            sum_num += num;
        }
    }
    cout << "Sum of all positive integers: " << sum_num << endl;
    return 0;
}

// 79. Write a C++ program to display all the leap years between two given years. If there is no leap year in the given period,display a suitable message. 
// Note: Range of the two given years: ( 0 < year1 = year2 < 3,000).
#include <iostream>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)
using namespace std;
 
inline bool isleap(int year){
    if(year%400==0)
        return true;
    if(year%100==0)
        return false;
    if(year%4==0)
        return true;
    return false;
}
 
int main(void){
    int a,b;
    bool space=false;
    cin >> a >> b;
    cout << "Input years: " << a << " - " << b;
    cout << "\nLeap years between said years:\n";
        if(space) puts("");
        bool ans=false;
        range(i,a,b+1) if(isleap(i)) cout << i << endl,ans=true;
        if(!ans) puts("No leap years.");
        space=true;
   
    return 0;
}


// 80. Write a C++ program that accepts n different numbers (0 to 100) and s which is equal to the sum of the n different numbers. 
// Your job is to find the number of combination of n numbers and the same number can not be used for one combination.
#include <iostream>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)
using namespace std;
 
 
int n,s;
 
long long int dp[10][1010];
 
int main(void){
    dp[0][0]=1LL;
    rep(i,101){
        for(int j=8;j>=0;j--)rep(k,1010){
            if(k+i<=1010)
                dp[j+1][k+i]+=dp[j][k];
        }
    }
    cout << "Input n and s: ";
    cin >> n >> s;
    cout << "\nNumber of combination: ";
    cout << dp[n][s] << endl;

    return 0;
}


// 81. Write a C++ program to which replace all the words "dog" with "cat" 
// Sample Text: The quick brown fox jumps over the lazy dog. You can assume that the number of characters in a text is less than or equal to 1000.

#include <iostream>
using namespace std;
  
int main()
{
    string str;
    getline(cin, str);
    cout << "Original text: " << str;
        for (int j = 0; j < (int)str.size(); j++) {
            string key = str.substr(j, 3), repl;
            if (key == "fox") {
                repl = "cat";
                for (int k = 0; k < 3; k++) {
                    str[j+k] = repl[k];
                }
            }
        }
       cout <<"\nNew text: " << str << endl;
   
    return 0;
}

// 82. Write a C++ program which reads a list of pairs of a word and a page number, and prints the word and a list of the corresponding page numbers.

#include <iostream>
using namespace std;
typedef pair<string, int> P;
  
int main()
{
    string str;
    int page, ctr = 0;
    vector<P> v_data;
  
    while (cin >> str >> page) {
    v_data.push_back(P(str, page));
    ctr++;
    }
  
    sort(v_data.begin(), v_data.end());
    for (int i = 0; i < ctr; i++) {
    if (i == 0) {
        cout << v_data[i].first << endl;
        cout << v_data[i].second;
        continue;
    }
  
    if (v_data[i].first == v_data[i-1].first && v_data[i].second!=v_data[i-1].second) {
        cout << ' ' << v_data[i].second;
        continue;
    } else {
            cout << endl;
        }
    cout << v_data[i].first << endl;
    cout << v_data[i].second;
    }
    puts("");
    return 0;
}

// 83. Write a C++ program to convert a given number into hours and minutes. Separate the number of hours and minutes with a colon. 
// For example if a given number is 67 the output should be 1:7
#include <iostream>
#include <string>
using namespace std;
void Time_Convert(int num) {
	bool flag;
	int hr = 0;
	do
	{
		flag = false;
		if (num >= 60)
		{
			hr++;
			num -= 60;
			flag = true;
		}
	} while (flag);
	cout << "\nH:M " << hr << ":" << num << endl;
}

int main() {
	Time_Convert(67);
	Time_Convert(60);
	Time_Convert(120);
	Time_Convert(40);
	return 0;
}


// 84. Write a C++ program to check whether the sequence of the numbers in a given array is a "Arithmetic" or "Geometric" sequence. Return -1 if the sequenc is not "Arithmetic" or "Geometric". 
// From Wikipedia
// In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant. Difference here means the second minus the first. For instance, the sequence 5, 7, 9, 11, 13, 15, . . . is an arithmetic progression with common difference of 2.
// In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio. For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.
// Example:
// Sample Input: int nums1[] = { 1, 3, 5, 7 }
// Sample Output: Arithmetic sequence
#include <iostream>
#include <string>

using namespace std;

string arith_geo_sequence(int nums[], const int size) {

	int diff_arith = 0, diff_geo = 0;
	bool arith_flag = true, geo_flag = true;

	diff_arith = nums[1] - nums[0];
	diff_geo = nums[1] / nums[0];

	for (int y = 0; y < size-1 && arith_flag; y++)
	{
		arith_flag = false;
		
		if (nums[y] + diff_arith == nums[y + 1])
		{
			arith_flag = true;
		}
	}
	for (int z = 0; z < size - 1 && geo_flag; z++)
	{
		geo_flag = false;
		
		if (nums[z] * diff_geo == nums[z + 1])
		{
			geo_flag = true;
		}
	}

	if (arith_flag)
	{
		return "Arithmetic sequence";
	}
	else if (geo_flag)
	{
		return "Geometric sequence";
	}
	else
	{
		return "Not Arithmetic/Geometric sequence";
	}
}

int main() {

	int nums1[] = { 1, 3, 5, 7 };
	int nums2[] = { 2, 4, 8, 16, 32 };
	int nums3[] = { 1, 2, 3, 4, 5, 6, 8 };
	int nums4[] = { 3, 6, 9, 12 };
	cout << arith_geo_sequence(nums1, sizeof(nums1) / sizeof(nums1[0])) << endl;
	cout << arith_geo_sequence(nums2, sizeof(nums2) / sizeof(nums2[0])) << endl;
	cout << arith_geo_sequence(nums3, sizeof(nums3) / sizeof(nums3[0])) << endl;
	cout << arith_geo_sequence(nums4, sizeof(nums4) / sizeof(nums4[0])) << endl;
	return 0;
}


// 85. Write a C++ program find the total number of minutes between two given times (formatted with a colon and am or pm). 
// Example:
// Sample Input: Minutes between 12:01AM to 12:00PM:
// Sample Output: Minutes between 12:01AM to 12:00PM: 1439


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int count_minutes(string time_str) {

	string num1, num2;
	string hr1, hr2, min1, min2;
	int index = time_str.find('-');
	bool colon = false;

	for (int x = 0; x < time_str.length(); x++)
	{
		if (x >= index)
		{
			colon = false;
			for (x; x < time_str.length(); x++)
			{
				if (time_str[x] == ':')
				{
					colon = true;
					continue;
				}

				if (time_str[x] == 'A' || time_str[x] == 'P')
				{
					num2.push_back(time_str[x]);
					num2.push_back(time_str[x + 1]);
				}

				if (colon && isdigit(time_str[x]))
				{
					min2.push_back(time_str[x]);
				}
				else if (isdigit(time_str[x]))
				{
					hr2.push_back(time_str[x]);
				}
			}
		}
		else
		{
			if (time_str[x] == ':')
			{
				colon = true;
				continue;
			}

			if (time_str[x] == 'A' || time_str[x] == 'P')
			{
				num1.push_back(time_str[x]);
				num1.push_back(time_str[x + 1]);
			}

			if (colon && isdigit(time_str[x]))
			{
				min1.push_back(time_str[x]);
			}
			else if (isdigit(time_str[x]))
			{
				hr1.push_back(time_str[x]);
			}
		}
	}

	int hr = 0;
	if (stoi(hr1) == stoi(hr2) && num1 == num2 && stoi(min1) > stoi(min2))
	{
		hr = 24 - (stoi(hr1) - stoi(hr2));
	}
	else if (stoi(hr1) > stoi(hr2) && num1 == num2 && stoi(min1) < stoi(min2))
	{
		hr = 24 - (stoi(hr1) - stoi(hr2));
	}
	else if (num1 == num2 || (hr2 == "12" && hr1 != "12"))
	{
		hr = stoi(hr2) - stoi(hr1);
	}
	else
	{
		hr = (12 - stoi(hr1)) + stoi(hr2);
	}

	int time;
	if (min1 != "00")
	{
		time = (hr * 60 - stoi(min1)) + stoi(min2);
	}
	else
	{
		time = (hr * 60 + stoi(min1)) + stoi(min2);
	}

	return time;
}

int main() {

	cout << "Minutes between 12:01AM to 12:00PM: "<< count_minutes("12:01PM-12:00PM") << endl;
	cout << "Minutes between 2:12AM to 2:8AM: "<< count_minutes("2:12AM-2:8AM") << endl;
	cout << "Minutes between 1:04PM to 1:29PM: "<< count_minutes("1:04PM-1:29PM") << endl;
	cout << "Minutes between 2:00PM to 10:00PM: "<< count_minutes("2:00PM-10:00PM") << endl;
	return 0;
}

