// 1. Write a program in C++ to check whether a given number is an ugly number or not. 
// Sample output:
// Input an integer number: 25
// It is an ugly number.

# include <iostream>
# include <string>
using namespace std;
int main()
{
int n,x=0;
 cout << "\n\n Check whether a given number is an Ugly number:\n";
 cout << "----------------------------------------------------\n";
cout << "Input an integer number: ";
cin >> n;
      if (n <= 0) {  
            cout <<"Input a correct number.";  
        }
       while (n != 1) 
       {  
            if (n % 5 == 0) 
            {  
                n /= 5;  
            } 
            else if (n % 3 == 0) 
            {  
                n /= 3;  
            } 
            else if (n % 2 == 0) 
            {  
                n /= 2;  
            } 
            else 
            {  
                cout <<"It is not an Ugly number."<<endl; 
                x = 1;  
                break;  
            }  
        } 
		        if (x==0)
		        { 
                cout <<"It is an Ugly number."<<endl;
                }
}

// 2. Write a program in C++ to check whether a given number is Abundant or not. 
// Sample Output:
// Input an integer number: 35
// The number is not Abundant.

#include <bits/stdc++.h>
using namespace std;
int getSum(int n)
{
    int sum = 0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (n/i == i)
                sum = sum + i;
            else // Otherwise take both
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n;
    return sum;
}
bool checkAbundant(int n)
{
    return (getSum(n) > n);
}
int main()
{
int n;
 cout << "\n\n Check whether a given number is an Abundant number:\n";
 cout << " --------------------------------------------------------\n";
cout << " Input an integer number: ";
cin >> n;
    checkAbundant(n)? cout << " The number is Abundant.\n" : cout << " The number is not Abundant.\n";
    return 0;
}

// 3. Write a program in C++ to find the Abundant numbers (integers) between 1 to 1000. 
// Sample Output:

//  The Abundant number between 1 to 1000 are:                                                          
//  -----------------------------------------------                                                     
// 12 18 20 24 30 36 40 42 48 54 56 60 66 70 72 78 80 84 88 90 96 100 102 104 108 112 114 120 126 132 13
// 8 140 144 150 156 160 162 168 174 176 180 186 192 196 198 200 204 208 210 216 220 222 224 228 234 240
//  246 252 258 260 264 270 272 276 280 282 288 294 300 304 306 308 312 318 320 324 330 336 340 342 348 
// 350 352 354 360 364 366 368 372 378 380 384 390 392 396 400 402 408 414 416 420 426 432 438 440 444 4
// 48 450 456 460 462 464 468 474 476 480 486 490 492 498 500 504 510 516 520 522 528 532 534 540 544 54
// 6 550 552 558 560 564 570 572 576 580 582 588 594 600 606 608 612 616 618 620 624 630 636 640 642 644
//  648 650 654 660 666 672 678 680 684 690 696 700 702 704 708 714 720 726 728 732 736 738 740 744 748 
// 750 756 760 762 768 770 774 780 784 786 792 798 800 804 810 812 816 820 822 828 832 834 836 840 846 8
// 52 858 860 864 868 870 876 880 882 888 894 896 900 906 910 912 918 920 924 928 930 936 940 942 945 94
// 8 952 954 960 966 968 972 978 980 984 990 992 996 1000 


#include <bits/stdc++.h>
using namespace std;
int getSum(int n)
{
    int sum = 0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (n/i == i)
                sum = sum + i;
            else 
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n;
    return sum;
}
bool checkAbundant(int n)
{
    return (getSum(n) > n);
}
int main()
{
int n;
 cout << "\n\n The Abundant number between 1 to 1000 are: \n";
 cout << " -----------------------------------------------\n";
for(int j=1;j<=1000;j++)
{
    n=j;
    checkAbundant(n)? cout << n<<" ": cout << "";
}
 cout << endl;
}

// 4. Write a program in C++ to check whether a given number is Perfect or not. 
// Sample Output:
// Input a number: 28
// 28 is a perfect number

# include <iostream>
# include <string>
using namespace std;
int main()
{
    int i=1, u=1, sum=0,n;
 cout << "\n\n Check whether a given number is a Perfect number:\n";
 cout << "------------------------------------------------------\n";
cout << "Input a number: ";
cin >> n;
   while(u<=n)
   {                              
     if(u<n)
     {
      if(n%u==0 )
      sum=sum+u;
     }                         
     u++;
   }                           
   if(sum==n)
   {
    cout<<n<<" is a Perfect number."<<"\n";
   }
   else
   {
     cout<<n<<" is not a Perfect number."<<"\n";  
   }
}

// 5. Write a program in C++ to find Perfect numbers and number of Perfect numbers between 1 to 1000. 
// Sample Output:
// The Perfect numbers are : 6 is a perfect number. 28 is a perfect number. 496 is a perfect number. Number of perfect numbers between 1 to 1000 is: 3

# include <iostream>
# include <string>
using namespace std;
int main()
{
    int i=1, u=1, sum=0,ctr=0;
 cout << "\n\n Find the Perfect numbers and number of Perfect numbers between 1 to 1000:\n";
 cout << "------------------------------------------------------------------------------\n";
cout << "The Perfect numbers are : \n";
   while(i<=1000)
 {                                 
   while(u<=1000)
   {                              
     if(u<i)
     {
      if(i%u==0 )
      sum=sum+u;
     }                         
     u++;
   }                           
   if(sum==i)
   {
       ctr++;
    cout<<i<<" is a Perfect number."<<"\n";
   }
   i++;
   u=1;  sum=0;
 } 
     cout<<"Number of Perfect numbers between 1 to 1000 is: "<<ctr<<"\n";
}

// 6. Write a program in C++ to check whether a given number is Deficient or not. 
// Sample Output:
// Input an integer number: 25
// The number is Deficient.

#include <bits/stdc++.h>
using namespace std;
int getSum(int n)
{
    int sum = 0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (n/i == i)
                sum = sum + i;
            else 
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n;
    return sum;
}
bool checkDeficient(int n)
{
    return (getSum(n) < n);
}
int main()
{
int n;
 cout << "\n\n Check whether a given number is an Deficient number:\n";
 cout << " --------------------------------------------------------\n";
cout << " Input an integer number: ";
cin >> n;
    checkDeficient(n)? cout << " The number is Deficient.\n" : cout << " The number is not Deficient.\n";
    return 0;
}

