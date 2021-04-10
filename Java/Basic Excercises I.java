// 1. Write a Java program to print 'Hello' on screen and then print your name on a separate line. 
// Expected Output :
// Hello
// Alexandra Abramov
import java.util.Scanner;

public class Main {
  public static void main(String[] args) 
  {
    Scanner input = new Scanner (System.in);
    System.out.print("Input your first name: ");
    String fname = input.next();
    System.out.print("Input your last name: ");
    String lname = input.next();
    System.out.println();
    System.out.println("Hello \n"+fname+" "+lname);
  }
}


// 2. Write a Java program to print the sum of two numbers. 
// Test Data:
// 74 + 36
// Expected Output :
// 110
public class Exercise2 {
 
 public static void main(String[] args) {
  System.out.println(24+26);
 }
 
}

// 3. Write a Java program to divide two numbers and print on the screen. 
// Test Data :
// 50/3
// Expected Output :
// 16

public class Exercise3 {
 
 public static void main(String[] args) {
  System.out.println(50/3);
 }
 
}

// 4. Write a Java program to print the result of the following operations. 
// Test Data:
// a. -5 + 8 * 6
// b. (55+9) % 9
// c. 20 + -3*5 / 8
// d. 5 + 15 / 3 * 2 - 8 % 3
// Expected Output :
// 43
// 1
// 19
// 13
public class Exercise4 {
 
 public static void main(String[] args) {
  System.out.println(-5 + 8 * 6);
  System.out.println((55+9) % 9);
  System.out.println(20 + -3*5 / 8);
  System.out.println(5 + 15 / 3 * 2 - 8 % 3);
 }
 
}



// 5. Write a Java program that takes two numbers as input and display the product of two numbers. 
// Test Data:
// Input first number: 25
// Input second number: 5
// Expected Output :
// 25 x 5 = 125

import java.util.Scanner;
 
public class Exercise5 {
 
 public static void main(String[] args) {
  Scanner in = new Scanner(System.in);
   
  System.out.print("Input first number: ");
  int num1 = in.nextInt();
   
  System.out.print("Input second number: ");
  int num2 = in.nextInt();
   
  System.out.println(num1 + " x " + num2 + " = " + num1 * num2);
 }
 
}


// 6. Write a Java program to print the sum (addition), multiply, subtract, divide and remainder of two numbers. 
// Test Data:
// Input first number: 125
// Input second number: 24
// Expected Output :
// 125 + 24 = 149
// 125 - 24 = 101
// 125 x 24 = 3000
// 125 / 24 = 5
// 125 mod 24 = 5

import java.util.Scanner;
 
public class Exercise6 {
 
 public static void main(String[] args) {
  Scanner in = new Scanner(System.in);
   
  System.out.print("Input first number: ");
  int num1 = in.nextInt();
   
  System.out.print("Input second number: ");
  int num2 = in.nextInt();
   
 
  System.out.println(num1 + " + " + num2 + " = " + 
  (num1 + num2));
   
  System.out.println(num1 + " - " + num2 + " = " + 
  (num1 - num2));
   
  System.out.println(num1 + " x " + num2 + " = " + 
  (num1 * num2));
   
  System.out.println(num1 + " / " + num2 + " = " + 
  (num1 / num2));
 
  System.out.println(num1 + " mod " + num2 + " = " + 
  (num1 % num2));
 }
 
}


// 7. Write a Java program that takes a number as input and prints its multiplication table upto 10. 
// Test Data:
// Input a number: 8
// Expected Output :
// 8 x 1 = 8
// 8 x 2 = 16
// 8 x 3 = 24
// ...
// 8 x 10 = 80
import java.util.Scanner;
 
public class Exercise7 {
 
 public static void main(String[] args) {
  Scanner in = new Scanner(System.in);
   
  System.out.print("Input a number: ");
  int num1 = in.nextInt();
   
  for (int i=0; i< 10; i++){
   System.out.println(num1 + " x " + (i+1) + " = " + 
     (num1 * (i+1)));
  }
 }
}



// 8. Write a Java program to display the following pattern. 
// Sample Pattern :

//    J    a   v     v  a                                                  
//    J   a a   v   v  a a                                                 
// J  J  aaaaa   V V  aaaaa                                                
//  JJ  a     a   V  a     a
 public class Exercise8 {
 
    public static void main(String[] args) {

        System.out.println("   J    a   v     v  a ");
        System.out.println("   J   a a   v   v  a a");
        System.out.println("J  J  aaaaa   V V  aaaaa");
        System.out.println(" JJ  a     a   V  a     a");
    }
}




// 9. Write a Java program to compute the specified expressions and print the output. 
// Test Data:
// ((25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5))
// Expected Output
// 2.138888888888889

public class Exercise9 {
 
    public static void main(String[] arg) {

        System.out.println((25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5));
    }
}


