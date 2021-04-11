// 1. Write a program in C++ to find the first 10 natural numbers. 
// Sample output:
// The natural numbers are:
// 1 2 3 4 5 6 7 8 9 10

#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "\n\n Find the first 10 natural numbers:\n";
    cout << "---------------------------------------\n";
    cout << " The natural numbers are: \n";
    for (i = 1; i <= 10; i++) 
    {
        cout << i << " ";
    }
    cout << endl;
}

// 2. Write a program in C++ to find the sum of first 10 natural numbers. 
// Sample Output:
// Find the first 10 natural numbers:
// ---------------------------------------
// The natural numbers are:
// 1 2 3 4 5 6 7 8 9 10
// The sum of first 10 natural numbers: 55

#include <iostream>
using namespace std;
int main()
{
    int i,sum=0;
    cout << "\n\n Find the first 10 natural numbers:\n";
    cout << "---------------------------------------\n";
    cout << " The natural numbers are: \n";
    for (i = 1; i <= 10; i++) 
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n The sum of first 10 natural numbers: "<<sum << endl;
}

// 3. Write a program in C++ to display n terms of natural number and their sum. 
// Sample Output:
// Input a number of terms: 7
// The natural numbers upto 7th terms are:
// 1 2 3 4 5 6 7
// The sum of the natural numbers is: 28

#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout << "\n\n Display n terms of natural number and their sum:\n";
    cout << "---------------------------------------\n";
	cout << " Input a number of terms: ";
	cin>> n;		
    cout << " The natural numbers upto "<<n<<"th terms are: \n";
    for (i = 1; i <= n; i++) 
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n The sum of the natural numbers is: "<<sum << endl;
}

// 4. Write a program in C++ to find the perfect numbers between 1 and 500. 
// The perfect numbers between 1 to 500 are:
// 6
// 28
// 496

#include <iostream>
using namespace std;
int main() 
{
  cout << "\n\n Find the perfect numbers between 1 and 500:\n";
  cout << "------------------------------------------------\n";
  int i = 1, u = 1, sum = 0;
  cout << "\n The perfect numbers between 1 to 500 are: \n";
  while (i <= 500) 
  {
    while (u <= 500) 
    {
      if (u < i) 
      {
        if (i % u == 0)
          sum = sum + u;
      }
      u++;
    }
    if (sum == i) {
      cout << i << "  " << "\n";
    }
    i++;
    u = 1;
    sum = 0;
  }
}

// 5. Write a program in C++ to check whether a number is prime or not. 
// Sample Output:
// Input a number to check prime or not: 13
// The entered number is a prime number.

#include <iostream>
using namespace std;
int main()
{
    int num1, ctr = 0;
    cout << "\n\n Check whether a number is prime or not:\n";
	cout << "--------------------------------------------\n";
	cout << " Input a number to check prime or not: ";
	cin>> num1;	
    for (int a = 1; a <= num1; a++) 
    {
        if (num1 % a == 0) 
        {
            ctr++;
        }
    }
    if (ctr == 2) 
    {
        cout << " The entered number is a prime number. \n";
    }
    else {
        cout << " The number you entered is not a prime number. \n";
    }
}

// 6. Write a program in C++ to find prime number within a range. 
// Input number for starting range: 1
// Input number for ending range: 100
// The prime numbers between 1 and 100 are:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
// The total number of prime numbers between 1 to 100 is: 25

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int num1,num2;
    int fnd=0,ctr=0;
    cout << "\n\n Find prime number within a range:\n";
	cout << "--------------------------------------\n";
	cout << " Input number for starting range: ";
	cin>> num1;
	cout << " Input number for ending range: ";
	cin>> num2;		

	cout << "\n The prime numbers between "<<num1<<" and "<<num2<<" are:"<<endl;
    for(int i=num1;i<=num2;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  ctr++;
               }
               if(ctr==0&&i!=1)
               { fnd++;
                 cout<<i<<" ";
                 ctr=0;
               }
               ctr=0;
       }
 cout<<"\n\n The total number of prime numbers between "<<num1<<" to "<<num2<<" is: "<<fnd<<endl;
 return 1;
}

// 7. Write a program in C++ to find the factorial of a number. 
// Sample output:
// Input a number to find the factorial: 5
// The factorial of the given number is: 120

#include <iostream>
using namespace std;
int main()
{
    int num1,factorial=1;
    cout << "\n\n Find the factorial of a number:\n";
	cout << "------------------------------------\n";
	cout << " Input a number to find the factorial: ";
	cin>> num1;
    for(int a=1;a<=num1;a++)
    {
        factorial=factorial*a;
    }
	cout<<" The factorial of the given number is: "<<factorial<<endl;
    return 0;
}

// 8. Write a program in C++ to find the last prime number occur before the entered number. 
// Sample Output:
// Input a number to find the last prime number occurs before the number: 50
// 47 is the last prime number before 50

#include <iostream>
using namespace std;
int main()
{
    int num1, ctr = 0;
    cout << "\n\n Find the last prime number occurs before the entered number:\n";
    cout << "-----------------------------------------------------------------\n";
    cout << " Input a number to find the last prime number occurs before the number: ";
    cin >> num1;
    for (int n = num1 - 1; n >= 1; n--) 
    {
        for (int m = 2; m < n; m++) 
        {
            if (n % m == 0)
                ctr++;
        }
        if (ctr == 0) 
        {
            if (n == 1) 
            {
                cout << "no prime number less than 2";
                break;
            }
            cout << n << " is the last prime number before " << num1 << endl;
            break;
        }
        ctr = 0;
    }
    return 0;
}

// 9. Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers. 
// Sample Output:
// Input the first number: 25
// Input the second number: 15
// The Greatest Common Divisor is: 5

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, gcd;
    cout << "\n\n Find the Greatest Common Divisor of two numbers:\n";
    cout << "-----------------------------------------------------\n";
    cout << " Input the first number: ";
    cin >> num1;
    cout << " Input the second number: ";
    cin >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0) 
        {
            gcd = i;
        }
    }
    cout << " The Greatest Common Divisor is: " << gcd << endl;
    return 0;
}

// 10. Write a program in C++ to find the sum of digits of a given number. 
// Sample Output:
// Input a number: 1234
// The sum of digits of 1234 is: 10

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, r, sum=0;
    cout << "\n\n Find the sum of digits of a given number:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a number: ";
    cin >> num1;
    num2 = num1;
    while (num1 > 0) 
    {
        r = num1 % 10;
        num1 = num1 / 10;
        sum = sum + r;
    }
    cout << " The sum of digits of " << num2 << " is: " << sum << endl;
}

// 11. Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n. 
// Sample Output:
// Input the value for nth term: 5
// 1/1^1 = 1
// 1/2^2 = 0.25
// 1/3^3 = 0.037037
// 1/4^4 = 0.00390625
// 1/5^5 = 0.00032
// The sum of the above series is: 1.29126

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double sum = 0, a;
    int n, i;
    cout << "\n\n Find the sum of the series 1 + 1/2^2 + 1/3^3 +.....+ 1/n^n:\n";
    cout << "----------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;
    for (i = 1; i <= n; ++i) 
	{
        a = 1 / pow(i, i);
        cout << "1/" << i << "^" << i << " = " << a << endl;
        sum += a;
    }
    cout << " The sum of the above series is: " << sum << endl;
}

// 12. Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n). 
// Sample Output:
// Input the value for nth term: 5
// 1*1 = 1
// 2*2 = 4
// 3*3 = 9
// 4*4 = 16
// 5*5 = 25
// The sum of the above series is: 55

#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << "\n\n Find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):\n";
    cout << "------------------------------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;

    for (i = 1; i <= n; i++) 
	{
        sum += i * i;
        cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
}

// 13. Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n). 
// Sample Output:
// Input the value for nth term: 5
// 1 = 1
// 1+2 = 3
// 1+2+3 = 6
// 1+2+3+4 = 10
// 1+2+3+4+5 = 15
// The sum of the above series is: 35

#include <iostream>
using namespace std;

int main()
{
    int i, j, n, sum = 0, tsum;
    cout << "\n\n Find the sum of the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n):\n";
    cout << "------------------------------------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
	{
        tsum = 0;
        for (j = 1; j <= i; j++) 
		{
            sum += j;
            tsum += j;
            cout << j;
            if (j < i) 
			{
                cout << "+";
            }
        }
        cout << " = " << tsum << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
}

// 14. Write a program in C++ to find the sum of series 1 - X^2/2! + X^4/4!-.... upto nth term. 
// Sample Output:
// Input the value of X: 3
// Input the value for nth term: 4
// term 1 value is: 1
// term 2 value is: -4.5
// term 3 value is: 3.375
// term 4 value is: -1.0125
// The sum of the above series is: -1.1375

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, sum, term, fct, y, j, m;
    int i, n;
    y = 2;

    cout << "\n\n Find the sum of the series 1 - X^2/2! + X^4/4!-....:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input the value of X: ";
    cin >> x;
    cout << " Input the value for nth term: ";
    cin >> n;
    sum = 1;
    term = 1;
    cout << " term 1 value is: " << term << endl;
    for (i = 1; i < n; i++) 
	{
        fct = 1;
        for (j = 1; j <= y; j++) 
		{
            fct = fct * j;
        }
        term = term * (-1);
        m = pow(x, y) / fct;
        m = m * term;
        cout << " term " << i + 1 << " value is: " << m << endl;
        sum = sum + m;
        y += 2;
    }
    cout << " The sum of the above series is: " << sum << endl;
}