// 7. Write a program in C++ to find the Deficient numbers (integers) between 1 to 100. 
// Sample output:
// The Deficient numbers between 1 to 100 are:
// ------------------------------------------------
// 1 2 3 4 5 7 8 9 10 11 13 14 15 16 17 19 21 22 23 25 26 27 29 31 32 33 3 4 35 37 38 39 41 43 44 45 46 47 49 50 51 52 53 55 57 58 59 61 62 63 64 65 67 68 69 71 73 74 75 76 77 79 81 82 83 85 86 87 89 91 92 93 94 95 97 98 99
// The Total number of Deficient numbers are: 76

#include <bits/stdc++.h>
using namespace std;
int getSum(int n)
{
    int sum = 0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (n/i == i)
                sum = sum + i;
            else 
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n;
    return sum;
}
bool checkDeficient(int n)
{
    return (getSum(n) < n);
}
int main()
{
int n,ctr=0;
 cout << "\n\n The Deficient numbers between 1 to 100 are: \n";
 cout << " ------------------------------------------------\n";
for(int j=1;j<=100;j++)
{
    n=j;
    checkDeficient(n)? cout << n<<" ": cout << "";
    if(checkDeficient(n))
    {ctr++;}
}
 cout << endl<<"The Total number of Deficient numbers are: "<<ctr << endl;
}

// 8. Write a program in C++ to generate random integers in a specific range. 
// Sample Output:
// Input the lower range of number: 15
// Input the upper range of number: 25
// The random number between 15 and 25 is: 18

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() 
{
int ln,un;
 cout << "\n\n Generate random integer in a specific range: \n";
 cout << " --------------------------------------------------\n";
cout << " Input the lower range of number: ";
cin >> ln;
cout << " Input the upper range of number: ";
cin >> un;
     srand(time(NULL));
     cout<<" The random number between "<<ln<<" and "<<un<<" is: ";
cout <<  ln+rand() % static_cast<int>(un-ln+1) << endl;     
     return 0;

}

// 9. Write a program in C++ to check whether a given number is a Kaprekar number or not. 
// Sample Output:
// Input a number: 45.
// 45 is a Kaprekar number

#include<bits/stdc++.h>
using namespace std;
 
bool chkkaprekar(int n)
{
    if (n == 1)
       return true;
    int sqr_n = n * n;
    int ctr_digits = 0;
    while (sqr_n)
    {
        ctr_digits++;
        sqr_n /= 10;
    }
    sqr_n = n*n; 
    for (int r_digits=1; r_digits<ctr_digits; r_digits++)
    {
         int eq_parts = pow(10, r_digits);

         if (eq_parts == n)
            continue;
         int sum = sqr_n/eq_parts + sqr_n % eq_parts;
         if (sum == n)
           return true;
    }
    return false;
}
int main()
{
int kpno;
 cout << "\n\n Check whether a given number is a Kaprekar number: \n";
 cout << " -------------------------------------------------------\n";
cout << " Input a number: ";
cin >> kpno;
          chkkaprekar(kpno)? cout << kpno <<" is a Kaprekar number. ": cout << kpno<<" is not a kaprekar number.";
          cout <<endl; 
}

// 10. Write a program in C++ to generate and show all Kaprekar numbers less than 1000. 
// Sample Output:
// The Kaprekar numbers less than 1000 are:
// 1 9 45 55 99 297 703 999

#include<bits/stdc++.h>
using namespace std;
 
bool chkkaprekar(int n)
{
    if (n == 1)
       return true;
 

    int sqr_n = n * n;
    int ctr_digits = 0;
    while (sqr_n)
    {
        ctr_digits++;
        sqr_n /= 10;
    }
 
    sqr_n = n*n; 
 
    for (int r_digits=1; r_digits<ctr_digits; r_digits++)
    {
         int eq_parts = pow(10, r_digits);

         if (eq_parts == n)
            continue;
 
         int sum = sqr_n/eq_parts + sqr_n % eq_parts;
         if (sum == n)
           return true;
    }
    return false;
}
int main()
{
 cout << "\n\n Generate and show all Kaprekar numbers less than 1000: \n";
 cout << " -----------------------------------------------------------\n";
   cout << " The Kaprekar numbers less than 1000 are: "<<endl;
   for (int i=1; i<1000; i++)
      {
          if (chkkaprekar(i))
          {
              cout << i << " ";
              
          }
          
      }
          cout <<endl; 
    return 0;
}

// 11. Write a program in C++ to check whether a number is Lychrel number or not. 
// Sample Output:
// Input a number: 196
// The number is a Lychrel number.

#include <iostream>
using namespace std;


long long int numReverse(long long int number)
{
    long long int rem = 0;
    while (number > 0)
    {
    rem = (rem * 10) + (number % 10);
        number = number / 10;
    }
    return rem;
}
bool is_Palindrome(long long int num)
{
    return (num == numReverse(num));
}
bool isLychrel(int num, const int iterCount = 500)
{
    long long int temp = num;
    long long int rev;
    for (int i = 0; i < iterCount; i++)
    {
        rev = numReverse(temp);
        if (is_Palindrome(rev + temp))
            return false;
        temp = temp + rev;
    }
    return true;
}
int main()
{
int lyno;
bool l;
 cout << "\n\n Check whether a given number is a Lychrel number: \n";
 cout << " ------------------------------------------------------\n";
 cout << " Input a number: ";
 cin >> lyno;
    l = isLychrel(lyno);
    if (l==0)
    {
        cout <<" The number is not a Lychrel number."<<endl;
    }
    else
    if(l==1)
    {
        cout<<" The number is a Lychrel number."<<endl;;
    }
    return 0;
}

// 12. Write a program in C++ to find the Lychrel numbers and the number of Lychrel number within the range 1 to 1000(after 500 iteration). 
// Sample Output:
// The Lychrel numbers are : 196 295 394 493 592 689 691 788 790 879 887 978 986
// The number of Lychrel numbers are: 13

#include <iostream>
using namespace std;


long long int numReverse(long long int number)
{
    long long int rem = 0;
    while (number > 0)
    {
    rem = (rem * 10) + (number % 10);
        number = number / 10;
    }
    return rem;
}
bool is_Palindrome(long long int num)
{
    return (num == numReverse(num));
}
bool isLychrel(int num, const int iterCount = 500)
{
    long long int temp = num;
    long long int rev;
    for (int i = 0; i < iterCount; i++)
    {
        rev = numReverse(temp);
        if (is_Palindrome(rev + temp))
            return false;
        temp = temp + rev;
    }
    return true;
}
int main()
{
int lyno,ctr=0,i;
bool l;
 cout << "\n\n Find the Lychrel numbers between 1 to 1000(after 500 iteration): \n";
 cout << " ----------------------------------------------------------------------\n";
 cout << " The Lychrel numbers are : ";
for (i=1;i<=1000;i++)
{
lyno=i;
    l = isLychrel(lyno);
    if(l==1)
    {
	ctr++;
        cout<<lyno<<" ";
    }}
    cout<<endl;
    cout <<" The number of Lychrel numbers are: "<<ctr<<endl;
    return 0;

}