// 10. Write a Java program to compute a specified formula. 
// Specified Formula :
// 4.0 * (1 - (1.0/3) + (1.0/5) - (1.0/7) + (1.0/9) - (1.0/11))
// Expected Output
// 2.9760461760461765

public class Exercise10 {
 
    public static void main(String[] args) {

        double pi = 4.0 * (1 - (1.0/3) + (1.0/5) - (1.0/7) + (1.0/9) - (1.0/11));
        System.out.println(pi); //
    }
}


// 11. Write a Java program to print the area and perimeter of a circle. 
// Test Data:
// Radius = 7.5
// Expected Output
// Perimeter is = 47.12388980384689
// Area is = 176.71458676442586
public class Exercise11 {
 
   private static final double radius = 7.5;

    public static void main(String[] args) {

        double perimeter = 2 * Math.PI * radius;
        double area = Math.PI * radius * radius;

        System.out.println("Perimeter is = " + perimeter);
        System.out.println("Area is = " + area);
    }
}



// 12. Write a Java program that takes three numbers as input to calculate and print the average of the numbers. 
import java.util.Scanner;
 
public class Exercise12 {
 
 public static void main(String[] args) {
  Scanner in = new Scanner(System.in);
   
  System.out.print("Input first number: ");
  int num1 = in.nextInt();
   
  System.out.print("Input second number: ");
  int num2 = in.nextInt();
   
  System.out.print("Input third number: ");
  int num3 = in.nextInt();
   
  System.out.print("Input fourth number: ");
  int num4 = in.nextInt();
  
  System.out.print("Enter fifth number: ");
  int num5 = in.nextInt();
   
   
  System.out.println("Average of five numbers is: " + 
   (num1 + num2 + num3 + num4 + num5) / 5);
 }
}

// 13. Write a Java program to print the area and perimeter of a rectangle. 
// Test Data:
// Width = 5.5 Height = 8.5

// Expected Output
// Area is 5.6 * 8.5 = 47.60
// Perimeter is 2 * (5.6 + 8.5) = 28.20
public class Exercise13 {
 
   public static void main(String[] strings) {

        final double width = 5.6;
        final double height = 8.5;

        double perimeter = 2*(height + width);
		
        double area = width * height;			
		
		System.out.printf("Perimeter is 2*(%.1f + %.1f) = %.2f \n", height, width, perimeter);

        System.out.printf("Area is %.1f * %.1f = %.2f \n", width, height, area);
    }
}



// 14. Write a Java program to print an American flag on the screen. 
// Expected Output

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
 

public class Exercise14 {
 
   public static void main(String[] args)
    {
        System.out.println("* * * * * * ==================================");
        System.out.println(" * * * * *  ==================================");
        System.out.println("* * * * * * ==================================");
        System.out.println(" * * * * *  ==================================");
        System.out.println("* * * * * * ==================================");
        System.out.println(" * * * * *  ==================================");
        System.out.println("* * * * * * ==================================");
        System.out.println(" * * * * *  ==================================");
        System.out.println("* * * * * * ==================================");
        System.out.println("==============================================");
        System.out.println("==============================================");
        System.out.println("==============================================");
        System.out.println("==============================================");
        System.out.println("==============================================");
        System.out.println("==============================================");
    }
}


// 15. Write a Java program to swap two variables. 
public class Exercise15 {
 
 public static void main(String[] args) {
     
   int a, b, temp;
   a = 15;
   b = 27;
   System.out.println("Before swapping : a, b = "+a+", "+ + b);
   temp = a;
   a = b;
   b = temp;   
  System.out.println("After swapping : a, b = "+a+", "+ + b);
 }
 }


// 16. Write a Java program to print a face. 
// Expected Output

//  +"""""+                                                 
// [| o o |]                                                
//  |  ^  |                                                 
//  | '-' |                                                 
//  +-----+

public class Exercise16 {
    public static void main(String[] args)
    {
        System.out.println(" +\"\"\"\"\"+ ");
        System.out.println("[| o o |]");
        System.out.println(" |  ^  | ");
        System.out.println(" | '-' | ");
        System.out.println(" +-----+ ");
    }
	}
	

// 17. Write a Java program to add two binary numbers. 
// Input Data:
// Input first binary number: 10
// Input second binary number: 11
// Expected Output

// Sum of two binary numbers: 101
import java.util.Scanner;
public class Exercise17 {
 public static void main(String[] args)
 {
  long binary1, binary2;
  int i = 0, remainder = 0;
  int[] sum = new int[20];
  Scanner in = new Scanner(System.in);

  System.out.print("Input first binary number: ");
  binary1 = in.nextLong();
  System.out.print("Input second binary number: ");
  binary2 = in.nextLong();

  while (binary1 != 0 || binary2 != 0) 
  {
   sum[i++] = (int)((binary1 % 10 + binary2 % 10 + remainder) % 2);
   remainder = (int)((binary1 % 10 + binary2 % 10 + remainder) / 2);
   binary1 = binary1 / 10;
   binary2 = binary2 / 10;
  }
  if (remainder != 0) {
   sum[i++] = remainder;
  }
  --i;
  System.out.print("Sum of two binary numbers: ");
  while (i >= 0) {
   System.out.print(sum[i--]);
  }
   System.out.print("\n");  
 }
}