// 15. Write a program in C++ to asked user to input positive integers to process count, maximum, minimum, and average or terminate the process with -1. 
// Sample Output:
// Your input is for termination. Here is the result below:
// Number of positive integers is: 4
// The maximum value is: 9
// The minimum value is: 3
// The average is 6.00

#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
    int posnum, ctr, sum, max = 0;
    int min = INT_MAX;
    int terval = -1;
    cout << "\n\n Input a positive integers to calculate some processes or -1 to terminate:\n";
    cout << "----------------------------------------------------------------------------\n";
    cout << " Input positive integer or " << terval << " to terminate: ";
    while (cin >> posnum && posnum != terval) 
    {
        if (posnum > 0) 
        {
            ++ctr;
            sum += posnum;
            if (max < posnum)
                max = posnum;
            if (min > posnum)
                min = posnum;
        }
        else 
        {
            cout << "error: input must be positive! if negative, the value will only be -1! try again..." << endl;
        }
        cout << " Input positive integer or " << terval << " to terminate: ";
    }
    cout << "\n Your input is for termination. Here is the result below: " << endl;
    cout << " Number of positive integers is: " << ctr << endl;
    if (ctr > 0) 
	{
        cout << " The maximum value is: " << max << endl;
        cout << " The minimum value is: " << min << endl;
        cout << fixed << setprecision(2);
        cout << " The average is " << (double)sum / ctr << endl;
    }
}

// 16. Write a program in C++ to list non-prime numbers from 1 to an upperbound. 
// Sample Output:
// Input the upperlimit: 25
// The non-prime numbers are:
// 4 6 8 9 10 12 14 15 16 18 20 21 22 24 25

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ult;
    cout << "\n\n List non-prime numbers from 1 to an upperbound:\n";
    cout << "----------------------------------------------------\n";
    cout << " Input the upperlimit: ";
    cin >> ult;
    cout << " The non-prime numbers are: " << endl;
    for (int num = 2; num <= ult; ++num) 
    {
        int mfactor = (int)sqrt(num);
        for (int fact = 2; fact <= mfactor; ++fact) 
        {
            if (num % fact == 0) 
            {
                cout << num << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}

// 17. Write a program in C++ to print a square pattern with # character. 
// Sample Output:
// Print a pattern like square with # character:
// --------------------------------------------------
// Input the number of characters for a side: 4
// # # # #
// # # # #
// # # # #
// # # # #

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "\n\n Print a pattern like square with # character:\n";
    cout << "--------------------------------------------------\n";
    cout << " Input the number of characters for a side: ";
    cin >> size;
    for (int row = 1; row <= size; ++row) 
    {
        for (int col = 1; col <= size; ++col) 
        {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}

// 18. Write a program in C++ to display the cube of the number upto given an integer. 
// Sample Output:
// Input the number of terms : 5
// Number is : 1 and the cube of 1 is: 1
// Number is : 2 and the cube of 2 is: 8
// Number is : 3 and the cube of 3 is: 27
// Number is : 4 and the cube of 4 is: 64
// Number is : 5 and the cube of 5 is: 125

#include <iostream>
using namespace std;

int main()
{
    int i, ctr, cub;

    cout << "\n\n Display the cube of the numbers upto a given integer:\n";
    cout << "----------------------------------------------------------\n";
    cout << "Input the number of terms : ";
    cin >> ctr;
    for (i = 1; i <= ctr; i++) 
    {
        cub = i * i * i;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
    }
}

// 19. Write a program in C++ to display the multiplication table vertically from 1 to n. 
// Sample Output:
// Input the number upto: 5
// Multiplication table from 1 to 5
// 1x1=1 2x1=2 3x1=3 4x1=4 5x1=5
// 1x2=2 2x2=4 3x2=6 4x2=8 5x2=10
// 1x3=3 2x3=6 3x3=9 4x3=12 5x3=15
// 1x4=4 2x4=8 3x4=12 4x4=16 5x4=20
// 1x5=5 2x5=10 3x5=15 4x5=20 5x5=25
// 1x6=6 2x6=12 3x6=18 4x6=24 5x6=30
// 1x7=7 2x7=14 3x7=21 4x7=28 5x7=35
// 1x8=8 2x8=16 3x8=24 4x8=32 5x8=40
// 1x9=9 2x9=18 3x9=27 4x9=36 5x9=45
// 1x10=10 2x10=20 3x10=30 4x10=40 5x10=50

#include <iostream>
using namespace std;

int main()
{
    int j, i, n;

    cout << "\n\n Display the multipliaction table vertically from 1 to n:\n";
    cout << "-------------------------------------------------------------\n";
    cout << "Input the number upto 5: ";
    cin >> n;

    cout << "Multiplication table from 1 to " << n << endl;
    for (i = 1; i <= 10; i++) 
    {
        for (j = 1; j <= n; j++) 
        {
            if (j <= n - 1)
                cout << j << "x" << i << "=  " << i * j;
            else
                cout << j << "x" << i << "=  " << i * j;
        }
        cout << endl;
    }
}

// 20. Write a program in C++ to display the n terms of odd natural number and their sum. 
// Sample Output:
// Input number of terms: 5
// The odd numbers are: 1 3 5 7 9
// The Sum of odd Natural Numbers upto 5 terms: 25

#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << "\n\n Display n terms of odd natural number and their sum:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    cout << " The odd numbers are: ";
    for (i = 1; i <= n; i++) 
    {
        cout << 2 * i - 1 << " ";
        sum += 2 * i - 1;
    }
    cout << "\n The Sum of odd Natural Numbers upto " << n << " terms"; 

" << sum << endl";
}

// 21. Write a program in C++ to display the n terms of even natural number and their sum. 
// Sample Output:
// Input number of terms: 5
// The even numbers are: 2 4 6 8 10
// The Sum of even Natural Numbers upto 5 terms: 30

#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << "\n\n Display n terms of even natural number and their sum:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    cout << "\n The even numbers are: ";
    for (i = 1; i <= n; i++) 
    {
        cout << 2 * i << " ";
        sum += 2 * i ;
    }
    cout << "\n The Sum of even Natural Numbers upto " << n << " terms: " << sum << endl;
}

// 22. Write a program in C++ to display the n terms of harmonic series and their sum. 
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
// Sample Output:
// Input number of terms: 5
// 1/1 + 1/2 + 1/3 + 1/4 + 1/5
// The sum of the series upto 5 terms: 2.28333

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float s = 0.0;
    cout << "\n\n Display n terms of harmonic series and their sum:\n";
    cout << " The harmonic series: 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms\n";
    cout << "-----------------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        if (i < n) 
        {
            cout << "1/" << i << " + ";
            s += 1 / (float)i;
        }
        if (i == n) 
        {
            cout << "1/" << i;
            s += 1 / (float)i;
        }
    }
    cout << "\n The sum of the series upto " << n << " terms: " << s << 

endl;
}

// 23. Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. 
// Sample Output:
// Input number of terms: 5
// 9 99 999 9999 99999
// The sum of the sarise = 111105

#include <iostream>
using namespace std;

int main()
{
    long int n, i, t = 9;
    int sum = 0;
    cout << "\n\n Display the sum of the series [ 9 + 99 + 999 + 9999 ...]\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++) 
    {
        sum += t;
        cout << t << "  ";
        t = t * 10 + 9;
    }
    cout << "\n The sum of the sarise = " << sum << endl;
}

// 24. Write a program in C++ to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]. 
// Sample Output:
// Input the value of x: 3
// Input number of terms: 5
// The sum is : 16.375

#include <iostream>
using namespace std;

int main()
{
    float x, sum, no_row;
    int i, n;
    cout << "\n\n Display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]\n";
    cout << "------------------------------------------------------------\n";
    cout << " Input the value of x: ";
    cin >> x;
    cout << " Input number of terms: ";
    cin >> n;
    sum = 1;
    no_row = 1;
    for (i = 1; i < n; i++) 
    {
        no_row = no_row * x / (float)i;
        sum = sum + no_row;
    }
    cout << " The sum  is : " << sum << endl;
}

// 25. Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......]. 
// Sample Output:
// Input the value of x: 2
// Input number of terms: 5
// The values of series:
// 2
// -8
// 32
// -128
// 512
// The sum of the series upto 5 term is: 410


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, sum, ctr;
    int i, n, m, mm, nn = 0;
    cout << "\n\n Display the sum of the series [ x - x^3 + x^5 + ......]\n";
    cout << "------------------------------------------------------------\n";
    cout << " Input the value of x: ";
    cin >> x;
    cout << " Input number of terms: ";
    cin >> n;
    sum = x;
    m = -1;
    cout << "The values of series:" << endl;
    cout << sum << endl;
    for (i = 1; i < n; i++) {
        ctr = (2 * i + 1);
        mm = pow(x, ctr);
        nn = mm * m;
        cout << nn << endl;
        sum = sum + nn;
        m = m * (-1);
    }
    cout << "\n The sum of the series upto " << n << " term is: " << sum << endl;
}

