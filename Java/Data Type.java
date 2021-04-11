// 1. Write a Java program to convert temperature from Fahrenheit to Celsius degree. 
// Test Data
// Input a degree in Fahrenheit: 212
// Expected Output:
// 212.0 degree Fahrenheit is equal to 100.0 in Celsius

import java.util.Scanner;
public class Exercise1 {

    public static void main(String[] Strings) {

        Scanner input = new Scanner(System.in);

        System.out.print("Input a degree in Fahrenheit: ");
        double fahrenheit = input.nextDouble();

        double  celsius =(( 5 *(fahrenheit - 32.0)) / 9.0);
        System.out.println(fahrenheit + " degree Fahrenheit is equal to " + celsius + " in Celsius");
    }
}


// 2. Write a Java program that reads a number in inches, converts it to meters. 
// Note: One inch is 0.0254 meter.
// Test Data
// Input a value for inch: 1000
// Expected Output :
// 1000.0 inch is 25.4 meters


import java.util.Scanner;
public class Exercise2 {

    public static void main(String[] Strings) {

        Scanner input = new Scanner(System.in);

        System.out.print("Input a value for inch: ");
        double inch = input.nextDouble();
        double meters = inch * 0.0254;
        System.out.println(inch + " inch is " + meters + " meters");

    }
}

// 3. Write a Java program that reads an integer between 0 and 1000 and adds all the digits in the integer. 

// Test Data
// Input an integer between 0 and 1000: 565
// Expected Output :
// The sum of all digits in 565 is 16

import java.util.Scanner;
public class Main {

    public static void main(String[] Strings) {

        Scanner input = new Scanner(System.in);

        System.out.print("Input an integer between 0 and 1000: ");
        int num = input.nextInt();

        int firstDigit = num % 10;
        int remainingNumber = num / 10;
        int SecondDigit = remainingNumber % 10;
        remainingNumber = remainingNumber / 10;
        int thirdDigit = remainingNumber % 10;
        remainingNumber = remainingNumber / 10;
        int fourthDigit = remainingNumber % 10;
        int sum = thirdDigit + SecondDigit + firstDigit + fourthDigit;
        System.out.println("The sum of all digits in " + num + " is " + sum);

    }
}


// 4. Write a Java program to convert minutes into a number of years and days. 

// Test Data
// Input the number of minutes: 3456789
// Expected Output :
// 3456789 minutes is approximately 6 years and 210 days

import java.util.Scanner;
public class Exercise4 {

    public static void main(String[] Strings) {


        double minutesInYear = 60 * 24 * 365;

        Scanner input = new Scanner(System.in);

        System.out.print("Input the number of minutes: ");

        double min = input.nextDouble();

        long years = (long) (min / minutesInYear);
        int days = (int) (min / 60 / 24) % 365;

        System.out.println((int) min + " minutes is approximately " + years + " years and " + days + " days");
    }
}


// 5. Write a Java program that prints the current time in GMT. 

// Test Data
// Input the time zone offset to GMT: 256
// Expected Output:
// Current time is 23:40:24

import java.util.Scanner;
public class Exercise5 {

    public static void main(String[] Strings) {

        Scanner input = new Scanner(System.in);

        System.out.print("Input the time zone offset to GMT: ");
        long timeZoneChange = input.nextInt();

        long totalMilliseconds = System.currentTimeMillis();

        long totalSeconds = totalMilliseconds / 1000;

        long currentSecond = totalSeconds % 60;

        long totalMinutes = totalSeconds / 60;

        long currentMinute = totalMinutes % 60;

        long totalHours = totalMinutes / 60;

        long currentHour = ((totalHours + timeZoneChange) % 24);

        System.out.println("Current time is " + currentHour + ":" + currentMinute + ":" + currentSecond);
    }
}


// 6. Write a Java program to compute body mass index (BMI). 

// Test Data
// Input weight in pounds: 452
// Input height in inches: 72
// Expected Output:
// Body Mass Index is 61.30159143458721

import java.util.Scanner;
public class Exercise6 {

    public static void main(String[] Strings) {

        Scanner input = new Scanner(System.in);

        System.out.print("Input weight in pounds: ");
        double weight = input.nextDouble();

        System.out.print("Input height in inches: ");
        double inches = input.nextDouble();

        double BMI = weight * 0.45359237 / (inches * 0.0254 * inches * 0.0254);
        System.out.print("Body Mass Index is " + BMI+"\n");
    }
}