// 18. Write a Java program to multiply two binary numbers. 
// Input Data:
// Input the first binary number: 10
// Input the second binary number: 11
// Expected Output

// Product of two binary numbers: 110 

import java.util.Scanner;
public class Exercise18 {
 public static void main(String[] args)
 {
  long binary1, binary2, multiply = 0;
  int digit, factor = 1;
  Scanner in = new Scanner(System.in);
  System.out.print("Input the first binary number: ");
  binary1 = in.nextLong();
  System.out.print("Input the second binary number: ");
  binary2 = in.nextLong();
  while (binary2 != 0)
  {
   digit = (int)(binary2 % 10);
   if (digit == 1) 
   {
    binary1 = binary1 * factor;
    multiply = binaryproduct((int) binary1, (int) multiply);
   } 
   else
   {
    binary1 = binary1 * factor;
   }
   binary2 = binary2 / 10;
   factor = 10;
  }
  System.out.print("Product of two binary numbers: " + multiply+"\n");
 }
 static int binaryproduct(int binary1, int binary2) 
 {
  int i = 0, remainder = 0;
  int[] sum = new int[20];
  int binary_prod_result = 0;

  while (binary1 != 0 || binary2 != 0) 
  {
   sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
   remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
   binary1 = binary1 / 10;
   binary2 = binary2 / 10;
  }
  if (remainder != 0)
  {
   sum[i++] = remainder;
  }
  --i;
  while (i >= 0) 
  {
   binary_prod_result = binary_prod_result * 10 + sum[i--];
  }
  return binary_prod_result;
 }
 }
 

// 19. Write a Java program to convert a decimal number to binary number. 
// Input Data:
// Input a Decimal Number : 5
// Expected Output

// Binary number is: 101 
import java.util.Scanner;
public class Exercise19 {
      public static void main(String args[])
    {
        int dec_num, quot, i=1, j;
        int bin_num[] = new int[100];
        Scanner scan = new Scanner(System.in);
		
        System.out.print("Input a Decimal Number : ");
        dec_num = scan.nextInt();
		
        quot = dec_num;
		
        while(quot != 0)
        {
            bin_num[i++] = quot%2;
            quot = quot/2;
        }
		
        System.out.print("Binary number is: ");
        for(j=i-1; j>0; j--)
        {
            System.out.print(bin_num[j]);
        }
        System.out.print("\n");
    }
}



// 20. Write a Java program to convert a decimal number to hexadecimal number. 
// Input Data:
// Input a decimal number: 15
// Expected Output

// Hexadecimal number is : F 
import java.util.Scanner;
public class Exercise20 {
      public static void main(String args[])
    {
        int dec_num, rem;
        String hexdec_num="";
        
        /* hexadecimal number digits */
        
        char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        
        Scanner in = new Scanner(System.in);
		
        System.out.print("Input a decimal number: ");
        dec_num = in.nextInt();
		
        while(dec_num>0)
        {
            rem = dec_num%16;
            hexdec_num = hex[rem] + hexdec_num;
            dec_num = dec_num/16;
        }
        System.out.print("Hexadecimal number is : "+hexdec_num+"\n");         
    }
}



// 21. Write a Java program to convert a decimal number to octal number. 
// Input Data:
// Input a Decimal Number: 15
// Expected Output

// Octal number is: 17  



// 22. Write a Java program to convert a binary number to decimal number. 
// Input Data:
// Input a binary number: 100
// Expected Output

// Decimal Number: 4 



// 23. Write a Java program to convert a binary number to hexadecimal number. 
// Input Data:
// Input a Binary Number: 1101
// Expected Output

// HexaDecimal value: D



// 24. Write a Java program to convert a binary number to a Octal number. 
// Input Data:
// Input a Binary Number: 111
// Expected Output

// Octal number: 7 



// 25. Write a Java program to convert a octal number to a decimal number. 
// Input Data:
// Input any octal number: 10
// Expected Output

// Equivalent decimal number: 8



// 26. Write a Java program to convert a octal number to a binary number. 
// Input Data:
// Input any octal number: 7
// Expected Output

// Equivalent binary number: 111 



// 27. Write a Java program to convert a octal number to a hexadecimal number. 
// Input Data:
// Input a octal number : 100
// Expected Output

// Equivalent hexadecimal number: 40



// 28. Write a Java program to convert a hexadecimal to a decimal number. 
// Input Data:
// Input a hexadecimal number: 25
// Expected Output