// 26. Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms. 
// Sample Output:
// Input number of terms: 5
// 1 + 11 + 111 + 1111 + 11111
// The sum of the series is: 12345

#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    int t = 1;
    cout << "\n\n Display the sum of the series 1 +11 + 111 + 1111 + .. n terms:\n";
    cout << "-------------------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        cout << t << " ";
        if (i < n) 
        {
            cout << "+ ";
        }
        sum = sum + t;
        t = (t * 10) + 1;
    }
    cout << "\n The sum of the series is: " << sum << endl;
}

// 27. Write a program in C++ to display the first n terms of Fibonacci series. 
// Sample Output:
// Input number of terms to display: 10
// Here is the Fibonacci series upto to 10 terms:
// 0 1 1 2 3 5 8 13 21 34

#include <iostream>
using namespace std;

int main()
{
    int prv = 0, pre = 1, trm, i, n;
    cout << "\n\n Display the first n terms of Fibonacci series:\n";
    cout << "---------------------------------------------------\n";
    cout << " Input number of terms to  display: ";
    cin >> n;
    cout << " Here is the Fibonacci series upto  to " << n << " terms: "<<endl;
    cout << prv << " " << pre;
    for (i = 3; i <= n; i++) 
    {
        trm = prv + pre;
        cout << " " << trm;
        prv = pre;
        pre = trm;
    }
    cout << endl;
}

// 28. Write a program in C++ to find the number and sum of all integer between 100 and 200 which are divisible by 9. 
// Sample Output:
// Numbers between 100 and 200, divisible by 9:
// 108 117 126 135 144 153 162 171 180 189 198
// The sum : 1683

#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0;
    cout << "\n\n Find the number and sum of all integer between 100 and 200, divisible by 9:\n";
    cout << "--------------------------------------------------------------------------------\n";
    cout << " Numbers between 100 and 200, divisible by 9: " << endl;
    for (i = 101; i < 200; i++) 
    {
        if (i % 9 == 0) 
        {
            cout << " " << i;
            sum += i;
        }
    }
    cout << "\n The sum : " << sum << endl;
}

// 29. Write a program in C++ to find LCM of any two numbers using HCF. 
// Sample Output:
// Input 1st number for LCM: 15
// Input 2nd number for LCM: 25
// The LCM of 15 and 25 is: 75

#include <iostream>
using namespace std;

int main()
{
    int i, n1, n2, j, hcf = 1, lcm;
    cout << "\n\n LCM of two numbers:\n";
    cout << "------------------------\n";
    cout << " Input 1st number for LCM: ";
    cin >> n1;
    cout << " Input 2nd number for LCM: ";
    cin >> n2;
    j = (n1 < n2) ? n1 : n2;
    for (i = 1; i <= j; i++) {

        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    /* mltiplication of HCF and LCM = the multiplication of these two numbers.*/
    lcm = (n1 * n2) / hcf;
    cout << " The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
}

// 30. Write a program in C++ to display the number in reverse order. 
// Sample Output:
// Input a number: 12345
// The number in reverse order is : 54321

#include <iostream>
using namespace std;

int main()
{
    int num, r, sum = 0, t;
    cout << "\n\n Display the number in reverse order:\n";
    cout << "-----------------------------------------\n";
    cout << " Input a number: ";
    cin >> num;
    for (t = num; num != 0; num = num / 10) 
    {
        r = num % 10;
        sum = sum * 10 + r;
    }
    cout << " The number in reverse order is : " << sum << endl;
}

// 31. Write a program in C++ to find out the sum of an A.P. series. 
// Sample Output:
// Input the starting number of the A.P. series: 1
// Input the number of items for the A.P. series: 8
// Input the common difference of A.P. series: 5
// The Sum of the A.P. series are :
// 1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148

#include <iostream>
using namespace std;

int main()
{
    int n1, df, n2, i, ln;
    int s1 = 0;
    cout << "\n\n Find out the sum of A.P. series:\n";
    cout << "-----------------------------------------\n";
    cout << " Input  the starting number of the A.P. series: ";
    cin >> n1;
    cout << " Input the number of items for  the A.P. series: ";
    cin >> n2;
    cout << " Input  the common difference of A.P. series: ";
    cin >> df;
    s1 = (n2 * (2 * n1 + (n2 - 1) * df)) / 2;
    ln = n1 + (n2 - 1) * df;
    cout << " The Sum of the  A.P. series are : " << endl;
    for (i = n1; i <= ln; i = i + df) 
    {
        if (i != ln)
            cout << i << " + ";
        else
            cout << i << " = " << s1 << endl;
    }
}

// 32. Write a program in C++ to find the Sum of GP series. 
// Sample Output:
// Input the starting number of the G.P. series: 3
// Input the number of items for the G.P. series: 5
// Input the common ratio of G.P. series: 2
// The numbers for the G.P. series:
// 3 6 12 24 48
// The Sum of the G.P. series: 93

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float g1,cr,i,n,j;
    int ntrm,gpn;
    float sum=0;
    cout << "\n\n Find the Sum of GP series:\n";
    cout << "-------------------------------\n";
    cout << " Input  the starting number of the G.P. series: ";
    cin >> g1;
    cout << " Input the number of items for  the G.P. series: ";
    cin >> ntrm;
    cout << " Input the common ratio of G.P. series: ";
    cin >> cr;
/*-------- generate G.P. series ---------------*/
     cout<<"\nThe numbers for the G.P. series:\n ";
     cout<<g1<<"  ";
     sum=g1;
     for(j=1;j<ntrm;j++)
       {
        gpn=g1*pow(cr,j);
        sum=sum+gpn;
        cout<<gpn<<"  ";
       }  
/*-------- End of G.P. series generate ---------------*/
    cout<<"\n The Sum of the G.P. series:  "<<sum<<endl;	
}

// 33. Write a program in C++ to Check Whether a Number can be Express as Sum of Two Prime Numbers. 
// Sample Output:
// Input a positive integer: 20
// 20 = 3 + 17
// 20 = 7 + 13

#include <iostream>
using namespace std;

int main()
{
    int n, i, flg1 = 1, flg2 = 1, flg3 = 0, j;
    float sum = 0;
    cout << "\n\n Check Whether a Number can be Express as Sum of Two Prime Numbers:\n";
    cout << "------------------------------------------------------------------------\n";
    cout << " Input  a positive integer: ";
    cin >> n;
    for (i = 2; i <= n / 2; i++) 
    {
        /*---------- check for prime---------------*/
        flg1 = 1;
        flg2 = 1;
        for (j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                flg1 = 0;
                j = i;
            }
        }
        for (j = 2; j < n - i; j++) 
        {
            if ((n - i) % j == 0) 
            {
                flg2 = 0;
                j = n - i;
            }
        }
        if (flg1 == 1 && flg2 == 1) 
        {
            cout << n << " = " << i << " + " << n - i << endl;
            flg3 = 1;
        }
    }
    if (flg3 == 0) 
    {
        cout << n << " can not be expressed as sum of two prime numbers." << endl;
    }
}

// 34. Write a program in C++ to find the length of a string without using the library function. 
// Sample Output:
// Input a string: w3resource.com
// The string contains 14 number of characters.
// So, the length of the string w3resource.com is:14

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str1[50];
    int i, l = 0;
    cout << "\n\n Find the length of a string:\n";
    cout << "---------------------------------\n";
    cout << " Input a string: ";
    cin >> str1;
    for (i = 0; str1[i] != '\0'; i++) {
        l++;
    }
    cout << "The string contains " << l << " number of characters." << endl;
    cout << "So, the length of the string " << str1 << " is:" << l << endl;
}

// 35. Write a program in C++ to display the pattern like right angle triangle using an asterisk. 
// Sample Output:
// Input number of rows: 5
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main()
{
   int i,j,rows;
    cout << "\n\n display the pattern like right angle triangle using an asterisk:\n";
    cout << "---------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<"*";
	cout<<endl;
   }	
}

// 36. Write a program in C++ to display the pattern like right angle triangle with number. 
// Sample Output:
// Input number of rows: 5
// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;

int main()
{
   int i,j,rows;
    cout << "\n\n Display the pattern using number starting from 1:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<j;
	cout<<endl;
   }	
}

// 37. Write a program in C++ to make such a pattern like right angle triangle using number which will repeat the number for that row. 
// Sample Output:

//   Input number of rows: 5                                                                                      
// 1                                                                                                             
// 22                                                                                                      
// 333                                                                                                         
// 4444                                                                                                         
// 55555 


#include <iostream>
using namespace std;

int main()
{
   int i,j,rows;
    cout << "\n\n Display the pattern using number repeating for a row:\n";
    cout << "----------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<i;
	cout<<endl;
   }	
}