// 13. Write a program in C++ to generate and show the first 15 Narcissistic decimal numbers. 
// Sample Output:
// The first 15 narcissistic decimal numbers are:
// 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
 cout << "\n\n Find the first 15 Narcissistic decimal numbers: \n";
 cout << " -----------------------------------------------------\n";
  cout << " The first 15 Narcissistic decimal numbers are: \n";
    int i,ctr,j,orn,n,m,sum;
    orn=1;
    for (i=1;i<=15;)
    {
    ctr=0;
    sum=0;
    n=orn;
       while(n>0) 
       {
          n=n/10;
           ctr++;
       }
        n=orn;
       while(n>0) 
       {
          m=n % 10;
          sum=sum+pow(m,ctr);
          n=n/10;
       }
       if(sum==orn)
       {
           cout<<orn<<" ";
        i++;
       }
    orn++;
    }
	cout<<endl;
}

// 14. Write a program in C++ to display the first 10 Lucus numbers. 
// Sample Output:
// The first 10 Lucus numbers are:
// 2 1 3 4 7 11 18 29 47 76

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
 cout << "\n\n Find the first 10 Lucus numbers: \n";
 cout << " -------------------------------------\n";
  cout << " The first 10 Lucus numbers are: "<<endl;

    int n = 10;  
     int n1 = 2, n2 = 1, n3;  
        if (n > 1)
		{  
            cout<<n1<<" "<<n2<<" ";
            for(int i = 2; i < n; ++i)
			{  
                n3 = n2;  
                n2 += n1;  
                n1 = n3;  
                cout<< n2 <<" ";
            } 
            cout<<endl;
        }  
        else if (n == 1)
        {
           cout<<n2<<" "; 
           cout<<endl; 
        }
        else 
        { 
            cout<<"Input a positive number."<<endl;
        }
}

// 15. Write a program in C++ to display the first 10 Catlan numbers. 
// Sample Output:
// The first 10 Catlan numbers are:
// 1 1 2 5 14 42 132 429 1430 4862

#include<iostream>
using namespace std;
unsigned long int cataLan(unsigned int n)
{
    if (n <= 1) return 1;
    unsigned long int catno = 0;
    for (int i=0; i<n; i++)
        catno += cataLan(i)*cataLan(n-i-1);
    return catno;
}
int main()
{
 cout << "\n\n Find the first 10 Catlan numbers: \n";
 cout << " --------------------------------------\n";
  cout << " The first 10 Catlan numbers are: "<<endl;
    for (int i=0; i<10; i++)
        cout << cataLan(i) << " ";
  cout <<endl;		
    return 0;
}

// 16. Write a program in C++ to check a number is a Happy or not. 
// Sample Output:
// Input a number: 23
// 23 is a Happy number

#include <bits/stdc++.h>
using namespace std;
int SumOfSquNum(int givno)
{
    int SumOfSqr = 0;
    while (givno)
    {
        SumOfSqr += (givno % 10) * (givno % 10);
        givno /= 10;
    }
    return SumOfSqr;
}
bool checkHappy(int chkhn)
{
    int slno, fstno;
    slno = fstno = chkhn;
    do
    {
        slno = SumOfSquNum(slno);
        fstno = SumOfSquNum(SumOfSquNum(fstno));
    }
    while (slno != fstno);
    return (slno == 1);
}
int main()
{
int hyno;
 cout << "\n\n Check whether a number is Happy number or not: \n";
 cout << " ---------------------------------------------------\n";
 cout << " Input a number: ";
 cin >> hyno;

    if (checkHappy(hyno))
        cout << hyno << " is a Happy number\n";
    else
        cout << hyno << " is not a Happy number\n";
}

// 17. Write a program in C++ to find the Happy numbers between 1 to 1000. 
// Sample Output:
// The happy numbers between 1 to 1000 are:
// 1 7 10 13 19 23 28 31 32 44 49 68 70 79 82 86 91 94 97 100 103 109 129 130 133 139 167 176 188 190 19 2 193 203 208 219 226 230 236 239 262 263 280 291 293 301 302 310 313 319 320 326 329 331 338 356 362 365 367 368 376 379 383 386 391 392 397 404 409 440 446 464 469 478 487 490 496 536 556 563 565 566 608 617 622 623 632 635 637 638 644 649 653 655 656 665 671 673 680 683 694 700 709 716 736 739 748 761 763 784 790 793 802 806 818 820 833 836 847 860 863 874 881 888 899 901 904 907 910 912 913 921 923 931 932 937 940 946 964 970 973 989 998 1000

#include <bits/stdc++.h>
using namespace std;
int SumOfSquNum(int givno)
{
    int SumOfSqr = 0;
    while (givno)
    {
        SumOfSqr += (givno % 10) * (givno % 10);
        givno /= 10;
    }
    return SumOfSqr;
}
bool checkHappy(int chkhn)
{
    int slno, fstno;
    slno = fstno = chkhn;
    do
    {
        slno = SumOfSquNum(slno);
        fstno = SumOfSquNum(SumOfSquNum(fstno));
    }
    while (slno != fstno);
    return (slno == 1);
}
int main()
{
int j,ctr;
 cout << "\n\n Find the Happy numbers between 1 to 1000: \n";
 cout << " ----------------------------------------------\n";
 cout << " The Happy numbers between 1 to 1000 are: "<<endl;

 for (j=1;j<=1000;j++)
		{
			if (checkHappy(j))
			cout<<j<<" ";

		}
 cout <<endl;		
 }

// 18. Write a program in C++ to check whether a number is Disarium or not. 
// Sample Output:
// Input a number: 9
// The given number is a Disarium Number

 #include<bits/stdc++.h>
using namespace std;
 