// 7. Write a Java program to takes the user for a distance (in meters) and the time was taken (as three numbers: hours, minutes, seconds), and display the speed, in meters per second, kilometers per hour and miles per hour (hint: 1 mile = 1609 meters). 

// Test Data
// Input distance in meters: 2500
// Input hour: 5
// Input minutes: 56
// Input seconds: 23
// Expected Output :
// Your speed in meters/second is 0.11691531
// Your speed in km/h is 0.42089513
// Your speed in miles/h is 0.26158804

import java.util.Scanner;
public class Exercise7 {

    public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); 

		float timeSeconds;
		float mps,kph, mph;

		System.out.print("Input distance in meters: ");
		float distance = scanner.nextFloat();

		System.out.print("Input hour: ");
		float hr = scanner.nextFloat();

		System.out.print("Input minutes: ");
		float min = scanner.nextFloat();

		System.out.print("Input seconds: ");
		float sec = scanner.nextFloat();

		timeSeconds = (hr*3600) + (min*60) + sec;
		mps = distance / timeSeconds;
		kph = ( distance/1000.0f ) / ( timeSeconds/3600.0f );
		mph = kph / 1.609f;

		System.out.println("Your speed in meters/second is "+mps);
		System.out.println("Your speed in km/h is "+kph);
		System.out.println("Your speed in miles/h is "+mph);
		

		scanner.close();
	}
}


// 8. Write a Java program that reads a number and display the square, cube, and fourth power. 
// Expected Output:
// Square: .2f
// Cube: .2f
// Fourth power: 50625.00


import java.util.Scanner;
public class Exercise8 {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Input the side length value: ");
        double val = in.nextDouble();

        System.out.printf("Square: %12.2f\n", val * val);
        System.out.printf("Cube: %14.2f\n", val * val * val);
        System.out.printf("Fourth power: %6.2f\n", Math.pow(val, 4));
    }
}

// 9. Write a Java program that accepts two integers from the user and then prints the sum, the difference, the product, the average, the distance (the difference between integer), the maximum (the larger of the two integers), the minimum (smaller of the two integers). 

// Test Data
// Input 1st integer: 25
// Input 2nd integer: 5
// Expected Output :
// Sum of two integers: 30
// Difference of two integers: 20
// Product of two integers: 125
// Average of two integers: 15.00
// Distance of two integers: 20
// Max integer: 25
// Min integer: 5

import java.util.Scanner;
public class Exercise9 {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Input 1st integer: ");
        int firstInt = in.nextInt();
        System.out.print("Input 2nd integer: ");
        int secondInt = in.nextInt();

        System.out.printf("Sum of two integers: %d%n", firstInt + secondInt);
        System.out.printf("Difference of two integers: %d%n", firstInt - secondInt);
        System.out.printf("Product of two integers: %d%n", firstInt * secondInt);
        System.out.printf("Average of two integers: %.2f%n", (double) (firstInt + secondInt) / 2);
        System.out.printf("Distance of two integers: %d%n", Math.abs(firstInt - secondInt));
        System.out.printf("Max integer: %d%n", Math.max(firstInt, secondInt));
        System.out.printf("Min integer: %d%n", Math.min(firstInt, secondInt));
    }
}


// 10. Write a Java program to break an integer into a sequence of individual digits. 
// Test Data
// Input six non-negative digits: 123456
// Expected Output :
// 1 2 3 4 5 6

import java.util.Scanner;
public class Exercise11 {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Input six non-negative digits: ");
        int input = in.nextInt();
        int n1 = input / 100000 % 10;
        int n2 = input / 10000 % 10;
        int n3 = input / 1000 % 10;
        int n4 = input / 100 % 10;
        int n5 = input / 10 % 10;
        int n6 = input % 10;
      System.out.println(n1 + " " + n2 + " " + n3 + " " + n4 + " " + n5 + " " + n6);

    }
}


// 11. Write a Java program to test whether a given double/float value is a finite floating-point value or not. 