// 38. Write a program in C++ to make such a pattern like right angle triangle with number increased by 1. 
// Sample Output:

//  Input number of rows: 4                                                                                     
// 1                                                                                  
// 2 3                                                                                                         
// 4 5 6                                                                                                       
// 7 8 9 10 


#include <iostream>
#include <string>
using namespace std;

int main()
{
   int i,j,rows,k=1;
    cout << "\n\n Display such a pattern like right angle triangle with number increased by 1:\n";
    cout << "---------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<k++<<" ";
	cout<<endl;
   }	
}

// 39. Write a program in C++ to make such a pattern like a pyramid with numbers increased by 1. 
// Sample Output:

//  Input number of rows: 4                                               
//        1                                                               
//       2 3                                                              
//      4 5 6                                                             
//     7 8 9 10 


#include <iostream>
#include <string>
using namespace std;

int main()
{
   int i,j,spc,rows,k,t=1;
    cout << "\n\n Display such a pattern like a pyramid with numbers increased by 1:\n";
    cout << "-----------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<t++<<" ";
	cout<<endl;
    spc--;
   }
}


// 40. Write a program in C++ to make such a pattern like a pyramid with an asterisk. 
// Sample Output:

//  Input number of rows: 5                                               
//         *                                                              
//        * *                                                             
//       * * *                                                            
//      * * * *                                                           
//     * * * * *

#include <iostream>
#include <string>
using namespace std;

int main()
{
   int i,j,spc,rows,k;
    cout << "\n\n Display such a pattern like a pyramid with an asterisk:\n";
    cout << "------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<"*"<<" ";
	cout<<endl;
    spc--;
   }
}


// 41. Write a program in C++ to make such a pattern like a pyramid using number and a number will repeat for a row. 
// Sample Output:

//  Input number of rows: 5                                               
//         1                                                              
//        2 2                                                             
//       3 3 3                                                            
//      4 4 4 4                                                           
//     5 5 5 5 5  

#include <iostream>
#include <string>
using namespace std;

int main()
{
   int i,j,spc,rows,k;
    cout << "\n\n Display such a pattern like a pyramid using number with repetition :\n";
    cout << "-------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<i<<" ";
	cout<<endl;
    spc--;
   }
}


// 42. Write a program in C++ to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks. 
// Sample Output:

//  Input number of rows: 5                                                                                                                      
//     *                                                                  
//    ***                                                                 
//   *****                                                                
//  ******* 

#include <iostream>
using namespace std;

int main()
{
   int i,j,n;
    cout << "\n\n Display such a pattern like a pyramid containing odd number of asterisk in each row:\n";
    cout << "-----------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
  for(i=0;i<n;i++)
   {
     for(j=1;j<=n-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
}



// 43. Write a program in C++ to print the Floyd's Triangle. 
// Sample Output:

//  Input number of rows: 5                                               
// 1                                                                      
// 01                                                                     
// 101                                                                    
// 0101                                                                   
// 10101

#include <iostream>
using namespace std;

int main()
{
   int i,j,n,p,q;
    cout << "\n\n Print the Floyd's Triangle:\n";
    cout << "--------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
   for(i=1;i<=n;i++)
   {
     if(i%2==0)
     { 
	 p=1;q=0;
	 }
     else
     { 
	 p=0;q=1;
	 }
      for(j=1;j<=i;j++)
	 if(j%2==0)
	    cout<<p;
	 else
	    cout<<q;
     cout<<endl;
   }
}


// 44. Write a program in C++ to display the pattern like a diamond. 
// Sample Output:

//  Input number of rows (half of the diamond): 5                         
                                                                       
//     *                                                                  
//    ***                                                                 
//   *****                                                                
//  *******                                                               
// *********                                                              
//  *******                                                               
//   *****                                                                
//    ***                                                                 
//     *   

#include <iostream>
using namespace std;

int main()
{
   int i,j,r;
    cout << "\n\n Display the pattern like a diamond:\n";
    cout << "----------------------------------------\n";
    cout << " Input number of rows (half of the diamond): ";
    cin >> r;
   for(i=0;i<=r;i++)
   {
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
   for(i=r-1;i>=1;i--)
   {
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;;
   }
}


// 45. Write a program in C++ to display Pascal's triangle like pyramid. 
// Sample Output:

//  Input number of rows: 5                                               
//           1                                                            
//         1   1                                                          
//       1   2   1                                                        
//     1   3   3   1                                                      
//   1   4   6   4   1 

#include <iostream>
using namespace std;

int main()
{
    int row,c=1,blk,i,j;
    cout << "\n\n Display the Pascal's triangle:\n";
    cout << "-----------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(i=0;i<row;i++)
    {
        for(blk=1;blk<=row-i;blk++)
        cout<<"  ";
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
}


// 46. Write a program in C++ to display Pascal's triangle like right angle traingle. 
// Sample Output:

//  Input number of rows: 7                                               
// 1                                                                      
// 1   1                                                                  
// 1   2   1                                                              
// 1   3   3   1                                                          
// 1   4   6   4   1                                                      
// 1   5   10   10   5   1                                                
// 1   6   15   20   15   6   1


#include <iostream>
using namespace std;

int main()
{
    int row,c=1,blk,i,j;
    cout << "\n\n Display the Pascal's triangle lime right angle triangle:\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
} 

// 47. Write a program in C++ to display such a pattern for n number of rows using number. Each row will contain odd numbers of number. The first and last number of each row will be 1 and middle column will be the row number. 
// Sample Output:
                                               
//  Input number of rows: 5                                               
                                                                       
//     1                                                                  
//    121                                                                 
//   12321                                                                
//  1234321                                                               
// 123454321 

#include <iostream>
using namespace std;

int main()
{
   int i,j,n;
    cout << "\n\n Display a pattern using odd number of numbers, the first and last number of each row is 1:\n";
    cout << "-----------------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
    for(i=0;i<=n;i++)
   {
     /* print blank spaces */
     for(j=1;j<=n-i;j++)
	cout<<" ";
     /* Display number in ascending order upto middle*/
     for(j=1;j<=i;j++)
       cout<<j;
 
     /* Display  number in reverse order after middle */
       for(j=i-1;j>=1;j--)
	  cout<<j;
     cout<<endl;
   }
} 


// 48. Write a program in C++ to display the pattern like pyramid using the alphabet. 
// Sample Output:

//  Input the number of Letters (less than 26) in the Pyramid: 5          
//         A                                                              
//       A B A                                                            
//     A B C B A                                                          
//   A B C D C B A                                                        
// A B C D E D C B A


#include <iostream>
using namespace std;

int main()
{
    int i, j;
    char alph = 'A';
    int n, blk;
    int ctr = 1;
    cout << "\n\n Display the pattern like pyramid using the alphabet:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (blk = 1; blk <= n - i; blk++)
            cout << "  ";
        for (j = 0; j <= (ctr / 2); j++) 
        {
            cout << alph++ << " ";
        }
        alph = alph - 2;
        for (j = 0; j < (ctr / 2); j++) 
        {
            cout << alph-- << " ";
        }
        ctr = ctr + 2;
        alph = 'A';
        cout << endl;
    }
}

// 49. Write a program in C++ to print a pyramid of digits as shown below for n number of lines. 

//     1                                                                                                         
//    232                                                                                                        
//   34543                                                                                                       
//  4567654                                                                                                      
// 567898765

// Sample Output:

//  Input the number of rows: 5                                           
//     1                                                                  
//    232                                                                 
//   34543                                                                
//  4567654                                                               
// 567898765 

#include <iostream>
using namespace std;

int main()
{
    int i, j, spc, n;
    cout << "\n\n Display the pattern like pyramid using digits:\n";
    cout << "---------------------------------------------------\n";
    cout << " Input the number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        spc = n - i;
        while (spc-- > 0)
            cout << " ";
        for (j = i; j < 2 * i - 1; j++)
            cout << j;
        for (j = 2 * i - 1; j > i - 1; j--)
            cout << j;
        cout << endl;
    }
}


// 50. Write a program in C++ to print a pattern like highest numbers of columns appear in first row. 
// Sample Output:

//  Input the number of rows: 5                                                                                  
// 12345                                                                                                         
// 2345                                                                                                          
// 345                                                                                                           
// 45                                                                                                            
// 5

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "\n\n Display the pattern like highest numbers of columns appear in first row:\n";
    cout << "------------------------------------------------------------------------------\n";
    cout << " Input the number of rows: ";
    cin >> n;
    for (i = 1; i <= n;) 
    {
        cout << i;
        for (j = i + 1; j <= n;) 
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}


// 51. Write a program in C++ to display the pattern using digits with right justified and the highest columns appears in first row. 
// Sample Output:

//  Input number of rows: 5                                                                                      
// 12345                                                                                                         
//  1234                                                                                                         
//   123                                                                                                         
//    12                                                                                                         
//     1 

#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;
    cout << "\n\n Display the pattern using digits with right justified:\n";
    cout << "-----------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    for (i = rows; i >= 1; i--) 
    {
        for (j = 1; j <= rows - i; j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << j;
        cout << endl;
    }
}


// 52. Write a program in C++ to display the pattern using digits with left justified and the highest columns appears in first row in descending order. 
// Sample Output:

//  Input number of rows: 5                                               
// 5 4 3 2 1                                                              
// 4 3 2 1                                                                
// 3 2 1                                                                  
// 2 1                                                                    
// 1

#include <iostream>
using namespace std;

int main()
{
    int i, j, rows, d;
    cout << "\n\n Display the pattern using digits with left justified:\n";
    cout << "----------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    d = 0;
    for (i = 1; i <= rows; i++) 
	{
        for (j = rows - d; j >= 1; j--) 
		{
            cout << j << " ";
        }
        d++;
        cout << endl;
    }
}


// 53. Write a program in C++ to display the pattern like right angle triangle with right justified using digits. 
// Sample Output:

//  Input number of rows: 5                                               
//     1                                                                  
//    21                                                                  
//   321                                                                  
//  4321                                                                  
// 54321

#include <iostream>
using namespace std;

int main()
{
    int i, j, rows, d;
    cout << "\n\n Display the pattern like right angle triangle with right justified using digits:\n";
    cout << "-------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }
        d = i;
        for (j = 1; j <= i; j++) 
        {
            cout << d;
            d--;
        }
        cout << endl;
    }
}


// 54. Write a program in C++ to display the pattern power of 2, triangle. 
// Sample Output:

                    
// Display the pattern like pyramid with power of 2:
// ------------------------------------------------------
//  Input the number of rows:
//                  1
//               1  2  1  
//            1  2  4  2  1  
//         1  2  4  8  4  2  1  
//      1  2  4  8  16  8  4  2  1  

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i, j, spc, n, mm, d = 1, k;
    cout << "\n\n Display the pattern like pyramid with power of 2:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input the number of rows: ";
    cin >> n;
    //----------- space for first line ----------------------
    for (i = 1; i <= n * 2 + 2 + 5; i++) //extra 5 spaces is the margin from left
        cout << " ";
    cout << pow(2, 0) << endl;
    for (i = 1; i < n; i++) 
    {
        //----------- printing spaces from 2nd line to end -------
        for (k = 1; k <= n * 2 - d + 5; k++) 
        {
            cout << " ";
        }
        //----------- print upto middle ----------------
        for (j = 0; j < i; j++) 
        {
            mm = pow(2, j);
            cout << mm << "  "; //print 2 spaces
        }
        //------------- print after middle to end -------
        for (j = i; j >= 0; j--) 
        {
            mm = pow(2, j);
            cout << mm << "  "; //print 2 spaces
        }
        d = d + 3;
        cout << endl;
    }
}