// Equivalent decimal number is: 37



// 29. Write a Java program to convert a hexadecimal to a binary number. 
// Input Data:
// Enter Hexadecimal Number : 37
// Expected Output

// Equivalent Binary Number is: 110111



// 30. Write a Java program to convert a hexadecimal to a octal number. 
// Input Data:
// Input a hexadecimal number: 40
// Expected Output

// Equivalent of octal number is: 100 



// 31. Write a Java program to check whether Java is installed on your computer. 
// Expected Output

// Java Version: 1.8.0_71                                                            
// Java Runtime Version: 1.8.0_71-b15                                                
// Java Home: /opt/jdk/jdk1.8.0_71/jre                                               
// Java Vendor: Oracle Corporation                                                   
// Java Vendor URL: http://Java.oracle.com/                                          
// Java Class Path: .



// 32. Write a Java program to compare two numbers. 
// Input Data:
// Input first integer: 25
// Input second integer: 39
// Expected Output

// 25 != 39                                                                          
// 25 < 39                                                                           
// 25 <= 39



// 33. Write a Java program and compute the sum of the digits of an integer. 
// Input Data:
// Input an integer: 25
// Expected Output

// The sum of the digits is: 7



// 34. Write a Java program to compute the area of a hexagon. 
// Area of a hexagon = (6 * s^2)/(4*tan(π/6))
// where s is the length of a side
// Input Data:
// Input the length of a side of the hexagon: 6
// Expected Output

// The area of the hexagon is: 93.53074360871938



// 35. Write a Java program to compute the area of a polygon. 
// Area of a polygon = (n*s^2)/(4*tan(π/n))
// where n is n-sided polygon and s is the length of a side
// Input Data:
// Input the number of sides on the polygon: 7
// Input the length of one of the sides: 6
// Expected Output

// The area is: 130.82084798405722



// 36. Write a Java program to compute the distance between two points on the surface of earth. 
// Distance between the two points [ (x1,y1) & (x2,y2)]
// d = radius * arccos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2))
// Radius of the earth r = 6371.01 Kilometers
// Input Data:
// Input the latitude of coordinate 1: 25
// Input the longitude of coordinate 1: 35
// Input the latitude of coordinate 2: 35.5
// Input the longitude of coordinate 2: 25.5
// Expected Output

// The distance between those points is: 1480.0848451069087 km 



// 37. Write a Java program to reverse a string. 
// Input Data:
// Input a string: The quick brown fox
// Expected Output

// Reverse string: xof nworb kciuq ehT



// 38. Write a Java program to count the letters, spaces, numbers and other characters of an input string. 
// Expected Output

// The string is :  Aa kiu, I swd skieo 236587. GH kiu: sieo?? 25.33
// letter: 23                                               
// space: 9                                                 
// number: 10                                               
// other: 6



// 39. Write a Java program to create and display unique three-digit number using 1, 2, 3, 4. Also count how many three-digit numbers are there. 
// Expected Output

// 123                                                      
// 124                                                      
// ...                                            
                                                   
// 431                                                      
// 432                                                      
// Total number of the three-digit-number is 24



// 40. Write a Java program to list the available character sets in charset objects. 
// Expected Output

// List of available character sets:                                       
// Big5                                                                    
// Big5-HKSCS                                                              
// CESU-8                                                                  
// EUC-JP                                                                  
// EUC-KR                                                                  
// GB18030                                                                 
// GB2312                                                                  
// GBK                                                                     
                                                     
// ...                                            
                                                   
// x-SJIS_0213                                                             
// x-UTF-16LE-BOM                                                          
// X-UTF-32BE-BOM                                                          
// X-UTF-32LE-BOM                                                          
// x-windows-50220                                                         
// x-windows-50221                                                         
// x-windows-874                                                           
// x-windows-949                                                           
// x-windows-950                                                           
// x-windows-iso2022jp



// 41. Write a Java program to print the ascii value of a given character. 
// Expected Output

// The ASCII value of Z is :90



// 42. Write a Java program to input and display your password. 
// Expected Output

// Input your Password:                                                    
// Your password was: abc@123



// 43. Write a Java program to print the following string in a specific format (see the output). 
// Sample Output

// Twinkle, twinkle, little star,
// 	How I wonder what you are! 
// 		Up above the world so high,   		
// 		Like a diamond in the sky. 
// Twinkle, twinkle, little star, 
// 	How I wonder what you are



// 44. Write a Java program that accepts an integer (n) and computes the value of n+nn+nnn. 
// Sample Output:

// Input number: 5                                                        
// 5 + 55  + 555



// 45. Write a Java program to find the size of a specified file. 
// Sample Output:

// /home/students/abc.txt  : 0 bytes                                      
// /home/students/test.txt : 0 bytes 



// 46. Write a Java program to display the system time. 
// Sample Output:

// Current Date time: Fri Jun 16 14:17:40 IST 2017 



// 47. Write a Java program to display the current date time in specific format. 
// Sample Output:

// Now: 2017/06/16 08:52:03.066 



// 48. Write a Java program to print the odd numbers from 1 to 99. Prints one number per line. 
// Sample Output:

// 1                                                                      
// 3                                                                      
// 5                                                                      
// 7                                                                      
// 9                                                                      
// 11                                                                     
// ....                                                                     
                                                                    
// 91                                                                     
// 93                                                                     
// 95                                                                     
// 97                                                                     
// 99 



// 49. Write a Java program to accept a number and check the number is even or not. Prints 1 if the number is even or 0 if the number is odd. 
// Sample Output:

// Input a number: 20                                                     
// 1



// 50. Write a Java program to print numbers between 1 to 100 which are divisible by 3, 5 and by both. 
// Sample Output:

// Divided by 3:                                                          
// 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 48, 51, 54, 57
// , 60, 63, 66, 69, 72, 75, 78, 81, 84, 87, 90, 93, 96, 99,              
                                                                       
// Divided by 5:                                                          
// 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 
// 95,                                                                    
                                                                       
// Divided by 3 & 5:                                                      
// 15, 30, 45, 60, 75, 90,



// 51. Write a Java program to convert a string to an integer in Java. 
// Sample Output:

// Input a number(string): 25                                             
// The integer value is: 25



// 52. Write a Java program to calculate the sum of two integers and return true if the sum is equal to a third integer. 
// Sample Output:

// Input the first number : 5                                             
// Input the second number: 10                                            
// Input the third number : 15                                            
// The result is: true



// 53. Write a Java program that accepts three integers from the user and return true if the second number is greater than first number and third number is greater than second number. If "abc" is true second number does not need to be greater than first number. 
// Sample Output:

// Input the first number : 5                                             
// Input the second number: 10                                            
// Input the third number : 15                                            
// The result is: true



// 54. Write a Java program that accepts three integers from the user and return true if two or more of them (integers ) have the same rightmost digit. The integers are non-negative. 
// Sample Output:

// Input the first number : 5                                             
// Input the second number: 10                                            
// Input the third number : 15                                            
// The result is: true



// 55. Write a Java program to convert seconds to hour, minute and seconds. 
// Sample Output:

// Input seconds: 86399                                                   
// 23:59:59



// 56. Write a Java program to find the number of integers within the range of two specified numbers and that are divisible by another number. 
// For example x = 5, y=20 and p =3, find the number of integers within the range x..y and that are divisible by p i.e. { i :x ≤ i ≤ y, i mod p = 0 }
// Sample Output:

// 5



// 57. Write a Java program to accepts an integer and count the factors of the number. 
// Sample Output:

// Input an integer: 25                                                   
// 3



// 58. Write a Java program to capitalize the first letter of each word in a sentence. 
// Sample Output:

// Input a Sentence: the quick brown fox jumps over the lazy dog.         
// The Quick Brown Fox Jumps Over The Lazy Dog.



// 59. Write a Java program to convert a given string into lowercase. 
// Sample Output:

// Input a String: THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.           
// the quick brown fox jumps over the lazy dog.



// 60. Write a Java program to find the penultimate (next to last) word of a sentence. 
// Sample Output:

// Input a String: The quick brown fox jumps over the lazy dog.
// Penultimate word: lazy



// 61. Write a Java program to reverse a word. 
// Sample Output:

// Input a word: dsaf
// Reverse word: fasd



// 62. Write a Java program that accepts three integer values and return true if one of them is 20 or more and less than the substractions of others. 
// Sample Output:

// Input the first number : 15                                            
// Input the second number: 20                                            
// Input the third number : 25                                            
// false



// 63. Write a Java program that accepts two integer values from the user and return the larger values. However if the two values are the same, return 0 and return the smaller value if the two values have the same remainder when divided by 6. 
// Sample Output:

// Input the first number : 12                                            
// Input the second number: 13                                            
// Result: 13



// 64. Write a Java program that accepts two integer values between 25 to 75 and return true if there is a common digit in both numbers. 
// Sample Output:

// Input the first number : 35                                            
// Input the second number: 45                                            
// Result: true



// 65. Write a Java program to calculate the modules of two numbers without using any inbuilt modulus operator. 
// Sample Output:

// Input the first number : 19                                            
// Input the second number: 7                                             
// 5   



// 66. Write a Java program to compute the sum of the first 100 prime numbers. 
// Sample Output:

// Sum of the first 100 prime numbers: 24133 



// 67. Write a Java program to insert a word in the middle of the another string. 
// Insert "Tutorial" in the middle of "Python 3.0", so result will be Python Tutorial 3.0
// Sample Output:

// Python Tutorial 3.0