int DigiCount(int n)
{
    int ctr_digi = 0;
    int tmpx = n;
    while (tmpx)
    {
        tmpx = tmpx/10;
 
        ctr_digi++;
    }
    return ctr_digi;
}
bool chkDisarum(int n)
{
    int ctr_digi = DigiCount(n);
    int s = 0; 
    int x = n;
    int pr;
    while (x)
    {
        pr = x % 10;
        s = s + pow(pr, ctr_digi--);
        x = x/10;
    }
    return (s == n);
}
int main()
{

int dino;
 cout << "\n\n Check whether a number is Disarium Number or not: \n";
 cout << " ---------------------------------------------------\n";
 cout << " Input a number: ";
 cin >> dino;	
	
    if( chkDisarum(dino))
        cout << " The given number is a Disarium Number."<<endl;
    else
        cout << " The given number is not a Disarium Number."<<endl;
    return 0;
}

// 19. Write a program in C++ to find Disarium numbers between 1 to 1000. 
// Sample Output:
// The Disarium numbers are:
// 1 2 3 4 5 6 7 8 9 89 135 175 518 598

#include<bits/stdc++.h>
using namespace std;
 
int DigiCount(int n)
{
    int ctr_digi = 0;
    int tmpx = n;
    while (tmpx)
    {
        tmpx = tmpx/10;
 
        ctr_digi++;
    }
    return ctr_digi;
}
bool chkDisarum(int n)
{
    int ctr_digi = DigiCount(n);
    int s = 0; 
    int x = n;
    int pr;
    while (x)
    {
        pr = x % 10;
        s = s + pow(pr, ctr_digi--);
        x = x/10;
    }
    return (s == n);
}
int main()
{

int i;
 cout << "\n\n Find Disarium Numbers between 1 to 1000: \n";
 cout << " ---------------------------------------------\n";
 cout << " The Disarium numbers are: "<<endl;
for(i=1;i<=1000;i++)
{
    if( chkDisarum(i))
	cout <<i<<" "; 
}	
	cout <<endl;
}


// 20. Write a program in C++ to check if a number is Harshad Number or not. 
// Sample Output:
// Input a number: 18
// The given number is a Harshad Number.

#include<bits/stdc++.h>
using namespace std;
bool chkHarshad(int n)
{
    int s = 0;
	int tmp;
    for (tmp=n; tmp>0; tmp /= 10)
        s += tmp % 10;
    return (n%s == 0);
}
 

int main()
{
    int hdno;
 cout << "\n\n Check whether a number is Harshad Number or not: \n";
 cout << " ---------------------------------------------------\n";
 cout << " Input a number: ";
 cin >> hdno;
 
     if( chkHarshad(hdno))
        cout << " The given number is a Harshad Number."<<endl;
    else
        cout << " The given number is not a Harshad Number."<<endl;
    return 0;

}

// 21. Write a program in C++ to find Harshad Number between 1 to 100. 
// Sample Output:
// Input number of terms: 5
// The even numbers are: 2 4 6 8 10
// The Sum of even Natural Numbers upto 5 terms: 30

#include<bits/stdc++.h>
using namespace std;
bool chkHarshad(int n)
{
    int s = 0;
	int tmp;
    for (tmp=n; tmp>0; tmp /= 10)
        s += tmp % 10;
    return (n%s == 0);
}
int main()
{
    int i;
 cout << "\n\n Find Harshad Numbers between 1 to 100: \n";
 cout << " ---------------------------------------------------\n";
 cout << " The Harshad Numbers are: "<<endl;
for(i=1;i<=100;i++)
{
     if( chkHarshad(i))
        cout << i<<" ";
}
        cout << endl;

}

// 22. Write a program in C++ to check whether a number is a Pronic Number or Heteromecic Number or not. 
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
// Sample Output:
// Input a number: 42
// The given number is a Pronic Number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int prno,i,n,flg;
 cout << "\n\n Check whether a number is a Pronic Number or Heteromecic Number or not: \n";
 cout << " ----------------------------------------------------------------------------\n";
 cout << " Input a number: ";
 cin >> prno;
    for(i=1;i<=prno;i++)
        {
            if(i*(i+1)==prno) 
            {
            flg=1;
            break;
            }
        }
  
            if(flg==1)
            {
            cout << " The given number is a Pronic Number."<<endl;
            }
            else
            {
            cout << " The given number is not a Pronic Number."<<endl;
            }
}

// 23. Write a program in C++ to find Pronic Number between 1 to 1000. 
// Sample Output:
// The Pronic numbers are:
// 2 6 12 20 30 42 56 72 90 110 132 156 182 210 240 272 306 342 380 420 462 506 552 600 650 702 756 812 870 930 992

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int prno,i,n,flg;
 cout << "\n\n Find the Pronic Numbers between 1 to 1000: \n";
 cout << " -----------------------------------------------\n";
 cout << " The Pronic numbers are: "<<endl;
 for(prno=1;prno<=1000;prno++)
 {
     flg=0;
    for(i=1;i<=prno;i++)
        {
            if(i*(i+1)==prno) 
            {
            flg=1;
            break;
            }
        }
            if(flg==1)
            {
            cout << prno<<" ";
            }
 }
            cout << endl;
}

// 24. Write a program in C++ to check if a number is Authomorphic or not. 
// Sample Output:
// Input a number: 25
// The given number is an Automorphic Number.

#include<iostream>
using namespace std;
bool chkAutomor(int num1)
{
    int sqno = num1 * num1;
    while (num1 > 0)
    {
        if (num1 % 10 != sqno % 10)
            return false;
        num1 /= 10;
        sqno /= 10;
    }
    return true;
}
int main()
{
    int auno;
 cout << "\n\n Check whether a number is an Authomorphic Number or not: \n";
 cout << " ------------------------------------------------------------\n";
 cout << " Input a number: ";
 cin >> auno;	
 
      if( chkAutomor(auno))
        cout << " The given number is an Automorphic Number."<<endl;
    else
        cout << " The given number is not an Authomorphic Number."<<endl;
    return 0;
}

// 25. Write a program in C++ to find the Authomorphic numbers between 1 to 1000. 
// Sample Output:
// The Authomorphic numbers are:
// 1 5 6 25 76 376 625

#include<iostream>
using namespace std;
bool chkAutomor(int num1)
{
    int sqno = num1 * num1;
    while (num1 > 0)
    {
        if (num1 % 10 != sqno % 10)
            return false;
        num1 /= 10;
        sqno /= 10;
    }
    return true;
}
int main()
{
    int i;
 cout << "\n\n Find the the Authomorphic numbers between 1 to 1000 \n";
 cout << " -------------------------------------------------------\n";
 cout << " The Authomorphic numbers are: "<<endl;
	for(i=1;i<=1000;i++)
	{
      if( chkAutomor(i))
        cout << i<<" ";
	}
cout<<endl;
}