// 55. Write a program in C++ to display such a pattern for n number of rows using number. Each row will contain odd numbers of number. The first and last number of each row will be 1 and middle column will be the row number. n numbers of columns will appear in 1st row. 
// Sample Output:

//  Input number of rows: 7                                                                                      
//      1234567654321                                                                                            
//       12345654321                                                                                             
//        123454321                                                                                              
//         1234321                                                                                               
//          12321                                                                                                
//           121                                                                                                 
//            1 

#include <iostream>
using namespace std;

int main()
{
   int i,j,n;
    cout << "\n\n Display a pattern using odd number of numbers, the n numbers of columns will appear in 1st row:\n";
    cout << "----------------------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
    for(i=n;i>=1;i--)
   {
     /* print blank spaces */
     for(j=1;j<=n+5-i;j++)
	cout<<" ";
     /* Display number in ascending order upto middle*/
     for(j=1;j<=i;j++)
       cout<<j;
 
     /* Display  number in reverse order after middle */
       for(j=i-1;j>=1;j--)
	  cout<<j;
     cout<<endl;
   }
}


// 56. Write a program in C++ to find the first and last digit of a number. 
// Sample Output:
// Input any number: 5679
// The first digit of 5679 is: 5
// The last digit of 5679 is: 9

#include <iostream>
using namespace std;

int main()
{
   int n,first,last;
    cout << "\n\n Find the first and last digit of a number:\n";
    cout << "-----------------------------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    first = n;
	last=n % 10;
	for(first=n;first>=10;first=first/10);
    cout<<" The first digit of "<<n<<" is: "<<first<<endl;
    cout<<" The last digit of "<<n<<" is: "<<last<<endl;
}

// 57. Write a program in C++ to find the sum of first and last digit of a number. 
// Sample Output:
// Input any number: 12345
// The first digit of 12345 is: 1
// The last digit of 12345 is: 5
// The sum of first and last digit of 12345 is: 6

#include <iostream>
using namespace std;

int main()
{
   int n,first,last,sum;
    cout << "\n\n Find the sum of first and last digit of a number:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    first = n;
	last=n % 10;
	for(first=n;first>=10;first=first/10);
    cout<<" The first digit of "<<n<<" is: "<<first<<endl;
    cout<<" The last digit of "<<n<<" is: "<<last<<endl;
	cout<<" The sum of first and last digit of "<<n<<" is: "<<first+last<<endl;
}

// 58. Write a program in C++ to calculate product of digits of any number. 
// Sample Output:
// Input a number: 3456
// The product of digits of 3456 is: 360

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, r, pro=1,i;
    cout << "\n\n Find the product of digits of a given number:\n";
    cout << "--------------------------------------------------\n";
    cout << " Input a number: ";
    cin >> num1;
    num2 = num1;
    for(i=num1;i>0;i=i/10)
    {
        r = i % 10;
        pro = pro*r;
    }
    cout << " The product of digits of " << num2 << " is: " << pro << endl;
}

// 59. Write a program in C++ to find the frequency of each digit in a given integer. 
// Sample Output:
// Input any number: 122345
// The frequency of 0 = 0
// The frequency of 1 = 1
// The frequency of 2 = 2
// The frequency of 3 = 1
// The frequency of 4 = 1
// The frequency of 5 = 1
// The frequency of 6 = 0
// The frequency of 7 = 0
// The frequency of 8 = 0
// The frequency of 9 = 0

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, ctr, r;
    cout << "\n\n Find frequency of each digit in a given integer:\n";
    cout << "-----------------------------------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    for (i = 0; i < 10; i++) 
    {
        cout << "The frequency of " << i << " = ";
        ctr = 0;
        for (j = n; j > 0; j = j / 10) 
        {
            r = j % 10;
            if (r == i) 
            {
                ctr++;
            }
        }
        cout << ctr << endl;
    }
}

// 60. Write a program in C++ to input any number and print it in words. 
// Sample Output:
// Input any number: 8309
// Eight Three Zero Nine