// 68. Write a Java program to create a new string of 4 copies of the last 3 characters of the original string. The length of the original string must be 3 and above. 
// Sample Output:

// 3.03.03.03.0 



// 69. Write a Java program to extract the first half of a string of even length. 
// Test Data: Python
// Sample Output:

// Pyt



// 70. Write a Java program to create a string in the form short_string + long_string + short_string from two strings. The strings must not have the same length. 
// Test Data: Str1 = Python
// Str2 = Tutorial
// Sample Output:

// PythonTutorialPython



// 71. Write a Java program to create the concatenation of the two strings except removing the first character of each string. The length of the strings must be 1 and above. 
// Test Data: Str1 = Python
// Str2 = Tutorial
// Sample Output:

// ythonutorial



// 72. Write a Java program to create a new string taking first three characters from a given string. If the length of the given string is less than 3 use "#" as substitute characters. 
// Test Data: Str1 = " "
// Sample Output:

// ###



// 73. Write a Java program to create a new string taking first and last characters from two given strings. If the length of either string is 0 use "#" for missing character. 
// Test Data: str1 = "Python"
// str2 = " "
// Sample Output:

// P#



// 74. Write a Java program to test if 10 appears as either the first or last element of an array of integers. The length of the array must be greater than or equal to 2. 
// Sample Output:
// Test Data: array = 10, -20, 0, 30, 40, 60, 10

// true



// 75. Write a Java program to test if the first and the last element of an array of integers are same. The length of the array must be greater than or equal to 2. 
// Test Data: array = 50, -20, 0, 30, 40, 60, 10
// Sample Output:

// false



// 76. Write a Java program to test if the first and the last element of two array of integers are same. The length of the array must be greater than or equal to 2. 
// Test Data: array1 = 50, -20, 0, 30, 40, 60, 12
// array2 = 45, 20, 10, 20, 30, 50, 11
// Sample Output:

// false



// 77. Write a Java program to create a new array of length 2 from two arrays of integers with three elements and the new array will contain the first and last elements from the two arrays. 
// Test Data: array1 = 50, -20, 0
// array2 = 5, -50, 10
// Sample Output:

// Array1: [50, -20, 0]                                                   
// Array2: [5, -50, 10]                                                   
// New Array: [50, 10]



// 78. Write a Java program to test that a given array of integers of length 2 contains a 4 or a 7. 
// Sample Output:

// Original Array: [5, 7]                                                 
// true 



// 79. Write a Java program to rotate an array (length 3) of integers in left direction. 
// Sample Output:

// Original Array: [20, 30, 40]                                           
// Rotated Array: [30, 40, 20]



// 80. Write a Java program to get the larger value between first and last element of an array (length 3) of integers . 
// Sample Output:

// Original Array: [20, 30, 40]                                           
// Larger value between first and last element: 40 



// 81. Write a Java program to swap the first and last elements of an array (length must be at least 1) and create a new array. 
// Sample Output:

// Original Array: [20, 30, 40]                                           
// New array after swaping the first and last elements: [40, 30, 20] 



// 82. Write a Java program to find the largest element between first, last, and middle values from an array of integers (even length). 
// Sample Output:

// Original Array: [20, 30, 40, 50, 67]                                   
// Largest element between first, last, and middle values: 67 



// 83. Write a Java program to multiply corresponding elements of two arrays of integers. 
// Sample Output:

// Array1: [1, 3, -5, 4]                                                  
                                                                       
// Array2: [1, 4, -5, -2]                                                 
                                                                       
// Result: 1 12 25 -8



// 84. Write a Java program to take the last three characters from a given string and add the three characters at both the front and back of the string. String length must be greater than three and more. 
// Test data: "Python" will be "honPythonhon"
// Sample Output:

// honPythonhon



// 85. Write a Java program to check if a string starts with a specified word. 
// Sample Data: string1 = "Hello how are you?"
// Sample Output:

// true



// 86. Write a Java program start with an integer n, divide n by 2 if n is even or multiply by 3 and add 1 if n is odd, repeat the process until n = 1. 



// 87. Write a Java program than read an integer and calculate the sum of its digits and write the number of each digit of the sum in English. 



// 88. Write a Java program to get the current system environment and system properties. 


// 89. Write a Java program to check whether a security manager has already been established for the current application or not. 


// 90. Write a Java program to get the value of the environment variable PATH, TEMP, USERNAME. 


// 91. Write a Java program to measure how long some code takes to execute in nanoseconds. 


// 92. Write a Java program to count the number of even and odd elements in a given array of integers. 


// 93. Write a Java program to test if an array of integers contains an element 10 next to 10 or an element 20 next to 20, but not both. 


// 94. Write a Java program to rearrange all the elements of a given array of integers so that all the odd numbers come before all the even numbers. 


// 95. Write a Java program to create an array (length # 0) of string values. The elements will contain "0", "1", "2" … through ... n-1. 