public class Main {
    public static void main(String[] args) {
        Double dn1 = 0.000213456321d;
        boolean d1f = Double.isFinite(dn1);
        Double dn2 = dn1 / 0;
        boolean d2f = Double.isFinite(dn2);
        Double dn3 = Double.POSITIVE_INFINITY * 0;
        boolean d3f = Double.isFinite(dn3);
        System.out.println("\nFinite doubles\n--------------");
        System.out.println("Is "+dn1 + " is finite? " + d1f);
        System.out.println("Is "+dn2 + " (dn1/0) is finite? " + d2f);
        System.out.println("Is "+dn3 + " is finite? " + d3f);
		Float fn1 = 5.3f;
        boolean f1f = Float.isFinite(fn1);
        Float fn2 = fn1 / 0;
        boolean f2f = Float.isFinite(fn2);
        Float fn3 = 0f / 0f;
        boolean f3f = Float.isFinite(fn3);
        System.out.println("\n\nFinite floats\n-------------");
        System.out.println("Is "+fn1 + " is finite? " + f1f);
        System.out.println("Is "+fn2 + " (fn1/0) is finite? " + f2f);
        System.out.println("Is "+fn3 + " is finite? " + f3f);
    }
}

// 12. Write a Java program to compare two given signed and unsigned numbers. 

public class Main {
    public static void main(String[] args) {
        int in1 = Integer.MIN_VALUE;
		int in2 = Integer.MAX_VALUE;
		System.out.println("Signed integers: " + in1 + ", " + in2);
		System.out.println("-----------------------------------------");
		int compare_Signed_num = Integer.compare(in1, in2);
		System.out.println("Result of comparing signed numbers: " + compare_Signed_num);
		int compare_Unsigned_num = Integer.compareUnsigned(in1, in2);
        System.out.println("Result of comparing unsigned numbers: " + compare_Unsigned_num);
    }
}

// 13. Write a Java program to compute the floor division and the floor modulus of the given dividend and divisor. 

public class Main {
    public static void main(String[] args) {
        int x = -2365;
        int y = 125;
        System.out.println();
        System.out.println("Floor division using '/' operator: " + (x / y));
        System.out.println("Floor division using floorDiv() method is: " + Math.floorDiv(x, y));
        System.out.println();
        System.out.println("Floor modulus using '%' operator: " + (x % y));
        System.out.println("Floor modulus using floorMod() method is: " + Math.floorMod(x, y));
    }
}

// 14. Write a Java program to extract the primitive type value from a given BigInteger value. 
// A primitive type is predefined by the language and is named by a reserved keyword. Primitive values do not share state with other primitive values. The eight primitive data types supported by the Java programming language are byte, short, int, long, float, double, Boolean and char.
// BigInteger() translates the sign-magnitude representation of a BigInteger into a BigInteger. The sign is represented as an integer signum value: -1 for negative, 0 for zero, or 1 for positive. The magnitude is a byte array in big-endian byte-order: the most significant byte is in the zeroth element. A zero-length magnitude array is permissible, and will result in a BigInteger value of 0, whether signum is -1, 0 or 1.


import java.math.BigInteger;
public class Main {
    public static void main(String[] args) {
        BigInteger bigval = BigInteger.valueOf(Long.MAX_VALUE);
        System.out.println("\nBigInteger value: "+bigval);
		long val_Long = bigval.longValue();
		System.out.println("\nConvert the said BigInteger to an long value: "+val_Long);
        int val_Int = bigval.intValue();
		System.out.println("\nConvert the said BigInteger to an int value: "+val_Int);
        short val_Short = bigval.shortValue();
        System.out.println("\nConvert the said BigInteger to an short value: "+val_Short);
        byte val_Byte = bigval.byteValue();
        System.out.println("\nConvert the said BigInteger to byte: "+val_Byte);
        long val_ExactLong = bigval.longValueExact();
		System.out.println("\nConvert the said BigInteger to exact long: "+val_ExactLong);
    }
}

// 15. Write a Java program to get the next floating-point adjacent in the direction of positive and negative infinity from a given float/double number. 

public class Main {
    public static void main(String[] args) {
        float fn = 0.2f;
        System.out.println("\nInitial floating number: " + fn);		
        float next_down_fn = Math.nextDown(fn);
        float next_up_fn = Math.nextUp(fn);
        System.out.println("Float " + fn + " next down is " + next_down_fn);
        System.out.println("Float " + fn + " next up is " + next_up_fn);
        double dn = 0.2d;
       System.out.println("\nInitial double number: " + dn);		
        double next_down_dn = Math.nextDown(dn);
        double next_up_dn = Math.nextUp(dn);
        System.out.println("Double " + dn + " next down is " + next_down_dn);
        System.out.println("Double " + dn + " next up is " + next_up_dn);
    }
}