#include <iostream>
using namespace std;
int main()
{
    int n, num = 0, i;
    cout << "\n\n Print a number in words:\n";
    cout << "-----------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    while (n != 0) {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    for (i = num; i > 0; i = i / 10) {

        switch (i % 10) {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
    cout << endl;
}

// 61. Write a program in C++ to print all ASCII character with their values. 
// Sample Output:
// Input the starting value for ASCII characters: 65
// Input the ending value for ASCII characters: 75
// The ASCII characters:
// 65 --> A
// 66 --> B
// 67 --> C
// 68 --> D
// 69 --> E
// 70 --> F
// 71 --> G
// 72 --> H
// 73 --> I
// 74 --> J
// 75 --> K

#include <iostream>
using namespace std;
int main()
{
    int sn, en, i, j, ctr, r;
    cout << "\n\n Print ASCII character with their values:\n";
    cout << "-------------------------------------------------\n";
    cout << " Input the starting value for ASCII characters: ";
    cin >> sn;
    cout << " Input the ending value for ASCII characters: ";
    cin >> en;	
	if (sn>255 || sn<0)
	sn=1;
	if(en<0 || en>255)
	en=255;
	cout << "The ASCII characters:"<<endl ;
    for (i = sn; i <=en; i++) 
    {
        cout << i<<" --> "<<char(i)<<endl;
    }
}

// 62. Write a program in C++ to find power of any number using for loop. 
// Sample Output:
// Input the base: 2
// Input the exponent: 5
// 2 ^ 5 = 32

#include <iostream>
using namespace std;
int main()
{
    int bs, ex, num=1,i;
    cout << "\n\n Find power of any number using for loop:\n";
    cout << "---------------------------------------------\n";
    cout << " Input the base: ";
    cin >> bs;
    cout << " Input the exponent: ";
	cin>>ex;
	
    for (i = 1; i <=ex; i++) 
    {
       num=num*bs;
    }
	cout <<bs<<" ^ "<<ex<<" = "<<num<<endl ;
}

// 63. Write a program in C++ to enter any number and print all factors of the number. 
// Sample Output:
// Input a number: 63
// The factors are: 1 3 7 9 21 63

#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "\n\n Print all factors of a number:\n";
    cout << "-----------------------------------\n";
    cout << " Input a number: ";
    cin >> num;
    cout << "The factors are: ";
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

// 64. Write a program in C++ to find one's complement of a binary number. 
// Sample Output:
// Input a 8 bit binary value: 10100101
// The original binary = 10100101
// After ones complement the number = 01011010

#include <iostream>
#define SZ 8
using namespace std;
int main()
{
    int i;
    char binary[SZ + 1], onesComp[SZ + 1];
    int error = 0;
    cout << "\n\n Find one's complement of a binary value:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a " << SZ << " bit binary value: ";
    cin >> binary;
    for (i = 0; i < SZ; i++) 
    {
        if (binary[i] == '1') 
        {
            onesComp[i] = '0';
        }
        else if (binary[i] == '0') 
        {
            onesComp[i] = '1';
        }
        else 
		{
            cout << "Invalid Input. Input the value of assign bits." << endl;
            error = 1;
            break;
        }
    }
    onesComp[SZ] = '\0';
    if (error == 0) 
    {
        cout << " The original binary = " << binary << endl;
        cout << " After ones complement the number = " << onesComp << endl;
    }
}

// 65. Write a program in C++ to find two's complement of a binary number. 
// Sample Output:
// Input a 8 bit binary value: 01101110
// The original binary = 01101110
// After ones complement the value = 10010001
// After twos complement the value = 10010010

#include <iostream>
#define SZ 8
using namespace std;
int main()
{
    char bn[SZ + 1], onComp[SZ + 1], twComp[SZ + 1];
    int i, carr = 1;
    int er = 0;
    cout << "\n\n Find two's complement of a binary value:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a " << SZ << " bit binary value: ";
    cin >> bn;
    for (i = 0; i < SZ; i++) 
    {
        if (bn[i] == '1') 
        {
            onComp[i] = '0';
        }
        else if (bn[i] == '0') 
        {
            onComp[i] = '1';
        }
        else 
        {
            cout << "Invalid Input. Input the value of assign bits." << endl;
            er = 1;
            break;
        }
    }
    onComp[SZ] = '\0';

    for (i = SZ - 1; i >= 0; i--) 
    {
        if (onComp[i] == '1' && carr == 1) 
        {
            twComp[i] = '0';
        }
        else if (onComp[i] == '0' && carr == 1) 
        {
            twComp[i] = '1';
            carr = 0;
        }
        else 
        {
            twComp[i] = onComp[i];
        }
    }
    twComp[SZ] = '\0';
    if (er == 0) 
    {
        cout << " The original binary = " << bn << endl;
        cout << " After ones complement the value = " << onComp << endl;
        cout << " After twos complement the value = " << twComp << endl;
    }
}

// 66. Write code to create a checkerboard pattern with the words "black" and "white". 
// Sample Output:
// Input number of rows: 5
// black-white-black-white-black
// white-black-white-black-white
// black-white-black-white-black
// white-black-white-black-white
// black-white-black-white-black

#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;
    string b, w, t;
    b = "black";
    w = "white";
    cout << "\n\n Display checkerboard pattern with the words 'black' and 'white':\n";
    cout << "---------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= rows; j++) 
        {
            if (j % 2 != 0) 
            {
                cout << b;
                if (j < rows) 
                {
                    cout << "-";
                }
            }
            else if (j % 2 == 0) 
            {
                cout << w;
                if (j < rows) 
                {
                    cout << "-";
                }
            }
        }
        t = b;
        b = w;
        w = t;
        cout << endl;
    }
}

// 67. Write a program in C++ to calculate the sum of the series 1?2+2?3+3?4+4.5+5.6+....... 
// Sample Output:
// Input the last integer between 1 to 98 without fraction you want to add: 10 1.2 + 2.3 + 3.4 + 4.5 + 5.6 + 6.7 + 7.8 + 8.9 + 9.1 + 10.11 The sum of the series =59.61

#include <iostream>
using namespace std;
int main()
{
    int trm;
    double num, sum, i, m;
    cout << "\n\n calculate the sum of the series 1·2+2·3+3·4+4.5+5.6+......:\n";
    cout << "----------------------------------------------------------------\n";
    cout << " Input the last integer between 1 to 98 without fraction you want to add: ";
    cin >> trm;
    for (i = 1; i <= trm; i++) 
    {
        if (i < 9) 
        {
            m = .1;
        }
        else 
        {
            m = .01;
        }
        num = i + ((i + 1) * (m));
        sum = sum + num;
        cout << num;
        if (i < trm) 
        {
            cout << " + ";
        }
    }
    cout << "\n The sum of the series =" << sum << endl;
}

// 68. Write a program that will print the first N numbers for a specific base. 
// Sample Output:
// Print the first N numbers for a specific base:
// The number 11 in base 10 = 1*(10^1)+1*(10^0)=11
// Similarly the number 11 in base 7 = 1*(7^1)+1*(7^0)=8
// ----------------------------------------------------------------
// Input the number of term: 15
// Input the base: 9
// The numbers in base 9 are:
// 1 2 3 4 5 6 7 8 10 11 12 13 14 15 16

#include <iostream>
using namespace std;
int main()
{
    int trm, bs, r, q, i, num;
    cout << "\n\n Print the first N numbers for a specific base:\n";
    cout << " The number 11 in base 10 = 1*(10^1)+1*(10^0)=11" << endl;
    cout << " Similarly the number 11 in base 7 = 1*(7^1)+1*(7^0)=8" << endl;
    cout << "----------------------------------------------------------------\n";
    cout << " Input the number of term: ";
    cin >> trm;
    cout << " Input the base: ";
    cin >> bs;
    cout << " The numbers in base " << bs << " are: " << endl;
    for (i = 1; i <= trm; i++) 
    {
        r = i % bs;
        q = i / bs;
        num = q * 10 + r;
        cout << num << "  ";
    }
    cout << endl;
}

// 69. Write a program in C++ to produce a square matrix with 0's down the main diagonal, 1's in the entries just above and below the main diagonal, 2's above and below that, etc. 
// 0 1 2 3 4
// 1 0 1 2 3
// 2 1 0 1 2
// 3 2 1 0 1
// 4 3 2 1 0
// Sample Output:

    
// 	  Input number or rows: 8                                                                                      
// 0  1  2  3  4  5  6  7                                                                                        
// 1  0  1  2  3  4  5  6                                                                                        
// 2  1  0  1  2  3  4  5                                                                                        
// 3  2  1  0  1  2  3  4                                                                                        
// 4  3  2  1  0  1  2  3                                                                                        
// 5  4  3  2  1  0  1  2                                                                                        
// 6  5  4  3  2  1  0  1                                                                                        
// 7  6  5  4  3  2  1  0 
 

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k, m = 0;
    cout << "\n\n Print patern........:\n";
    cout << "-----------------------------------\n";
    cout << " Input number or rows: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            for (j = 1; j <= i; j++) {
                cout << m << "  ";
            }
            for (k = 1; k <= n - i; k++) {
                cout << k << "  ";
            }
        }
        else {
            for (k = i - 1; k >= 1; k--) {
                cout << k << "  ";
            }
            cout << m << "  ";
            for (j = 1; j <= n - i; j++) {
                cout << j << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}


// 70. Write a program in C++ to convert a decimal number to binary number. 
// Sample Output:
// Input a decimal number: 35
// The binary number is: 100011

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
        int dec_num, rem, quot, i=1, j;
        int bin_num[100];

		cout << "\n\n Convert a decimal number to binary number:\n";
	cout << "---------------------------------------------------\n";
	cout << " Input a decimal number: ";
	cin>> dec_num;
        quot = dec_num;
        while(quot != 0)
        {
            bin_num[i++] = quot%2;
            quot = quot/2;
        }
        cout<<" The binary number is: ";
        for(j=i-1; j>0; j--)
        {
            cout<<bin_num[j];
        }
   cout<<("\n");  
 }  

// 71. Write a program in C++ to convert a decimal number to hexadecimal number. 
// Sample Output:
// Input a decimal number: 43
// The hexadecimal number is : 2B

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int dec_num, r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cout << "\n\n Convert a decimal number to hexadecimal number:\n";
	cout << "---------------------------------------------------\n";
	cout << " Input a decimal number: ";
	cin>> dec_num;
		
        while(dec_num>0)
        {
            r = dec_num % 16;
            hexdec_num = hex[r] + hexdec_num;
            dec_num = dec_num/16;
        }
        cout<<" The hexadecimal number is : "<<hexdec_num<<"\n"; 
	}

// 72. Write a program in C++ to convert a decimal number to octal number. 
// Sample Output:
// Input a decimal number: 15
// The octal number is: 17

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int dec_num, rem, quot, i=1, j;
    int oct_num[100];
	cout << "\n\n Convert a  decimal number to octal number:\n";
	cout << "-----------------------------------------------\n";
	cout << " Input a decimal number: ";
	cin>> dec_num;
        quot = dec_num;
        while(quot != 0)
        {
            oct_num[i++] = quot % 8;
            quot = quot/8;
        }
		
        cout<<" The octal number is: ";
        for(j=i-1; j>0; j--)
        {
            cout<<oct_num[j];
        }
		cout<<"\n";	
} 