// 26. Write a program in C++ to check whether a number is a Duck Number or not. 
// Sample Output:
// Input a number: 30
// The given number is a Duck Number.

# include <bits/stdc++.h>
using namespace std;

int main()
{
    int dno,dkno,r,flg;
	flg=0;
 cout << "\n\n Check whether a number is a Duck Number or not: \n";
 cout << " ----------------------------------------------------\n";
 cout << " Input a number: ";
 cin >> dkno;
 dno=dkno;
    while(dkno>0)
        {
            if(dkno % 10 == 0)
            {
            flg=1;
            break;
            }
			dkno/=10;
        }
            if(dno>0 && flg==1)
            {
            cout << " The given number is a Duck Number."<<endl;
            }
            else
            {
            cout << " The given number is not a Duck Number."<<endl;
            }
}

// 27. Write a program in C++ to find Duck Numbers between 1 to 500. 
// Sample Output:
// The Duck numbers are:
// 10 20 30 40 50 60 70 80 90 100 101 102 103 104 105 106 107 108 109 110 120 130 140 150 160 170 180 190 200 201 202 203 204 205 206 207 208 209 210 220 230 240 250 260 270 280 290 300 301 302 303 304 305 306 307 30 8 309 310 320 330 340 350 360 370 380 390 400 401 402 403 404 405 406 4 07 408 409 410 420 430 440 450 460 470 480 490 500

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int dno,dkno,r,flg;
	flg=0;
 cout << "\n\n Find Duck Numbers between 1 to 500: \n";
 cout << " ----------------------------------------\n";
 cout << " The Duck numbers are: "<<endl;
for(dkno=1;dkno<=500;dkno++)
	{
	dno=dkno;
	flg=0;
    while(dno>0)
        {
            if(dno % 10==0)
            {
            flg=1;
            break;

            }
			dno/=10;
        }
            if(dkno>0 && flg==1)
            {
            cout << dkno<<" ";
            }
	}
	cout<<endl;
}

// 28. Write a program in C++ to check two numbers are Amicable numbers or not. 
// Sample Output:
// Input the 1st number : 220 Input the 2nd number : 284 The given numbers are an Amicable pair.

#include <bits/stdc++.h>
using namespace std;
 
int ProDivSum(int n)
{
    int sum = 1;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            sum += i;
            if (n/i != i)
                sum += n/i;
        }
    }
    return sum;
}
bool chkAmicable(int a,int b)
{
    return(ProDivSum(a) == b && ProDivSum(b) == a);
}
int main()
{
    int n, i, j, ctr,nm1,nm2;
 cout << "\n\n Check whether two numbers are Amicable pairs or not: \n";
 cout << "\n Sample: (220, 284), (1184, 1210), (2620, 2924).. \n";
 cout << " --------------------------------------------------------\n";	
      cout<<" Input the 1st number : ";
      cin>>nm1;
      cout<<" Input the 2nd number : ";
      cin>>nm2;	  
   

      if( chkAmicable(nm1,nm2))
        cout << " The given numbers are an Amicable pair."<<endl;
    else
        cout << " The given numbers are not an Amicable pair."<<endl;
    return 0;
}

// 29. Write a program in C++ to count the amicable pairs in an array. 
// Sample Output:
// Count the Amicable pairs in a specific array:
// Sample pairs : (220, 284)(1184,1210) (2620,2924) (5020,5564) (6232,6368)...
// ------------------------------------------------------------------------------
// Input the number of elements to be stored in the array: 2
// element - 0: 220
// element - 1: 284
// Number of Amicable pairs presents in the array: 1

#include <bits/stdc++.h>
using namespace std;
 
int ProDivSum(int n)
{
    int sum = 1;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            sum += i;
 
            // To handle perfect squares
            if (n/i != i)
                sum += n/i;
        }
    }
    return sum;
}
bool chkAmicable(int a,int b)
{
    return(ProDivSum(a) == b && ProDivSum(b) == a);
}
int ChkPairs(int arr[],int num1)
{
    int ctr = 0;
    for (int i=0; i<num1; i++)
        for (int j=i+1; j<num1; j++)
            if (chkAmicable(arr[i], arr[j]))
                ctr++;
    return ctr;
}
int main()
{
   int nn;
    int n, i, j, ctr;
 cout << "\n\n Count the Amicable pairs in a specific array: \n";
 cout << " Sample pairs : (220, 284)(1184,1210) (2620,2924) (5020,5564) (6232,6368)... \n";
 cout << " ------------------------------------------------------------------------------\n";
  cout << "\n Input the number of elements to be stored in the array: ";
       cin>>nn;
      int arr1[nn];
       for(i=0;i<nn;i++)
            {
	      cout<<"element - "<<i<<": ";
	      cin>>arr1[i];
	    }  
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout <<" Number of Amicable pairs presents in the array: "<< ChkPairs(arr1, n1) << endl;
    return 0;
}

// 30. Write a program in C++ to check if a given number is circular prime or not. 
// Sample Output:
// Input a Number: 11
// The given number is a circular prime Number

#include<iostream>
#include<cmath>
using namespace std;
int flg;
void chkPrime(long int n)
{
    long int i;
    i=n-1;
    while(i>=2)
    {
        if(n%i==0)
        {
            flg=1;
        }
        i--;
    }
}
void AllCombination(long int a)
{
  long int b1,c1,d1,e1,i,j,k,s1,z1,v1,x[8],y[8],m;
  b1=a;
  i=0;
  while(b1>0)
  {
      y[i]=b1 % 10;
      b1=b1/10;
      i++;
  }
  c1=0;
  for(j=i-1;j>=0;j--)
  {
    x[c1]=y[j];
    c1++;
  }
  m=i;
  while(m>0)
  {
     c1=m-1;
     d1=i-1;
     e1=0;
     s1=0;
     while(e1<i)
     {
       z1=pow(10,d1);
       v1=z1*x[c1%i];
       c1++;
       d1--;
       e1++;
       s1=s1+v1;
     }
     m--;
     chkPrime(s1);
  }
}
int main()
{
    long int num1;
 cout << "\n\n Check whether a given number is circular prime or not: \n";
 cout << " -----------------------------------------------------------\n";
    cout<<" Input a Number: ";
    cin>>num1;
      flg=0;
      AllCombination(num1);
      if(flg==0)
      {
        cout << " The given number is a circular prime Number."<<endl;
      }
    else
    {
        cout << " The given number is not a circular prime Number."<<endl;
    }
    return 0;	
	cout<<endl;
}