// 96. Write a Java program to check if there is a 10 in a given array of integers with a 20 somewhere later in the array. 


// 97. Write a Java program to check if an array of integers contains a specified number next to each other or there are two same specified numbers separated by one element. 


// 98. Write a Java program to check if the value 20 appears three times and no 20's are next to each other in a given array of integers. 


// 99. Write a Java program to check if a specified number appears in every pair of adjacent element of a given array of integers. 


// 100. Write a Java program to count the two elements of two given arrays of integers with same length, differ by 1 or less. 


// 101. Write a Java program to check if the number of 10 is greater than number to 20's in a given array of integers. 


// 102. Write a Java program to check if a specified array of integers contains 10's or 30's. 


// 103. Write a Java program to create a new array from a given array of integers, new array will contain the elements from the given array after the last element value 10. 


// 104. Write a Java program to create a new array from a given array of integers, new array will contain the elements from the given array before the last element value 10. 


// 105. Write a Java program to check if a group of numbers (l) at the start and end of a given array are same. 


// 106. Write a Java program to create a new array that is left shifted from a given array of integers. 


// 107. Write a Java program to check if an array of integers contains three increasing adjacent numbers. 


// 108. Write a Java program to add all the digits of a given positive integer until the result has a single digit. 


// 109. Write a Java program to form a staircase shape of n coins where every k-th row must have exactly k coins. 


// 110. Write a Java program to check whether a given integer is a power of 4 or not. 
// Given num = 64, return true. Given num = 6, return false.


// 111. Write a Java program to add two numbers without using any arithmetic operators. 
// Given x = 10 and y = 12; result = 22


// 112. Write a Java program to compute the number of trailing zeros in a factorial. 
// 7! = 5040, therefore the output should be 1


// 113. Write a Java program to merge two given sorted array of integers and create a new sorted array. 
// array1 = [1,2,3,4]
// array2 = [2,5,7, 8]
// result = [1,2,2,3,4,5,7,8]


// 114. Write a Java program to given a string and an offset, rotate string by offset (rotate from left to right). 


// 115. Write a Java program to check if a positive number is a palindrome or not. 
// Input a positive integer: 151
// Is 151 is a palindrome number?
// true


// 116. Write a Java program which iterates the integers from 1 to 100. For multiples of three print "Fizz" instead of the number and print "Buzz" for the multiples of five. When number is divided by both three and five, print "fizz buzz". 


// 117. Write a Java program to compute the square root of a given integer. 
// Input a positive integer: 25
// Square root of 25 is: 5


// 118. Write a Java program to get the first occurrence (Position starts from 0.) of a string within a given string. 


// 119. Write a Java program to get the first occurrence (Position starts from 0.) of an element of a given array. 


// 120. Write a Java program that searches a value in an m x n matrix. 


// 121. Write a Java program to reverse a given linked list. 
// Example: For linked list 20->40->60->80, the reversed linked list is 80->60->40->20 

// 122. Write a Java program to find a contiguous subarray with largest sum from a given array of integers. 
// Note: In computer science, the maximum subarray problem is the task of finding the contiguous subarray within a one-dimensional array of numbers which has the largest sum. For example, for the sequence of values −2, 1, −3, 4, −1, 2, 1, −5, 4; the contiguous subarray with the largest sum is 4, −1, 2, 1, with sum 6. The subarray should contain one integer at least. 

// 123. Write a Java program to find the subarray with smallest sum from a given array of integers. 


// 124. Write a Java program to find the index of a value in a sorted array. If the value does not find return the index where it would be if it were inserted in order. 
// Example:
// [1, 2, 4, 5, 6] 5(target) -> 3(index)
// [1, 2, 4, 5, 6] 0(target) -> 0(index)
// [1, 2, 4, 5, 6] 7(target) -> 5(index)


// 125. Write a Java program to get the preorder traversal of its nodes' values of a given a binary tree. 
// Example:

//     10
//    / \
//   20   30
//  / \
// 40   50

// Expected output: 10 20 40 50 30


// 126. Write a Java program to get the inorder traversal of its nodes' values of a given a binary tree. 

//     10
//    / \
//   20   30
//  / \
// 40   50

// Example:{10, 20, 30, 40, 50}
// Output: 40 20 50 10 30


// 127. Write a Java program to get the Postorder traversal of its nodes' values of a given a binary tree. 

//     10
//    / \
//   20   30
//  / \
// 40   50



// 128.Write a Java program to calculate the median of a given unsorted array of integers. 
// Example: {10,2,38,23,38,23,21}
// Output: 23


// 129. Write a Java program to find a number that appears only once in a given array of integers, all numbers occur twice. 
// Source Array : [10, 20, 10, 20, 30, 40, 40, 30, 50] 50 appears only once