// 73. Write a program in C++ to convert a binary number to decimal number. 
// Sample Output:
// Input a binary number: 1011
// The decimal number: 11

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
  long binaryNumber, decimalNumber = 0, j = 1, remainder;
	cout << "\n\n Convert a  binary number to decimal number:\n";
	cout << "-----------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNumber;
  while (binaryNumber != 0) 
  {
   remainder = binaryNumber % 10;
   decimalNumber = decimalNumber + remainder * j;
   j = j * 2;
   binaryNumber = binaryNumber / 10;
  }
  cout<<" The decimal number: " << decimalNumber<<"\n";
} 

// 74. Write a program in C++ to convert a binary number to hexadecimal number. 
// Sample Output:
// Input a binary number: 1011
// The hexadecimal value: B

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
  int hex[1000];
  int i = 1, j = 0, rem, dec = 0, binaryNumber;
	cout << "\n\n Convert a binary number to hexadecimal number:\n";
	cout << "----------------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNumber;
  while (binaryNumber > 0) 
  {
   rem = binaryNumber % 2;
   dec = dec + rem * i;
   i = i * 2;
   binaryNumber = binaryNumber / 10;
  }
   i = 0;
  while (dec != 0) 
  {
   hex[i] = dec % 16;
   dec = dec / 16;
   i++;
  }
  cout<<" The hexadecimal value: ";
  for (j = i - 1; j >= 0; j--)
  {
   if (hex[j] > 9) 
   {
    cout<<(char)(hex[j] + 55)<<"\n";
   } 
   else
   {
    cout<<hex[j]<<"\n";
   }
  }
}

// 75. Write a program in C++ to convert a binary number to octal number. 
// Sample Output:
// Input a binary number: 1011
// The equivalent octal value of 1011 is : 13

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
        int binnum1, binaryNumber,rem, decnum=0, quot, i=1, j;
        int octnum[100];
	cout << "\n\n Convert a binary number to octal number:\n";
	cout << "---------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNumber;
        binnum1=binaryNumber;
      while(binaryNumber > 0)
        {
            rem = binaryNumber % 10;
            decnum = decnum + rem*i;
            i = i*2;
            binaryNumber = binaryNumber/10;
        }   
		i=1;
        quot = decnum;
		
        while(quot > 0)
        {
            octnum[i++] = quot % 8;
            quot = quot / 8;
        }
        cout<<" The equivalent octal value of " <<binnum1<< " is : ";
        for(j=i-1; j>0; j--)
        {
            cout<<octnum[j];
        }
 cout<<"\n";
} 

// 76. Write a program in C++ to convert a octal number to decimal number. 
// Sample Output:
// Input any octal number: 17
// The equivalent decimal number: 15

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    long octal_num, decimal_num = 0;
     int i = 0;
	cout << "\n\n Convert any octal number to decimal number:\n";
	cout << "----------------------------------------------------\n";
	cout << " Input any octal number: ";
	cin>> octal_num;
    while (octal_num != 0) 
     {
      decimal_num = (long)(decimal_num + (octal_num % 10) * pow(8, 

i++));
      octal_num = octal_num / 10;
     }
    cout<<" The equivalent decimal number: " << decimal_num << "\n";	
} 

// 77. Write a program in C++ to convert a octal number to binary number. 
// Sample Output:
// Input any octal number: 17
// The equivalent binary number: 1111

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
  int octal_numvalues[] = {0, 1, 10, 11, 100, 101, 110, 111};
  long octal_num, tempoctal_num, binary_num, place;
  int rem;
	cout << "\n\n Convert any octal number to binary number:\n";
	cout << "------------------------------------------------\n";
	cout << " Input any octal number: ";
	cin>> octal_num;
	tempoctal_num = octal_num;
	binary_num = 0;
	place = 1;
	while (tempoctal_num != 0)
	{
	rem = (int)(tempoctal_num % 10);
	binary_num = octal_numvalues[rem] * place + binary_num;
	tempoctal_num /= 10;
	place *= 1000;
	}
  cout<<" The equivalent binary number: " << binary_num <<"\n";
} 

// 78. Write a program in C++ to convert a octal number to a hexadecimal number. 
// Sample Output:
// Input any octal number: 77
// The hexadecimal value of 77 is: 3F

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
 
int main()
{
    int ar1[20],ar2[20],ar3[20];
    int h,i,j,k,l,x,fr,flg,rem,n1,n3;    
    float rem1,n2,n4,dno;
    char octal_num[20];
    x=fr=flg=rem=0;
    rem1=0.0;
	cout << "\n\n Convert any octal number to a hexadecimal number:\n";
	cout << "------------------------------------------------------\n";
	cout << " Input any octal number: ";
	cin>> octal_num;	
	
    for(i=0,j=0,k=0;i<strlen(octal_num);i++)
    {
        if(octal_num[i]=='.')
        {
            flg=1;
        }
        else if(flg==0)
            ar1[j++]=octal_num[i]-48;
        else if(flg==1)
            ar2[k++]=octal_num[i]-48;
    }
    x=j;
    fr=k;
    for(j=0,i=x-1;j<x;j++,i--)
    {
        rem = rem +(ar1[j] * pow(8,i));
    }
    for(k=0,i=1;k<fr;k++,i++)
    {
        rem1 = rem1 +(ar2[k] / pow(8,i));
    }
    rem1=rem+rem1;
    dno=rem1;
    n1=(int)dno;
    n2=dno-n1;
 
    i=0;
    while(n1!=0)
    {
        rem=n1 % 16;
        ar3[i] = rem;
        n1=n1 /16;
        i++;
    }
    j=0;
    while(n2!=0.0)
    {
        n2=n2 * 16;
        n3=(int)n2;
        n4=n2-n3;
        n2=n4;
        ar1[j]=n3;
        j++;
        if(j==4)
        {
            break;
        }
    }
    l=i;
    cout<<" The hexadecimal value of "<<octal_num<<" is: ";
    for(i=l-1;i>=0;i--)
    {
        if(ar3[i]==10)
           cout<<"A";
        else if(ar3[i]==11)
           cout<<"B";
        else if(ar3[i]==12)
           cout<<"C";
        else if(ar3[i]==13)
           cout<<"D";
        else if(ar3[i]==14)
           cout<<"E";
        else if(ar3[i]==15)
           cout<<"F";
        else
        cout<<ar3[i];
    }
    h=j;
    cout<<".";
    for(k=0;k<h;k++)
    {
        if(ar1[k]==10)
           cout<<"A";
        else if(ar1[k]==11)
           cout<<"B";
        else if(ar1[k]==12)
           cout<<"C";
        else if(ar1[k]==13)
           cout<<"D";
        else if(ar1[k]==14)
           cout<<"E";
        else if(ar1[k]==15)
           cout<<"F";
        else
        cout<<ar1[k];
    }
    cout<<endl;    
}

// 79. Write a program in C++ to convert a hexadecimal number to decimal number. 
// Sample Output:
// Input any 32-bit Hexadecimal Number: 25
// The value in decimal number is: 37

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std; 
 
unsigned long Hex_To_Dec(char hex[]) 
{
  char *hexstring;
  int length = 0;
  const int hexbase = 16;     
  unsigned long dnum = 0;
  int i;
  for (hexstring = hex; *hexstring != '\0'; hexstring++) 
  {
      length++;
    }
  hexstring = hex;
  for (i = 0; *hexstring != '\0' && i < length; i++, hexstring++) 
  {
      if (*hexstring >= 48 && *hexstring <= 57) 
	  {  
          dnum += (((int)(*hexstring)) - 48) * pow(hexbase, length - i - 1);
        }
      else if ((*hexstring >= 65 && *hexstring <= 70))  
	  {  
          dnum += (((int)(*hexstring)) - 55) * pow(hexbase, length - i - 1);
        }
      else if (*hexstring >= 97 && *hexstring <= 102) 
	  {  
          dnum += (((int)(*hexstring)) - 87) * pow(hexbase, length - i - 1);
        }
      else {
          cout<<" The given hexadecimal number is invalid. \n";
        }
    }
  return dnum;
}
int  main() 
{
  unsigned long dnum;
  char hex[9];
	cout << "\n\n Convert any hexadecimal number to decimal number:\n";
	cout << "------------------------------------------------------\n";
	cout << " Input any 32-bit Hexadecimal Number: ";  
    cin>>hex;
 dnum = Hex_To_Dec(hex);
  cout<<" The value in decimal number is: "<<dnum<<"\n";
}

// 80. Write a program in C++ to convert hexadecimal number to binary number. 
// Sample Output:
// Input any 32-bit Hexadecimal Number: 5f
// The equivalant binary number is: 1011111

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std; 
 