// 31. Write a program in C++ to find circular prime numbers upto a specific limit. 
// Sample Output:
// Enter the upper Limit: 248
// The Circular Prime Numbers less than 248 are:
// 2 3 5 7 11 13 17 31 37 71 73 79 97 113 131 197 199

#include<iostream>
#include<cmath>

using namespace std;

int flg;
void chkPrime(long int n)
{
    long int i;
    i=n-1;
    while(i>=2)
    {
        if(n%i==0)
        {
            flg=1;
        }
        i--;
    }
}

void AllCombination(long int a)
{
  long int b,c,d,e,i,j,k,s,z,v,x[8],y[8],m;
  b=a;
  i=0;
  while(b>0)
  {
      y[i]=b % 10;
      b=b/10;
      i++;
  }
  c=0;
  for(j=i-1;j>=0;j--)
  {
    x[c]=y[j];
    c++;
  }
  m=i;
  while(m>0)
  {
     c=m-1;
     d=i-1;
     e=0;
     s=0;
     while(e<i)
     {
       z=pow(10,d);
       v=z*x[c%i];
       c++;
       d--;
       e++;
       s=s+v;
     }
     m--;
     chkPrime(s);
  }
}

int main()
{
    long int i=2,ctr;
	
 cout << "\n\n Find Circular Prime Numbers upto a specific limit: \n";
 cout << " ---------------------------------------------------\n";
    cout<<" Enter the upper Limit: ";
    cin>>ctr;
    cout<<"\n The Circular Prime Numbers less than "<<ctr<<" are: "<<endl;
    while(i<=ctr)
    {
      flg=0;
      AllCombination(i);
      if(flg==0)
      {
          cout<<i<<" ";
      }
      i++;
    }
	cout<<endl;

}

// 32. Write a program in C++ to check whether a given number is a perfect cube or not. 
// Sample Output:
// Input a number: 8
// The number is a perfect Cube of 2

#include<iostream>
#include<math.h>
using namespace std;
int main() 
{ 
int num, curoot,ans; 

 cout << "\n\n Check whether a number is a perfect cube or not: \n";
 cout << " -----------------------------------------------------\n";
    cout<<" Input a number: ";
    cin>>num;
curoot=round(pow(num, 1.0/3.0));

if(curoot*curoot*curoot==num)
{
  cout<<" The number is a perfect Cube of "<<curoot<<endl;   
}
else
{
  cout<<" The number is not a perfect Cube."<<endl;   
}
}

// 33. Write a program in C++ to display first 10 Fermat numbers. 
// Sample Output:
// The first 10 Fermat numbers are: 3 5 17 257 65537 4.29497e+09 1.84467e+19 3.40282e+38 1.15792e+77 1.34078e+154 inf

# include <iostream>
# include <math.h>
using namespace std;
int main()
{
    int n=0;
	double result;
 cout << "\n\n Display first 10 Fermat numbers:\n";
 cout << "-------------------------------------\n";
cout << " The first 10 Fermat numbers are: "<<endl;
while (n <= 10) 
		{
            result= pow(2, pow(2, n)) + 1;
            n++;
            cout << result << endl;
        }
}

// 34. Write a program in C++ to find any number between 1 and n that can be expressed as the sum of two cubes in two (or more) different ways. 
// Sample Output:
// The numbers in the above range are:
// 1729 = 1^3 + 12^3 = 9^3 + 10^3
// 4104 = 2^3 + 16^3 = 9^3 + 15^3
// 13832 = 2^3 + 24^3 = 18^3 + 20^3
// 39312 = 2^3 + 34^3 = 15^3 + 33^3
// 46683 = 3^3 + 36^3 = 27^3 + 30^3
// 32832 = 4^3 + 32^3 = 18^3 + 30^3
// 40033 = 9^3 + 34^3 = 16^3 + 33^3
// 20683 = 10^3 + 27^3 = 19^3 + 24^3
// 65728 = 12^3 + 40^3 = 31^3 + 33^3
// 64232 = 17^3 + 39^3 = 26^3 + 36^3

# include <iostream>
# include <math.h>
using namespace std;
int main()
{
    int a,b,c,d,n;
	double result;
	cout << "\n\n Find the numbers between a range that can be expressed as the sum of two cubes:\n";
	cout << "------------------------------------------------------------------------------------\n";
	cout << " The numbers in the above range are: "<<endl;
         n = 100000;  
        for (int a = 1; a <= n; a++) 
		{  
            int a3 = a*a*a;  
            if (a3 > n) break;  
  
            for (int b = a; b <= n; b++) 
			{  
                int b3 = b*b*b;  
                if (a3 + b3 > n) break;  
  
                 for (int c = a + 1; c <= n; c++) 
				 {  
                    int c3 = c*c*c;  
                    if (c3 > a3 + b3) break;  
  
                    for (int d = c; d <= n; d++) 
					{  
                        int d3 = d*d*d;  
                        if (c3 + d3 > a3 + b3) break;  
  
                        if (c3 + d3 == a3 + b3) 
						{  
                            cout<<" "<<(a3+b3) << " = ";  
                            cout<<a << "^3 + " << b << "^3 = ";   
                            cout<<c << "^3 + " << d << "^3";   
                            cout<<endl; 
                        }  
                    }  
                }  
            }  
        }
}

// 35. Write a program in C++ to Check if a number is Mersenne number or not. 
// Sample Output:
// Input a number: 31
// 31 is a Mersenne number.

# include <iostream>
# include <math.h>
using namespace std;
int main()
{
    int n,p,ans,i,n1;
	double result;
	cout << "\n\n Check whether a given number is Mersenne number or not:\n";
	cout << "------------------------------------------------------------\n";
	cout << " Input a number: ";
    cin>>n;
    n1=n+1;
        p = 0;
        ans = 0;
        for(i=0;;i++)
        {
            p=(int)pow(2,i);
            if(p>n1)
            {
                break;
            }
            else if(p==n1)
            {
               cout<<" "<<n<<" is a Mersenne number."<<endl;
               ans=1;
            }
        }
  if(ans==0)
  {
   cout<<" "<<n<<" is not a Mersenne number."<<endl;
  }	
}

// 36. Write a program in C++ to generate Mersenne primes within a range of numbers. 
// Sample Output:
// Input a upper limit [range from 1 to upper limit]: 200
// Mersenne prime numbers are:
// 3 7 31 127