// 130. Write a Java program to find the maximum depth of a given a binary tree. 
// Sample Output: The Maximum depth of the binary tree is: 3


// 131. Write a Java program to find the new length of a given sorted array where each element appear only once (remove the duplicates ). 
// Original array: [1, 1, 2, 3, 3, 3, 4, 5, 6, 7, 7] The length of the original array is: 11 After removing duplicates, the new length of the array is: 7


// 132. Write a Java program to find the new length of a given sorted array where duplicate elements appeared at most twice. 
// Original array: [1, 1, 2, 3, 3, 3, 4, 5, 6, 7, 7, 7, 7]
// The length of the original array is: 13
// After removing duplicates, the new length of the array is: 10


// 133. Write a Java program to find a path from top left to bottom in right direction which minimizes the sum of all numbers along its path. 
// Note: Move either down or right at any point in time.
// Sample Output: Sum of all numbers along its path: 13


// 134. Write a Java program to find the distinct ways you can climb to the top (n steps to reach to the top) of stairs. Each time you can either climb 1 or 2 steps. 
// Example: n = 5
// a) 1+1+1+1+1 = 5 b) 1+1+1+2 = 5 c) 1+2+2 = 5 d) 2+2+1 = 5 e) 2+1+1+1 = 5 f) 2+1+2 = 5 g) 1+2+1+1 = 5 h) 1+1+2+1 = 5
// Sample Output: Distinct ways can you climb to the top: 8


// 135. Write a Java program to remove duplicates from a sorted linked list. 
// Original List with duplicate elements:
// 12->12->13->14->15->15->16->17->17
// After removing duplicates from the said list:
// 12->13->14->15->16->17


// 136. Write a Java program to find possible unique paths from top-left corner to bottom-right corner of a given grid (m x n). 
// Note: You can move either down or right at any point in time.
// Sample Output: Unique paths from top-left corner to bottom-right corner of the said grid: 3


// 137. Write a Java program to find possible unique paths considering some obstacles, from top-left corner to bottom-right corner of a given grid (m x n). 
// Note: You can move either down or right at any point in time and an obstacle and empty space is marked as 1 and 0 respectively in the grid.
// Sample grid:
// int[][] obstacle_Grid ={
// {0, 0, 0},
// {0, 1, 0},
// {0, 0, 0},
// };
// Sample Output: Unique paths from top-left corner to bottom-right corner of the said grid (considering some obstacles): 2


// 138. Write a Java program to find all of the longest word in a given dictionary. 
// Example-1:
// {
// "cat",
// "flag",
// "green",
// "country",
// "w3resource"
// }
// Result: "w3resource"
// Example-2:
// {
// "cat",
// "dog",
// "red",
// "is",
// "am"
// }
// Result: "cat", "dog", "red"


// 139. Write a Java program to get the index of the first number and the last number of a subarray where the sum of numbers is zero from a given array of integers. 
// Original Array : [1, 2, 3, -6, 5, 4]
// Index of the subarray of the said array where the sum of numbers is zero: [0, 3]


// 140. Write a Java program to merge all overlapping Intervals from a given a collection of intervals. 
// Sample Output: 1 6
// 8 10
// 15 20


// 141. Write a Java program to check if a given string has all unique characters. 
// Sample Output: Original String : xyyz
// String has all unique characters: false


// 142. Write a Java program to check if two given strings are anagrams or not. 
// According to Wikipedia "An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once. For example, the word anagram can be rearranged into nag a ram, or the word binary into brainy."
// Sample Output: String-1 : wxyz
// String-2 : zyxw
// Check if two given strings are anagrams or not?: true


// 143. Write a Java program to merge two given sorted lists. 
// Sample Output:
// Merge Two Sorted ListsT:
// 1 2 3 7 9 13 40


// 144. Write a Java program to remove all occurrences of a specified value in a given array of integers and return the new length of the array. 
// Sample Output:
// Original array: [1, 4, 6, 7, 6, 2]
// The length of the new array is: 4


// 145. Write a Java program to remove the nth element from the end of a given list. 
// Sample Output:
// Original node:
// 1 2 3 4 5
// After removing 2nd element from end:
// 1 2 3 5


// 146. Write a Java program to convert an sorted array to binary search tree. Maintain minimal height of the tree. 
// Sample Output:
// 2
// 1
// 4
// 6
// 5
// 3


// 147. Write a Java program to find the number of bits required to flip to convert two given integers. 
// Sample Output:
// 2


// 148. Write a Java program to find the index of the first unique character in a given string, assume that there is at least one unique character in the string. 
// Sample Output:
// Original String: wresource
// First unique character of the above: 0


// 149. Write a Java program to check if a given string is a permutation of another given string. 
// Sample Output:
// Original strings: xxyz yxzx
// true


// 150. Write a Java program to test if a binary tree is a subtree of another binary tree. 
// Sample Output:
// Original strings: xxyz yxzx
// true