unsigned long Hex_To_Dec(char hex[]) 
{
  char *hexstring;
  int length = 0;
  const int hexbase = 16;     
  unsigned long dnum = 0;
  int i;
  for (hexstring = hex; *hexstring != '\0'; hexstring++) 
  {
      length++;
    }
  hexstring = hex;
  for (i = 0; *hexstring != '\0' && i < length; i++, hexstring++) 
  {
      if (*hexstring >= 48 && *hexstring <= 57) 
	  {  
          dnum += (((int)(*hexstring)) - 48) * pow(hexbase, length - i - 1);
        }
      else if ((*hexstring >= 65 && *hexstring <= 70))  
	  {  
          dnum += (((int)(*hexstring)) - 55) * pow(hexbase, length - i - 1);
        }
      else if (*hexstring >= 97 && *hexstring <= 102) 
	  {  
          dnum += (((int)(*hexstring)) - 87) * pow(hexbase, length - i - 1);
        }
      else {
          cout<<" The given hexadecimal number is invalid. \n";
        }
    }
  return dnum;
}

int  main() 
{
  unsigned long dnum;
  char hex[9];
          int dec_num, rem=1, m, n;
        int bin_num[100],quot;
	dec_num=0;
	cout << "\n\n Convert any hexadecimal number to binary number:\n";
	cout << "------------------------------------------------------\n";
	cout << " Input any 32-bit Hexadecimal Number: ";  
    cin>>hex;
    dnum = Hex_To_Dec(hex);
    quot = dnum;
    cout<<" The equivalent binary number is: ";
       
        while(quot != 0)
        {
            bin_num[m++] = quot % 2;
            quot = quot/2;
        }
        for(n=m-1; n>=0; n--)
        {
            dec_num=(dec_num*10)+bin_num[n];
        }
		cout<<dec_num<<endl;
		cout<<endl;
}

// 81. Write a program in C++ to convert a hexadecimal number to octal number. 
// Sample Output:
// Input any 32-bit Hexadecimal Number: 5f The equivalant octal number is: 137

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std; 
 
unsigned long Hex_To_Dec(char hex[]) 
{
  char *hexstring;
  int length = 0;
  const int hexbase = 16;     
  unsigned long dnum = 0;
  int i;
  for (hexstring = hex; *hexstring != '\0'; hexstring++) 
  {
      length++;
    }
  hexstring = hex;
  for (i = 0; *hexstring != '\0' && i < length; i++, hexstring++) 
  {
      if (*hexstring >= 48 && *hexstring <= 57) 
	  {  
          dnum += (((int)(*hexstring)) - 48) * pow(hexbase, length - i - 1);
        }
      else if ((*hexstring >= 65 && *hexstring <= 70))  
	  {  
          dnum += (((int)(*hexstring)) - 55) * pow(hexbase, length - i - 1);
        }
      else if (*hexstring >= 97 && *hexstring <= 102) 
	  {  
          dnum += (((int)(*hexstring)) - 87) * pow(hexbase, length - i - 1);
        }
      else {
          cout<<" The given hexadecimal number is invalid. \n";
        }
    }
  return dnum;
}

int  main() 
{
  unsigned long dnum;
  char hex[9];
          int dec_num, rem=1, m, n;
        int oct_num[100],quot;
	dec_num=0;
	cout << "\n\n Convert any hexadecimal number to octal number:\n";
	cout << "----------------------------------------------------\n";
	cout << " Input any 32-bit Hexadecimal Number: ";  
    cin>>hex;
    dnum = Hex_To_Dec(hex);
    quot = dnum;
    cout<<" The equivalent octal number is: ";
	quot = dnum;
        while(quot != 0)
        {
            oct_num[m++] = quot % 8;
            quot = quot/8;
        }
        for(n=m-1; n>=0; n--)
        {
            cout<<oct_num[n];
        }
		cout<<"\n";
       
}

// 82. Write a program in C++ to compare two numbers. 
// Sample Output:
// Input the first integer: 25
// Input the second integer: 15
// 25 != 15
// 25 > 15
// 25 >= 15

#include <iostream>
using namespace std;
 
int main()
{
int num1,num2;
    cout << "\n\n Compare the first number with second number numbers:\n";
	cout << "---------------------------------------------------------\n";
	cout << " Input the first integer: ";
	cin>> num1;
	cout << " Input the second integer: ";
	cin>> num2;	
	
		if ( num1 == num2 )           
            cout<< num1<< " == " << num2 <<endl;  
        if ( num1 != num2 )          
            cout<< num1<<" != " << num2<<endl; 
        if ( num1 < num2 )          
            cout<< num1<< " < "<<num2<<endl; 
        if ( num1 > num2 )          
            cout<< num1<<" > "<< num2 <<endl; 
        if ( num1 <= num2 )          
            cout<<num1<<" <= "<< num2<<endl; 
        if ( num1 >= num2 )          
            cout<<num1<< " >= "<< num2<<endl; 	
}

// 83. Write a program in C++ to compute the sum of the digits of an integer. 
// Sample Output:
// Input any number: 25
// The sum of the digits of the number 25 is: 7

#include <iostream>
using namespace std;
 
int main()
{
	int num1,sum,n;
	sum=0;
    cout << "\n\n Compute the sum of the digits of an integer:\n";
	cout << "-------------------------------------------------\n";
	cout << " Input any number: ";
	cin>> num1;
	n=num1;
        while (num1 != 0) 
		{
            sum += num1 % 10;
            num1 /= 10;
        }
            cout<<" The sum of the digits of the number "<<n<<" is: " << sum <<endl;  
}

// 84. Write a program in C++ to compute the sum of the digits of an integer using function. 
// Sample Output:
// Input any number: 255 The sum of the digits of the number 255 is: 12

#include <iostream>
using namespace std;

    int sumDigits(int num1,int n) 
	{
        int sum = 0;
        while (num1 != 0) 
		{
            sum += num1 % 10;
            num1 /= 10;
        }
        return sum;
    }
 
int main()
{
	int num1,sum,n;
	sum=0;
    cout << "\n\n Compute the sum of the digits of an integer:\n";
	cout << "-------------------------------------------------\n";
	cout << " Input any number: ";
	cin>> num1;
	n=num1;
	cout<<" The sum of the digits of the number "<<n<<" is: " << sumDigits(num1,n) <<endl;
	}

// 85. Write a program in C++ to reverse a string. 
// Sample Output:
// Enter a string: w3resource The string in reverse are: ecruoser3w

#include <iostream>
using namespace std;

void revOfString(const string& a);

int main()
{
    string str;
    cout << "\n\n Reverse a string:\n";
	cout << "----------------------\n";
	cout << " Enter a string: ";
    getline(cin, str);
    cout << " The string in reverse are: ";    
    revOfString(str);
    return 0;    
}

void revOfString(const string& str)
{
    size_t lengthOfString = str.size();

    if(lengthOfString == 1)
       cout << str << endl;
    else
    {
       cout << str[lengthOfString - 1];
       revOfString(str.substr(0, lengthOfString - 1));
    }
}

// 86. Write a program in C++ to count the letters, spaces, numbers and other characters of an input string. 
// Sample Output:
// Enter a string: This is w3resource.com
// The number of characters in the string is: 22
// The number of alphabets are: 18
// The number of digits are: 1
// The number of spaces are: 2
// The number of other characters are: 1

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    char *array_point;
    char c1;
    int count=0, alp=0, digt=0, spcchr=0,oth=0;
    char string_array[100];    
    string str1;
    
    cout << "\n\n Count the letters, spaces, numbers and other characters:\n";
	cout << "-------------------------------------------------------------\n";
	cout << " Enter a string: ";
    getline(cin, str1);
    cout<<endl;
    strcpy(string_array, str1.c_str());
    for(array_point=string_array;*array_point!='\0';array_point++)
    {
        c1=*array_point;
        count++;
		if (isalpha(c1))
		{
		    alp++;
		}
		else
		if (isdigit(c1))
		{
		    digt++;
		}
		else
        if (isspace(c1))
        {
            spcchr++;
        }
        else
        {
            oth++;;
        }
    }
        cout <<" The number of characters in the string is: "<<count<<endl;      
        cout<<" The number of alphabets are: "<<alp<<endl;
        cout<<" The number of digits are: "<<digt<<endl; 
        cout<<" The number of spaces are: "<<spcchr<<endl;
        cout<<" The number of other characters are: "<<oth<<endl<<endl;        
     return 0;
}

// 87. Write a program in C++ to create and display unique three-digit number using 1, 2, 3, 4. Also count how many three-digit numbers are there. 
// Sample Output:
// The three-digit numbers are:
// 123 124 132 134 142 143 213 214 231 234 241 243 312 314 321 324 341 342 412 413 421 423 431 432
// Total number of the three-digit-number is: 24

#include <iostream>
using namespace std;

void revOfString(const string& a);

int main()
{
    string str;
    cout << "\n\n Create and display the unique three-digit number using 1, 2, 3, 4:\n";
	cout << "-------------------------------------------------------------------\n";
	cout<<" The three-digit numbers are: "<<endl;
		int amount = 0;
		cout<<" ";
		for(int i = 1; i <= 4; i++)
		{
			for(int j = 1; j <= 4; j++)
			{
				for(int k = 1; k <= 4; k++)
				{
					if(k != i && k != j && i != j)
					{
						amount++;
						cout<<i <<j<<k<<" ";
					}
				}
			}
		}
		cout<<endl<<" Total number of the three-digit-number is: "<< amount<<endl<<endl;
}