#include<bits/stdc++.h>
using namespace std;
 
void GenAllPrim(int n1, bool prarr1[])
{
    for (int i=0; i<=n1; i++)
        prarr1[i] = true;
 
    for (int p=2; p*p<=n1; p++)
    {
        if (prarr1[p] == true)
        {
            for (int i=p*2; i<=n1; i += p)
                prarr1[i] = false;
        }
    }
}
void chkMerPrime(int nm)
{
    bool prarr1[nm+1];
    GenAllPrim(nm,prarr1);
    for (int j=2; ((1<<j)-1) <= nm; j++)
    {
        long long num = (1<<j) - 1;
        if (prarr1[num])
            cout <<" "<< num << " ";
    }
}
int main()
{
    int n ;
	cout << "\n\n Generate Mersenne primes within a range of numbers:\n";
	cout << "--------------------------------------------------------\n";
	cout << " Input a upper limit [range from 1 to upper limit]: ";
    cin>>n;	
    cout << " Mersenne prime numbers are: "<<endl;
    chkMerPrime(n);
    cout<<endl<<endl;
}

// 37. Write a program in C++ to find Narcissistic decimal numbers within a specific range. 
// Sample Output:
// Input the lower limit: 25
// Input a upper limit: 200
// The narcissistic decimal numbers between 25 and 200 are:
// 153

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int nl,nu;
 cout << "\n\n Find the Narcissistic decimal numbers between a specific range: \n";
 cout << " --------------------------------------------------------------------\n";
 	cout << " Input the lower limit: ";
    cin>>nl;	
	cout << " Input a upper limit: ";
    cin>>nu;		
  cout << " The Narcissistic decimal numbers between "<<nl<<" and "<<nu<<" are: \n";
    int i,ctr,j,orn,n,m,sum;
    for(orn=nl;orn<=nu;orn++)
    {
    ctr=0;
    sum=0;
    n=orn;
       while(n>0) 
       {
          n=n/10;
           ctr++;
       }
        n=orn;
       while(n>0) 
       {
          m=n % 10;
          sum=sum+pow(m,ctr);
          n=n/10;
       }
       if(sum==orn)
       {
           cout<<" "<<orn<<" ";
    }
}
	cout<<endl;
}

// 38. Write a program in C++ to check whether a given number is palindrome or not. 
// Sample Output:
// Input a number: 141
// 141 is a Palindrome Number.


#include <iostream>
using namespace std;
int main()
{
    int i,n1,r,s=0;
 cout << "\n\n Check whether a given number is palindrome or not: \n";
 cout << " -------------------------------------------------------\n";
 	cout << " Input a number: ";
    cin>>n1;	
    for(i=n1;i>0; )
    {
        r=i % 10;
        s=s*10+r;
        i=i/10;
    }
    if(s==n1)
    {
        cout<<" "<<n1<<" is a Palindrome Number."<<endl;
    }
    else
    {
        cout<<" "<<n1<<" is a not Palindrome Number."<<endl;
    }
}

// 39. Write a program in C++ to print the first 20 numbers of the Pell series. 
// Sample Output:

//  The first 20 numbers of Pell series are:                              
//  0 1 2 5 12 29 70 169 408 985 2378 5741 13860 33461 80782 195025 470832
//  1136689 2744210 6625109


#include <iostream>
using namespace std;
int main()
{
	int n,a=1,b=0,c;
 cout << "\n\n Find the first 20 numbers of the Pell series: \n";
 cout << " --------------------------------------------------\n";	
    cout<<" The first 20 numbers of Pell series are: "<<endl;
    c=0;
    cout<<" "<<c<<" ";
    for(n=1; n<20; n++)
     {
      c= a + 2*b;
      cout<<c<<" ";
      a = b;
      b = c;
     }
	 cout<<endl;
}

// 40. Write a program in C++ to check if a number is Keith or not. 
// Sample Output:
// Input a number : 742
// The given number is a Keith Number.

#include<bits/stdc++.h>
using namespace std;

int lenCount(int nm)
{  int ctr=0;
    while(nm>0)
    {
        nm=nm/10;
        ctr++;
     }
     return ctr; 
}

int main()
{
    int num1=0,arr1[10],num2=0,flg=0,i=0,sum=0;
	cout << "\n\n Check whether a number is Keith or not: \n";
	cout <<" Sample Keith numbers: 197, 742, 1104, 1537, 2208, 2580, 3684, 4788, 7385..\n";
	cout << " -----------------------------------------------------------------------\n";	
	cout<<" Input a number : ";
    cin>>num1;
    num2=num1;
    for(i=lenCount(num2)-1;i>=0;i--)
    {
        arr1[i]=num1 % 10;
        num1/=10;
    }
    while(flg==0)
    {
        for(i=0;i<lenCount(num2);i++)
            sum+=arr1[i];
        if(sum==num2)
        {
            cout<<" The given number is a Keith Number.\n";
            flg=1;
        }
        if(sum>num2)
        {
            cout<<" The given number is not a Keith number.\n";
            flg=1;
        }
        for(i=0;i<lenCount(num2);i++)
        {
            if(i!=lenCount(num2)-1)
                arr1[i]=arr1[i+1];
            else
                arr1[i]=sum;
        }
        sum=0;
    }
}

// 41. Write a program in C++ to check if a number is Keith or not(with explanation). 
// Sample Output:
// Input a number : 197
// 1 + 9 + 7 = 17
// 9 + 7 + 17 = 33
// 7 + 17 + 33 = 57
// 17 + 33 + 57 = 107
// 33 + 57 + 107 = 197
// The given number is a Keith Number.

#include<bits/stdc++.h>
using namespace std;

int lenCount(int nm)
{  int ctr=0;
    while(nm>0)
    {
        nm=nm/10;
        ctr++;
     }
     return ctr; 
}
int main()
{
    int num1=0,arr1[10],num2=0,flg=0,i=0,sum=0,kk;
	cout << "\n\n Check whether a number is Keith or not: \n";
	cout <<" Sample Keith numbers: 197, 742, 1104, 1537, 2208, 2580, 3684, 4788, 7385..\n";
	cout << " -----------------------------------------------------------------------\n";	
	cout<<" Input a number : ";
    cin>>num1;
    num2=num1;
    for(i=lenCount(num2)-1;i>=0;i--)
    {
        arr1[i]=num1 % 10;
        num1/=10;
    }
    while(flg==0)
    {
        for(i=0;i<lenCount(num2);i++)
            sum+=arr1[i];
        if(sum==num2)
        {
            flg=1;
            kk=1;
        }
        if(sum>num2)
        {
            flg=1;
            kk=0;
        }
        for(i=0;i<lenCount(num2);i++)
        {
            cout<<" "<<arr1[i];
            if(i!=lenCount(num2)-1)
                {arr1[i]=arr1[i+1];
                cout<<" + ";}
            else
                {arr1[i]=sum;
                cout<<" = "<<arr1[i];}
        }
        cout<<endl;
        sum=0;
    }
            if(kk==1)
            {
            cout<<" The given number is a Keith Number.\n";
            }
            if(kk==0)
            {
            cout<<" The given number is not a Keith Number.\n";
            }            
}

// 42. Write a program in C++ to create the first twenty Hamming numbers. 
// Sample Output:

// Input the upper limit of Hamming numbers: 20                          
//  The Hamming numbers are:                                              
// 1,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10,1
// 2,15,16,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,
// 27,30,32,361,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30,32,361,2,3,4,5
// ,6,8,9,10,12,15,16,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10,12,15,16,1
// 8,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30,32,
// 361,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10
// ,12,15,16,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10,12,15,16,18,20,24,2
// 5,27,30,32,361,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30,32,361,2,3,4
// ,5,6,8,9,10,12,15,16,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10,12,15,16
// ,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30,3
// 2,361,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,
// 10,12,15,16,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10,12,15,16,18,20,24
// ,25,27,30,32,361,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30,32,361,2,3
// ,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10,12,15,
// 16,18,20,24,25,27,30,32,361,2,3,4,5,6,8,9,10,12,15,16,18,20,24,25,27,30
// ,32,36                                                  
 

#include <iostream>
#include <cmath>
using namespace std;

bool chkHhamming (int n) 
{
	if (n == 1) return true;
	if (n%2==0 or n%3==0 or n%5==0) 
	{
		for (int i = 2; i*i < n; ++i) 
		{
			if (n%i == 0) {
				if (i%2 != 0 and i%3!=0 and 

i%5!=0) return false;
			}
			if (n%(n/i) == 0) {
				if ((n/i)%2 != 0 and (n/i)%3!=0 

and (n/i)%5!=0) return false;
			}
		}
		return true;		
	}
	return false;
}

int main () 
{
	int n,j;
	cout << "\n\n Find first twenty Hamming numbers: \n";
	cout << " ---------------------------------------\n";
	cout << " Input the upper limit of Hamming numbers: ";
	cin>>n;
	cout << " The Hamming numbers are: "<<endl;	
	
	while (j<=n) 
	{
		int count = 0;
		int i = 1;
		bool first = true;
		while (count < n) 
		{
			if (chkHhamming(i)) 
			{
				if (not first) cout << ",";
				cout << i;
				++count;
				first = false;
			}
			++i;
		}
		j++;
	}
	cout <<endl;
}


// 43. Write a C++ program to check whether a given number is an Armstrong number or not. 
// Sample Output:

// Input a number: 153
// 153 is an Armstrong number

#include <iostream>
using namespace std;

int main()
{
    int num, r, sum = 0, temp;
    cout << "\n\n Check whether a given number is an Armstrong number or not :\n";
    cout << "-----------------------------------------------------------------\n";
    cout << " Input a number: ";
    cin >> num;
    for (temp = num; num != 0; num = num / 10) 
	{
        r = num % 10;
        sum = sum + (r * r * r);
    }
    if (sum == temp)
        cout << temp << " is an Armstrong number." << endl;
    else
        cout << temp << " is not an Armstrong number." << endl;
}


// 44.Write a program in C++ to find the Armstrong number for a given range of number. 
// Sample Output:

// Input starting number of range: 1  
// Input ending number of range: 1000  
// Armstrong numbers in given range are:
// 1 153 370 371 407                                                    
   

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, r, sum, t, mm;
    int sno, eno;
    cout << "\n\n Find the Armstrong number for a given range of number:\n";
    cout << "-----------------------------------------------------------\n";
    cout << " Input starting number of range: ";
    cin >> sno;
    cout << " Input ending number of range: ";
    cin >> eno;
    cout << " Armstrong numbers in given range are: " << endl;
    for (num = sno; num <= eno; num++) 
    {
        t = num;
        sum = 0;
        while (t != 0) 
        {
            r = t % 10;
            mm = pow(r, 3);
            sum = sum + mm;
            t = t / 10;
        }
        if (sum == num)
            cout << num << " ";
    }
    cout << endl;
}


// 45. Write a program in C++ to check whether a number is a Strong Number or not. 
// Sample Output:

// Input a number to check whether it is Strong number: 24 
// 24 is not a Strong number
 
#include <iostream>
using namespace std;

int main()
{
    int i, n, n1, s1 = 0, j;
    long fact;
    cout << "\n\n Check whether a number is Strong Number or not:\n";
    cout << "----------------------------------------------------\n";
    cout << " Input a number to check whether it is Strong number: ";
    cin >> n;
    n1 = n;
    for (j = n; j > 0; j = j / 10) {
        fact = 1;
        for (i = 1; i <= j % 10; i++) {
            fact = fact * i;
        }
        s1 = s1 + fact;
    }
    if (s1 == n1) {
        cout << n1 << " is Strong number." << endl;
    }
    else {
        cout << n1 << " is not a Strong number." << endl;
    }
}



// 46. Write a program in C++ to find Strong Numbers within a range of numbers. 
// Sample Output:

// Input starting range of number: 1  
//  Input ending range of number: 500  
//  The Strong numbers are: 1  2  145

#include <iostream>
using namespace std;

int main()
{
    int i, n, n1, s1 = 0, j, k, en, sn;
    long fact;
    cout << "\n\n Find Strong Numbers within an range of numbers:\n";
    cout << "----------------------------------------------------\n";
    cout << " Input starting range of number: ";
    cin >> sn;
    cout << " Input ending range of number: ";
    cin >> en;
    cout << " The Strong numbers are: ";
    for (k = sn; k <= en; k++) 
    {
        n1 = k;
        s1 = 0;
        for (j = k; j > 0; j = j / 10) 
        {
            fact = 1;
            for (i = 1; i <= j % 10; i++) 
            {
                fact = fact * i;
            }
            s1 = s1 + fact;
        }
        if (s1 == n1)
            cout << n1 << "  ";
    }
    cout << endl;
}
