// 1. Write a Java program to get the character at the given index within the String. 
// Sample Output:

// Original String = Java Exercises!                                                                             
// The character at position 0 is J                                                                              
// The character at position 10 is i 

public class Exercise1 {
   public static void main(String[] args)
    {
        String str = "Java Exercises!";
        System.out.println("Original String = " + str);
        // Get the character at positions 0 and 10.
        int index1 = str.charAt(0);
        int index2 = str.charAt(10);

        // Print out the results.
        System.out.println("The character at position 0 is " +
            (char)index1);
        System.out.println("The character at position 10 is " +
            (char)index2);
    }
}


// 2. Write a Java program to get the character (Unicode code point) at the given index within the String. 
// Sample Output:

// Original String : w3resource.com                                                                              
// Character(unicode point) = 51                                                                                 
// Character(unicode point) = 101 

public class Exercise2 {

   public static void main(String[] args) {
  
    String str = "w3resource.com";
    System.out.println("Original String : " + str);
        
    // codepoint at index 1
    int val1 = str.codePointAt(1);
    
    // codepoint at index 9
    int val2 = str.codePointAt(9);
        
    // prints character at index1 in string
    System.out.println("Character(unicode point) = " + val1);
    // prints character at index9 in string
    System.out.println("Character(unicode point) = " + val2);
  }
}



// 3. Write a Java program to get the character (Unicode code point) before the specified index within the String. 
// Sample Output:

// Original String : w3resource.com                                                                              
// Character(unicode point) = 119                                                                                
// Character(unicode point) = 99

public class Exercise3 {

   public static void main(String[] args) {
  
    String str = "w3resource.com";
    System.out.println("Original String : " + str);
        
    // codepoint before index 1
    int val1 = str.codePointBefore(1);
    
   // codepoint before index 9
    int val2 = str.codePointBefore(9);
        
    // prints character before index1 in string
    System.out.println("Character(unicode point) = " + val1);
    // prints character before index9 in string
    System.out.println("Character(unicode point) = " + val2);
  }
}


// 4. Write a Java program to count a number of Unicode code points in the specified text range of a String. 
// Sample Output:

// Original String : w3rsource.com                                                                               
// Codepoint count = 9

public class Exercise4 {

 public static void main(String[] args) {
  
    String str = "w3rsource.com";
    System.out.println("Original String : " + str);
        
    // codepoint from index 1 to index 10
    int ctr = str.codePointCount(1, 10);
        
    // prints character from index 1 to index 10
    System.out.println("Codepoint count = " + ctr);
  }
}


// 5. Write a Java program to compare two strings lexicographically. Two strings are lexicographically equal if they are the same length and contain the same characters in the same positions. 
// Sample Output:

// String 1: This is Exercise 1                                                                                  
// String 2: This is Exercise 2                                                                                  
// "This is Exercise 1" is less than "This is Exercise 2" 

public class Exercise5 {
public static void main(String[] args)
    {
        String str1 = "This is Exercise 1";
        String str2 = "This is Exercise 2";
        
        System.out.println("String 1: " + str1);
        System.out.println("String 2: " + str2); 
       
        // Compare the two strings.
        int result = str1.compareTo(str2);

        // Display the results of the comparison.
        if (result < 0)
        {
            System.out.println("\"" + str1 + "\"" +
                " is less than " +
                "\"" + str2 + "\"");
        }
        else if (result == 0)
        {
            System.out.println("\"" + str1 + "\"" +
                " is equal to " +
                "\"" + str2 + "\"");
        }
        else // if (result > 0)
        {
            System.out.println("\"" + str1 + "\"" +
                " is greater than " +
                "\"" + str2 + "\"");
        }
    }
}

// 6. Write a Java program to compare two strings lexicographically, ignoring case differences. 
// Sample Output:

// String 1: This is exercise 1                                                                                  
// String 2: This is Exercise 1                                                                                  
// "This is exercise 1" is equal to "This is Exercise 1"

public class Exercise6 {

public static void main(String[] args)
    {
        String str1 = "This is exercise 1";
        String str2 = "This is Exercise 1";
        
        System.out.println("String 1: " + str1);
        System.out.println("String 2: " + str2); 
       
        // Compare the two strings.
        int result = str1.compareToIgnoreCase(str2);

        // Display the results of the comparison.
        if (result < 0)
        {
            System.out.println("\"" + str1 + "\"" +
                " is less than " +
                "\"" + str2 + "\"");
        }
        else if (result == 0)
        {
            System.out.println("\"" + str1 + "\"" +
                " is equal to " +
                "\"" + str2 + "\"");
        }
        else // if (result > 0)
        {
            System.out.println("\"" + str1 + "\"" +
                " is greater than " +
                "\"" + str2 + "\"");
        }
    }
}


// 7. Write a Java program to concatenate a given string to the end of another string. 
// Sample Output:

// String 1: PHP Exercises and                                                                                   
// String 2: Python Exercises                                                                                    
// The concatenated string: PHP Exercises and Python Exercises

public class Exercise7 {

    public static void main(String[] args)
    {
        String str1 = "PHP Exercises and ";
        String str2 = "Python Exercises";
        
        System.out.println("String 1: " + str1);
        System.out.println("String 2: " + str2); 
       

        // Concatenate the two strings together.
        String str3 = str1.concat(str2);

        // Display the new String.
        System.out.println("The concatenated string: " + str3);
    }
}


// 8. Write a Java program to test if a given string contains the specified sequence of char values. 
// Sample Output:

// Original String: PHP Exercises and Python Exercises                                                           
// Specified sequence of char values: and                                                                        
// true 

public class Exercise8 {

    public static void main(String[] args)
    {
        String str1 = "PHP Exercises and Python Exercises";
        String str2 = "and";
        System.out.println("Original String: " + str1);
        System.out.println("Specified sequence of char values: " + str2);
        System.out.println(str1.contains(str2));
    }
}


// 9. Write a Java program to compare a given string to the specified character sequence. 
// Sample Output:

// Comparing example.com and example.com: true                                                                   
// Comparing Example.com and example.com: false

public class Exercise9 {
public static void main(String[] args) {
    String str1 = "example.com", str2 = "Example.com";
    CharSequence cs = "example.com";
     System.out.println("Comparing "+str1+" and "+cs+": " + str1.contentEquals(cs));
      System.out.println("Comparing "+str2+" and "+cs+": " + str2.contentEquals(cs));
          }
}


// 10. Write a Java program to compare a given string to the specified string buffer. 
// Sample Output:

// Comparing example.com and example.com: true                                                                   
// Comparing Example.com and example.com: false 

public class Exercise10 {

public static void main(String[] args) {

    String str1 = "example.com", str2 = "Example.com";
    StringBuffer strbuf = new StringBuffer(str1);
    
    System.out.println("Comparing "+str1+" and "+strbuf+": " + str1.contentEquals(strbuf));
    
    System.out.println("Comparing "+str2+" and "+strbuf+": " + str2.contentEquals(strbuf));
    
      }
}


// 11. Write a Java program to create a new String object with the contents of a character array. 
// Sample Output:

// The book contains 234 pages.

public class Exercise11 {

    public static void main(String[] args)
    {
        // Character array with data.
        char[] arr_num = new char[] { '1', '2', '3', '4' };

        // Create a String containig the contents of arr_num
        // starting at index 1 for length 2.
        String str = String.copyValueOf(arr_num, 1, 3);

        // Display the results of the new String.
        System.out.println("\nThe book contains " + str +" pages.\n");
    }
}


// 12. Write a Java program to check whether a given string ends with the contents of another string. 
// Sample Output:

// "Python Exercises" ends with "se"? false                                                                      
// "Python Exercise" ends with "se"? true

public class Exercise12 {

    public static void main(String[] args)
    {
        String str1 = "Python Exercises";
        String str2 = "Python Exercise";

        // The String to check the above two Strings to see
        // if they end with this value (se).
        String end_str = "se";

        // Check first two Strings end with end_str
        boolean ends1 = str1.endsWith(end_str);
        boolean ends2 = str2.endsWith(end_str);

        // Display the results of the endsWith calls.
        System.out.println("\"" + str1 + "\" ends with " +
            "\"" + end_str + "\"? " + ends1);
        System.out.println("\"" + str2 + "\" ends with " +
            "\"" + end_str + "\"? " + ends2);
    }
}


// 13. Write a Java program to check whether two String objects contain the same data. 
// Sample Output:

// "Stephen Edwin King" equals "Walter Winchell"? false                                                          
// "Stephen Edwin King" equals "Mike Royko"? false

public class Exercise13 {

   public static void main(String[] args)
    {
        String columnist1 = "Stephen Edwin King";
        String columnist2 = "Walter Winchell";
        String columnist3 = "Mike Royko";

        // Are any of the above Strings equal to one another?
        boolean equals1 = columnist1.equals(columnist2);
        boolean equals2 = columnist1.equals(columnist3);

        // Display the results of the equality checks.
        System.out.println("\"" + columnist1 + "\" equals \"" +
            columnist2 + "\"? " + equals1);
        System.out.println("\"" + columnist1 + "\" equals \"" +
            columnist3 + "\"? " + equals2);
    }
}


// 14. Write a Java program to compare a given string to another string, ignoring case considerations. 
// Sample Output:

// "Stephen Edwin King" equals "Walter Winchell"? false                                                          
// "Stephen Edwin King" equals "stephen edwin king"? true 

public class Exercise14 {

  public static void main(String[] args)
    {
        String columnist1 = "Stephen Edwin King";
        String columnist2 = "Walter Winchell";
        String columnist3 = "stephen edwin king";

        // Test any of the above Strings equal to one another
        boolean equals1 = columnist1.equalsIgnoreCase(columnist2);
        boolean equals2 = columnist1.equalsIgnoreCase(columnist3);

        // Display the results of the equality checks.
        System.out.println("\"" + columnist1 + "\" equals \"" +
            columnist2 + "\"? " + equals1);
        System.out.println("\"" + columnist1 + "\" equals \"" +
            columnist3 + "\"? " + equals2);
    }
}


// 15. Write a Java program to print current date and time in the specified format. 
// Sample Output:

// Current Date and Time :                                                                                       
// June 19, 2017                                                                                                 
// 3:13 pm 

// N.B. : The current date and time will change according to your system date and time.

import java.util.Calendar;

public class Exercise15 {
 
 public static void main(String[] args) { 
    Calendar c = Calendar.getInstance();
      System.out.println("Current Date and Time :"); 
      System.out.format("%tB %te, %tY%n", c, c, c);
      System.out.format("%tl:%tM %tp%n", c, c, c); 
   }
}


// 16. Write a Java program to get the contents of a given string as a byte array. 
// Sample Output:

// The new String equals This is a sample String.

import java.util.Calendar;

public class Exercise16 {
 
  public static void main(String[] args)
    {
        String str = "This is a sample String.";

        // Copy the contents of the String to a byte array.
        byte[] byte_arr = str.getBytes();

        // Create a new String using the contents of the byte array.
        String new_str = new String(byte_arr);

        // Display the contents of the byte array.
        System.out.println("\nThe new String equals " +
            new_str + "\n");
    }
}


// 17. Write a Java program to get the contents of a given string as a character array. 
// Sample Output:

// The char array equals "[C@2a139a55"

public class Exercise17 {
 
  public static void main(String[] args)
    {
        String str = "This is a sample string.";

        // Copy the contents of the String to a byte array.
        // Only copy characters 4 through 10 from str.
        // Fill the source array starting at position 2.
        char[] arr = new char[] { ' ', ' ', ' ', ' ',
                                  ' ', ' ', ' ', ' ' };
        str.getChars(4, 10, arr, 2);

        // Display the contents of the byte array.
        System.out.println("The char array equals \"" +
            arr + "\"");
    }
}


// 18. Write a Java program to create a unique identifier of a given string. 
// Sample Output:

// The hash for Python Exercises. is 863132599 

public class Exercise18 {
 
  public static void main(String[] args)
    {
        String str = "Python Exercises.";

        // Get the hash code for the above string.
        int hash_code = str.hashCode();

        // Display the hash code.
        System.out.println("The hash for " + str +
            " is " + hash_code);
    }
}


// 19. Write a Java program to get the index of all the characters of the alphabet. 
// Sample Output:

// a  b c  d e  f  g h i  j                                                                                     
// =========================                                                                                     
// 36 10 7 40 2 16 42 1 6 20                                                                                     
                                                                                                   
// k  l  m  n  o  p q  r  s  t                                                                                   
// ===========================                                                                                   
// 8 35 22 14 12 23 4 11 24 31                                                                                   

// u  v  w  x  y  z                                                                                              
// ================                                                                                              
// 5 27 13 18 38 37

// Sample string of all alphabet: "The quick brown fox jumps over the lazy dog."

public class Exercise19 {
 
  public static void main(String[] args)
    {
        String str = "The quick brown fox jumps over the lazy dog.";

        // Get the index of all the characters of the alphabet
        // starting from the beginning of the String.
        int a = str.indexOf("a", 0);
        int b = str.indexOf("b", 0);
        int c = str.indexOf("c", 0);
        int d = str.indexOf("d", 0);
        int e = str.indexOf("e", 0);
        int f = str.indexOf("f", 0);
        int g = str.indexOf("g", 0);
        int h = str.indexOf("h", 0);
        int i = str.indexOf("i", 0);
        int j = str.indexOf("j", 0);
        int k = str.indexOf("k", 0);
        int l = str.indexOf("l", 0);
        int m = str.indexOf("m", 0);
        int n = str.indexOf("n", 0);
        int o = str.indexOf("o", 0);
        int p = str.indexOf("p", 0);
        int q = str.indexOf("q", 0);
        int r = str.indexOf("r", 0);
        int s = str.indexOf("s", 0);
        int t = str.indexOf("t", 0);
        int u = str.indexOf("u", 0);
        int v = str.indexOf("v", 0);
        int w = str.indexOf("w", 0);
        int x = str.indexOf("x", 0);
        int y = str.indexOf("y", 0);
        int z = str.indexOf("z", 0);

        // Display the results of all the indexOf method calls.
        System.out.println(" a  b c  d e  f  g h i  j");
        System.out.println("=========================");
        System.out.println(a + " " + b + " " + c + " " + d + " " +
                           e + " " + f + " " + g + " " + h + " " +
                           i + " " + j + "\n");

        System.out.println("k  l  m  n  o  p q  r  s  t");
        System.out.println("===========================");
        System.out.println(k + " " + l + " " + m + " " + n + " " +
                           o + " " + p + " " + q + " " + r + " " +
                           s + " " + t + "\n");

        System.out.println("u  v  w  x  y  z");
        System.out.println("================");
        System.out.println(u + " " + v + " " + w + " " + x + " " +
                           y + " " + z);
    }
}


// 20. Write a Java program to get the canonical representation of the string object. 
// Sample Output:

// str1 == str2? false                                                                                           
// str1 == str3? true

public class Exercise20 {
public static void main(String[] args)
    {
        // Create three strings in three different ways.
        String str1 = "Java Exercises";
        String str2 = new StringBuffer("Java").append(" Exercises").toString();
        String str3 = str2.intern();

        // Determine which strings are equivalent using the ==
        // operator (as compared to calling equals(), which is
        // a more expensive operation.
        System.out.println("str1 == str2? " + (str1 == str2));
        System.out.println("str1 == str3? " + (str1 == str3));
    }
}


// 21. Write a Java program to get the last index of a string within a string. 
// Sample Output:

//  a  b c  d  e  f  g  h i  j                                                                                   
// ===========================                                                                                   
// 36 10 7 40 33 16 42 32 6 20                                                                                   
                                                                                                              
// k  l  m  n  o  p q  r  s  t                                                                                   
// ===========================                                                                                   
// 8 35 22 14 41 23 4 29 24 31                                                                                   
                                                                                                              
//  u  v  w  x  y  z                                                                                             
// =================                                                                                             
// 21 27 13 18 38 37

// Sample string of all alphabet: "The quick brown fox jumps over the lazy dog."

public class Exercise21 {
public static void main(String[] args)
    {
        String str = "The quick brown fox jumps over the lazy dog.";

        // Get the index of all the characters of the alphabet
        // starting from the beginning of the String.
        int a = str.lastIndexOf("a", str.length() - 1);
        int b = str.lastIndexOf("b", str.length() - 1);
        int c = str.lastIndexOf("c", str.length() - 1);
        int d = str.lastIndexOf("d", str.length() - 1);
        int e = str.lastIndexOf("e", str.length() - 1);
        int f = str.lastIndexOf("f", str.length() - 1);
        int g = str.lastIndexOf("g", str.length() - 1);
        int h = str.lastIndexOf("h", str.length() - 1);
        int i = str.lastIndexOf("i", str.length() - 1);
        int j = str.lastIndexOf("j", str.length() - 1);
        int k = str.lastIndexOf("k", str.length() - 1);
        int l = str.lastIndexOf("l", str.length() - 1);
        int m = str.lastIndexOf("m", str.length() - 1);
        int n = str.lastIndexOf("n", str.length() - 1);
        int o = str.lastIndexOf("o", str.length() - 1);
        int p = str.lastIndexOf("p", str.length() - 1);
        int q = str.lastIndexOf("q", str.length() - 1);
        int r = str.lastIndexOf("r", str.length() - 1);
        int s = str.lastIndexOf("s", str.length() - 1);
        int t = str.lastIndexOf("t", str.length() - 1);
        int u = str.lastIndexOf("u", str.length() - 1);
        int v = str.lastIndexOf("v", str.length() - 1);
        int w = str.lastIndexOf("w", str.length() - 1);
        int x = str.lastIndexOf("x", str.length() - 1);
        int y = str.lastIndexOf("y", str.length() - 1);
        int z = str.lastIndexOf("z", str.length() - 1);

        // Display the results of all the lastIndexOf method calls.
        System.out.println(" a  b c  d  e  f  g  h i  j");
        System.out.println("===========================");
        System.out.println(a + " " + b + " " + c + " " + d + " " +
                           e + " " + f + " " + g + " " + h + " " +
                           i + " " + j + "\n");

        System.out.println("k  l  m  n  o  p q  r  s  t");
        System.out.println("===========================");
        System.out.println(k + " " + l + " " + m + " " + n + " " +
                           o + " " + p + " " + q + " " + r + " " +
                           s + " " + t + "\n");

        System.out.println(" u  v  w  x  y  z");
        System.out.println("=================");
        System.out.println(u + " " + v + " " + w + " " + x + " " +
                           y + " " + z);
    }
}


// 22. Write a Java program to get the length of a given string. 
// Sample Output:

// The string length of 'example.com' is: 11

public class Exercise22 {
public static void main(String[] args)
  {  
    String str = "example.com";
    // Get the length of str.
    int len = str.length();
    System.out.println("The string length of '"+str+"' is: "+len);
   }
}


// 23. Write a Java program to find whether a region in the current string matches a region in another string. 
// Sample Output:

// str1[0 - 7] == str2[28 - 35]? true                                                                            
// str1[9 - 15] == str2[9 - 15]? false 

public class Exercise23 {
    
  public static void main(String[] args)
    {
       //String str1 = "Red Green Orange Yellow";
        //String str2 = "Yellow Orange Green Red";
        
        String str1 = "Shanghai Houston Colorado Alexandria";
        String str2 = "Alexandria Colorado Houston Shanghai";

        // Determine whether characters 0 through 7 in str1 
        // match characters 28 through 35 in str2.
        boolean match1 = str1.regionMatches(0, str2, 28, 8);

        // Determine whether characters 9 through 15 in str1 
        // match characters 9 through 15 in str2.
        boolean match2 = str1.regionMatches(9, str2, 9, 8);

        // Display the results of the regionMatches method calls.
        System.out.println("str1[0 - 7] == str2[28 - 35]? " + match1);
        System.out.println("str1[9 - 15] == str2[9 - 15]? " + match2);
    }
}


// 24. Write a Java program to replace a specified character with another character. 
// Sample Output:

// Original string: The quick brown fox jumps over the lazy dog.                                                 
// New String: The quick brown fox jumps over the lazy fog.

public class Exercise24 {
    
   public static void main(String[] args)
    {
        String str = "The quick brown fox jumps over the lazy dog.";

        // Replace all the 'd' characters with 'f' characters.
        String new_str = str.replace('d', 'f');

        // Display the strings for comparison.
        System.out.println("Original string: " + str);
        System.out.println("New String: " + new_str);
    }
}

// 25. Write a Java program to replace each substring of a given string that matches the given regular expression with the given replacement. 

// Sample string : "The quick brown fox jumps over the lazy dog."

// In the above string replace all the fox with cat.
// Sample Output:

// Original string: The quick brown fox jumps over the lazy dog.                                                 
// New String: The quick brown cat jumps over the lazy dog.         

public class Exercise25 {
    
   public static void main(String[] args)
    {
        String str = "The quick brown fox jumps over the lazy dog.";

         // Replace all the 'dog' with 'cat'.
        String new_str = str.replaceAll("fox", "cat");
       
         // Display the strings for comparison.
        System.out.println("Original string: " + str);
        System.out.println("New String: " + new_str);
    }
}


// 26. Write a Java program to check whether a given string starts with the contents of another string. 
// Sample Output:

// Red is favorite color. starts with Red? true                                                                  
// Orange is also my favorite color. starts with Red? false

public class Exercise26 {
    
   public static void main(String[] args)
    {
        String str1 = "Red is favorite color.";
        String str2 = "Orange is also my favorite color.";

        // The String to check the above two Strings to see
        // if they start with this value (Red).
        String startStr = "Red";

        // Do either of the first two Strings start with startStr?
        boolean starts1 = str1.startsWith(startStr);
        boolean starts2 = str2.startsWith(startStr);

        // Display the results of the startsWith calls.
        System.out.println( str1 + " starts with " +
             startStr + "? " + starts1);
        System.out.println(str2 + " starts with " +
             startStr + "? " + starts2);
    }
}


// 27. Write a Java program to get a substring of a given string between two specified positions. 
// Sample Output:

// old = The quick brown fox jumps over the lazy dog.                                                            
// new = brown fox jumps

public class Exercise27 {
    
   public static void main(String[] args)
    {
        String str = "The quick brown fox jumps over the lazy dog.";

        // Get a substring of the above string starting from
        // index 10 and ending at index 26.
        String new_str = str.substring(10, 26);

        // Display the two strings for comparison.
        System.out.println("old = " + str);
        System.out.println("new = " + new_str);
    }
}


// 28. Write a Java program to create a character array containing the contents of a string. 
// Sample Output:

// Java Exercises.

public class Exercise28 {
    
  public static void main(String[] args)
    {
        String str = "Java Exercises.";

        // Convert the above string to a char array.
        char[] arr = str.toCharArray();

        // Display the contents of the char array.
        System.out.println(arr);
    }
}


// 29. Write a Java program to convert all the characters in a string to lowercase. 
// Sample Output:

// Original String: The Quick BroWn FoX!                                                                         
// String in lowercase: the quick brown fox!

public class Exercise29 {
       public static void main(String[] args)
    {
        String str = "The Quick BroWn FoX!";

        // Convert the above string to all lowercase.
        String lowerStr = str.toLowerCase();

        // Display the two strings for comparison.
        System.out.println("Original String: " + str);
        System.out.println("String in lowercase: " + lowerStr);
    }
}

// 30. Write a Java program to convert all the characters in a string to uppercase. 
// Sample Output:

// Original String: The Quick BroWn FoX!                                                                         
// String in uppercase: THE QUICK BROWN FOX!  


public class Exercise30 {
    
   public static void main(String[] args)
    {
        String str = "The Quick BroWn FoX!";

        // Convert the above string to all uppercase.
        String upper_str = str.toUpperCase();

        // Display the two strings for comparison.
        System.out.println("Original String: " + str);
        System.out.println("String in uppercase: " + upper_str);
    }
}

// 31. Write a Java program to trim any leading or trailing whitespace from a given string. 
// Sample Output:

// Original String:  Java Exercises                                                                              
// New String: Java Exercises

public class Exercise31 {

public static void main(String[] args)
    {
        String str = " Java Exercises ";

        // Trim the whitespace from the front and back of the
        // String.
        String new_str = str.trim();

        // Display the strings for comparison.
		System.out.println("Original String: " + str);
		System.out.println("New String: " + new_str);
    }
}


// 32. Write a Java program to find longest Palindromic Substring within a string. 
// Sample Output:

// The given string is: thequickbrownfoxxofnworbquickthe
// The longest palindrome substring in the giv
// en string is; brownfoxxofnworb
// The length of the palindromic substring is: 16

import java.util.*;
public class Main {
 static void printSubStr(String str1, int l, int h) {
  System.out.println(str1.substring(l, h + 1));
 }

 static int longPalSubstr(String str1) {
  int n = str1.length();
  boolean table[][] = new boolean[n][n];
  int mLength = 1;
  for (int i = 0; i < n; ++i)
   table[i][i] = true;
  int strt = 0;
  for (int i = 0; i < n - 1; ++i) {
   if (str1.charAt(i) == str1.charAt(i + 1)) {
    table[i][i + 1] = true;
    strt = i;
    mLength = 2;
   }
  }
  for (int k = 3; k <= n; ++k) {
   for (int i = 0; i < n - k + 1; ++i) {
    int j = i + k - 1;
    if (table[i + 1][j - 1] && str1.charAt(i) == str1.charAt(j)) {
     table[i][j] = true;

     if (k > mLength) {
      strt = i;
      mLength = k;
     }
    }
   }
  }
  System.out.print("The longest palindrome substring in the given string is; ");
  printSubStr(str1, strt, strt + mLength - 1);
  return mLength;
 }
 public static void main(String[] args) {
  String str1 = "thequickbrownfoxxofnworbquickthe";
  System.out.println("The given string is: " + str1);
  System.out.println("The length of the palindromic substring is: " + longPalSubstr(str1));
 }
}


// 33. Write a Java program to find all interleavings of given strings. 
// Sample Output:

// The given strings are: WX  YZ
// The interleavings strings are: 
// YWZX
// WYZX
// YWXZ
// WXYZ
// YZWX
// WYXZ

import java.util.HashSet;
import java.util.Set;

class Main {
 public static void allInterleavings(String res, String P, String Q, Set < String > out) {
  if (P.length() == 0 && Q.length() == 0) {
   out.add(res);
   return;
  }
  if (P.length() > 0) {
   allInterleavings(res + P.charAt(0), P.substring(1), Q, out);
  }
  if (Q.length() > 0) {
   allInterleavings(res + Q.charAt(0), P, Q.substring(1), out);
  }
 }

 public static void main(String[] args) {
  String P = "WX";
  String Q = "YZ";
  System.out.println("The given strings are: " + P + "  " + Q);
  System.out.println("The interleavings strings are: ");
  Set < String > out = new HashSet < > ();
  allInterleavings("", P, Q, out);

  out.stream().forEach(System.out::println);
 }
}


// 34. Write a Java program to find the second most frequent character in a given string. 
// Sample Output:

// The given string is: successes
// The second most frequent char in the string is: c

import java.util.*;
public class Main {
 static final int NOOFCHARS = 256;
 static char get2ndMostFreq(String str1) {

  int[] ctr = new int[NOOFCHARS];
  int i;
  for (i = 0; i < str1.length(); i++)
   (ctr[str1.charAt(i)]) ++;

  int ctr_first = 0, ctr_second = 0;
  for (i = 0; i < NOOFCHARS; i++) {
   if (ctr[i] > ctr[ctr_first]) {
    ctr_second = ctr_first;
    ctr_first = i;
   } else if (ctr[i] > ctr[ctr_second] && ctr[i] != ctr[ctr_first])
    ctr_second = i;
  }
  return (char) ctr_second;
 }
 public static void main(String args[]) {
  String str1 = "successes";
  System.out.println("The given string is: " + str1);
  char res = get2ndMostFreq(str1);
  if (res != '\0')
   System.out.println("The second most frequent char in the string is: " + res);
  else
   System.out.println("No second most frequent character found in the string.");
 }
}


// 35. Write a Java program to print all permutations of a given string with repetition. 
// Sample Output:

// The given string is: PQR
// The permuted strings are:
// PPP
// PPQ
// PPR
// ...
// RRP
// RRQ
// RRR

import java.util.*;
public class Main {

 public static void main(String[] args) {
  permutationWithRepeation("PQR");

 }

 private static void permutationWithRepeation(String str1) {
  System.out.println("The given string is: PQR");
  System.out.println("The permuted strings are:");
  showPermutation(str1, "");
 }

 private static void showPermutation(String str1, String NewStringToPrint) {

  if (NewStringToPrint.length() == str1.length()) {
   System.out.println(NewStringToPrint);
   return;
  }
  for (int i = 0; i < str1.length(); i++) {

   showPermutation(str1, NewStringToPrint + str1.charAt(i));
  }
 }
}


// 36. Write a Java program to check whether two strings are interliving of a given string. Assuming that the unique characters in both strings. 
// Sample Output:

// The given string is: PMQNO
// The interleaving strings are MNO and PQ
// The given string is interleaving: true

// The given string is: PNQMO
// The interleaving strings are MNO and PQ
// The given string is interleaving: false

import java.util.*;
public class Main {
 public static void main(String args[]) {
  String str1 = "MNO";
  String str2 = "PQ";
  String str3 = "PMQNO";
  System.out.println("The given string is: " + str3);
  System.out.println("The interleaving strings are " + str1 + " and " + str2);
  System.out.println("The given string is interleaving: " + checkInterleaved(str1, str2, str3));
 }
 private static boolean checkInterleaved(String str1, String str2, String CheckInString) {
  int i = 0, j = 0, k = 0;
  if (str1.length() + str2.length() != CheckInString.length()) {
   return false;
  }
  while (k < CheckInString.length()) {
   if (i < str1.length() && str1.charAt(i) == CheckInString.charAt(k)) {
    i++;
   } else if (j < str2.length() && str2.charAt(j) == CheckInString.charAt(k)) {
    j++;
   } else {
    return false;
   }
   k++;
  }
  if (!(i == str1.length() && j == str2.length() && k == CheckInString.length())) {
   return false;
  }
  return true;
 }
}


// 37. Write a Java program to find Length of the longest substring without repeating characters. 
// Sample Output:

// Input String : pickoutthelongestsubstring
// The longest substring : [u, b, s, t, r, i, n, g]
// The longest Substring Length : 8

import java.util.LinkedHashMap;

public class Main {
 static void longestSubstring(String inputString) {
  char[] arr1 = inputString.toCharArray();
  String long_str = null;
  int str_length = 0;
  LinkedHashMap <
  Character, Integer >
  charPosMap = new LinkedHashMap <
  Character, Integer >
  ();
  for (int i = 0; i < arr1.length; i++) {
   char ch = arr1[i];
   if (!charPosMap.containsKey(ch)) {
    charPosMap.put(ch, i);
   } else {
    i = charPosMap.get(ch);
    charPosMap.clear();
   }
   if (charPosMap.size() > str_length) {
    str_length = charPosMap.size();
    long_str = charPosMap.keySet().toString();
   }
  }
  System.out.println("Input String : " + inputString);
  System.out.println("The longest substring : " + long_str);
  System.out.println("The longest Substring Length : " + str_length);
 }
 public static void main(String[] args) {
  longestSubstring("pickoutthelongestsubstring");
 }
}


// 38. Write a Java program to print after removing duplicates from a given string. 
// Sample Output:

// The given string is: w3resource
// After removing duplicates characters the new string is: w3resouc

import java.util.*;
public class Main {
 public static void main(String[] args) {
  String str1 = "w3resource";
  System.out.println("The given string is: " + str1);
  System.out.println("After removing duplicates characters the new string is: " + removeDuplicateChars(str1));
 }
 private static String removeDuplicateChars(String sourceStr) {
  char[] arr1 = sourceStr.toCharArray();
  String targetStr = "";
  for (char value: arr1) {
   if (targetStr.indexOf(value) == -1) {
    targetStr += value;
   }
  }
  return targetStr;
 }
}


// 39. Write a Java program to find first non repeating character in a string. 
// Sample Output:

// The given string is: gibblegabbler
// The first non repeated character in String is: i

import java.util.*;
public class Main {
 public static void main(String[] args) {
  String str1 = "gibblegabbler";
  System.out.println("The given string is: " + str1);
  for (int i = 0; i < str1.length(); i++) {
   boolean unique = true;
   for (int j = 0; j < str1.length(); j++) {
    if (i != j && str1.charAt(i) == str1.charAt(j)) {
     unique = false;
     break;
    }
   }
   if (unique) {
    System.out.println("The first non repeated character in String is: " + str1.charAt(i));
    break;
   }
  }
 }
}


// 40. Write a Java program to divide a string in n equal parts. 
// Sample Output:

// The given string is: abcdefghijklmnopqrstuvwxy
// The string divided into 5 parts and they are: 

// abcde
// fghij
// klmno
// pqrst
// uvwxy

import java.util.*;
class Main {
 static void splitString(String str1, int n) {
  int str_size = str1.length();
  int part_size;
  if (str_size % n != 0) {
   System.out.println("The size of the given string is not divisible by " + n);
   return;
  } else {
   System.out.println("The given string is: " + str1);
   System.out.println("The string divided into " + n + " parts and they are: ");
   part_size = str_size / n;
   for (int i = 0; i < str_size; i++) {
    if (i % part_size == 0) System.out.println();
    System.out.print(str1.charAt(i));
   }
  }
 }
 public static void main(String[] args) {
  String str1 = "abcdefghijklmnopqrstuvwxy";
  int split_number = 5;
  splitString(str1, split_number);
 }
}


// 41. Write a Java program to remove duplicate characters from a given string presents in another given string. 
// Sample Output:

// The given string is: the quick brown fox
// The given mask string is: queen

// The new string is: 
// th ick brow fox

import java.util.*;
public class Main {
 public static void main(String[] args) {
  String str1 = "the quick brown fox";
  String str2 = "queen";
  System.out.println("The given string is: " + str1);
  System.out.println("The given mask string is: " + str2);
  char arr[] = new char[str1.length()];
  char[] mask = new char[256];
  for (int i = 0; i < str2.length(); i++)
   mask[str2.charAt(i)]++;
  System.out.println("\nThe new string is: ");
  for (int i = 0; i < str1.length(); i++) {
   if (mask[str1.charAt(i)] == 0)
    System.out.print(str1.charAt(i));
  }
 }
}


// 42. Write a Java program to print list items containing all characters of a given word. 
// Sample Output:

// The given strings are: rabbit   bribe   dog   
// The given word is: bib 

// The strings containing all the letters of the given word are: 
// rabbit
// bribe

import java.util.*;
class Main {
 static void checkExistance(String str1, String str_to_search) {
  int chk = 0;
  char chhr = ' ';
  int[] a = new int[Character.MAX_VALUE + 1];

  for (int i = 0; i < str1.length(); i++) {
   chhr = str1.charAt(i);
   ++a[chhr];
  }
  for (int i = 0; i < str_to_search.length(); i++) {
   chhr = str_to_search.charAt(i);
   if (a[chhr] >= 1)
    chk = 1;
  }
  if (chk == 1)
   System.out.println(str1);
 }

 public static void main(String[] args) {
  List < String > list = new ArrayList < String > ();
  list.add("rabbit");
  list.add("bribe");
  list.add("dog");
  System.out.print("The given strings are: ");
  for (int i = 0; i < list.size(); i++) {
   System.out.print(list.get(i) + "   ");
  }
  System.out.println("\nThe given word is: bib ");
  System.out.println("\nThe strings containing all the letters of the given word are: ");
  for (int j = 0; j < list.size(); j++) {
   checkExistance(list.get(j), "bib");
  }
 }
}


// 43. Write a Java program to find the maximum occurring character in a string. 
// Sample Output:

// The given string is: test string
// Max occurring character in the given string is: t

import java.util.*;
public class Main {
 static final int N = 256;
 static char MaxOccuringChar(String str1) {
  int ctr[] = new int[N];
  int l = str1.length();
  for (int i = 0; i < l; i++)
   ctr[str1.charAt(i)]++;
  int max = -1;
  char result = ' ';

  for (int i = 0; i < l; i++) {
   if (max < ctr[str1.charAt(i)]) {
    max = ctr[str1.charAt(i)];
    result = str1.charAt(i);
   }
  }

  return result;
 }
 public static void main(String[] args) {
  String str1 = "test string";
  System.out.println("The given string is: " + str1);
  System.out.println("Max occurring character in the given string is: " + MaxOccuringChar(str1));
 }
}


// 44. Write a Java program to reverse a string using recursion. 
// Sample Output:

// The given string is: The quick brown fox jumps
// The string in reverse order is:
// spmuj xof nworb kciuq ehT

import java.util.*;
class Main {
 void reverseString(String str1) {
  if ((str1 == null) || (str1.length() <= 1))
   System.out.println(str1);
  else {
   System.out.print(str1.charAt(str1.length() - 1));
   reverseString(str1.substring(0, str1.length() - 1));
  }
 }
 public static void main(String[] args) {
  String str1 = "The quick brown fox jumps";
  System.out.println("The given string is: " + str1);
  System.out.println("The string in reverse order is:");
  Main obj = new Main();
  obj.reverseString(str1);
 }
}


// 45. Write a Java program to reverse words in a given string. 
// Sample Output:

// The given string is: Reverse words in a given string
// The new string after reversed the words: string given a in words Reverse

import java.util.*;
public class Main {
 public static String WordsInReverse(String str1) {
  StringBuilder sb = new StringBuilder(str1);
  String StrRev = sb.reverse().toString();

  String[] words = StrRev.split(" ");
  StringBuilder reverse = new StringBuilder();
  for (String tmp: words) {
   sb = new StringBuilder(tmp);
   reverse.append(sb.reverse() + " ");
  }
  reverse.deleteCharAt(reverse.length() - 1);
  return reverse.toString();
 }

 public static void main(String[] args) {
  String str1 = "Reverse words in a given string";
  System.out.println("The given string is: " + str1);
  System.out.println("The new string after reversed the words: " + WordsInReverse(str1));
 }
}


// 46. Write a Java program to reverse every word in a string using methods. 
// Sample Output:

// The given string is: This is a test string
// The string reversed word by word is: 
// sihT si a tset gnirts

import java.util.*;
public class Main {
 public void reverseEachWordInString(String str1) {
  String[] each_words = str1.split(" ");
  String revString = "";
  for (int i = 0; i < each_words.length; i++) {
   String word = each_words[i];
   String reverseWord = "";
   for (int j = word.length() - 1; j >= 0; j--) {
    reverseWord = reverseWord + word.charAt(j);
   }
   revString = revString + reverseWord + " ";
  }
  System.out.println(revString);
 }
 public static void main(String[] args) {
  Main obj = new Main();
  String StrGiven = "This is a test string";
  System.out.println("The given string is: " + StrGiven);
  System.out.println("The string reversed word by word is: ");
  obj.reverseEachWordInString(StrGiven);
 }
}


// 47. Write a Java program to rearrange a string so that all same characters become d distance away. 
// Sample Output:

// The given string is: accessories
// The string after arrange newly is: 
// secrsecisao

import java.util.*;
public class Main {

 public static int MX = 26;
 static class freqOfChar {
  char c;
  int f;
  public freqOfChar(char c, int f) {
   this.c = c;
   this.f = f;
  }
 }

 public static void main(String[] args) {
  String strr = "accessories";
  System.out.println("The given string is: " + strr);
  System.out.println("The string after arrange newly is: ");
  String strg = charRearrange(strr, 4);
  if (strg != null)
   System.out.println(strg);
 }

 public static String charRearrange(String strg, int k) {
  if (strg.length() <= 1) return strg;

  freqOfChar[] chr_fre = new freqOfChar[MX];
  int ctr = 0;

  for (int i = 0; i < MX; i++) {
   chr_fre[i] = new freqOfChar((char)('a' + i), 0);
  }

  for (int i = 0; i < strg.length(); i++) {
   char ch = strg.charAt(i);
   chr_fre[ch - 'a'].f++;
   if (chr_fre[ch - 'a'].f == 1) ctr++;
  }

  bldOfHeap(chr_fre, MX);

  char[] str1 = new char[strg.length()];
  boolean[] occu = new boolean[strg.length()];
  for (int i = 0; i < ctr; i++) {
   freqOfChar chfreq = extractMax(chr_fre, MX - i);
   int ptr = i;
   while (occu[ptr]) ptr++;

   for (int j = 0; j < chfreq.f; j++) {
    if (ptr >= str1.length)
     return null;
    str1[ptr] = chfreq.c;
    occu[ptr] = true;
    ptr += k;
   }
  }
  return new String(str1);
 }

 private static void bldOfHeap(freqOfChar[] chr_fre, int size) {
  int i = (size - 1) / 2;
  while (i >= 0) {
   maxHeapify(chr_fre, i, size);
   i--;
  }
 }

 private static void swap(freqOfChar cf1, freqOfChar cf2) {
  char c = cf1.c;
  int f = cf1.f;
  cf1.c = cf2.c;
  cf1.f = cf2.f;
  cf2.c = c;
  cf2.f = f;
 }

 private static void maxHeapify(freqOfChar[] chr_fre, int node, int size) {
  int l = node * 2 + 1;
  int r = node * 2 + 2;
  int largest = node;
  if (l < size && chr_fre[l].f > chr_fre[node].f) {
   largest = l;
  }
  if (r < size && chr_fre[r].f > chr_fre[largest].f) {
   largest = r;
  }
  if (largest != node) {
   swap(chr_fre[node], chr_fre[largest]);
   maxHeapify(chr_fre, largest, size);
  }
 }
 private static freqOfChar extractMax(freqOfChar[] chr_fre, int size) {
  freqOfChar max = chr_fre[0];
  chr_fre[0] = chr_fre[size - 1];
  chr_fre[size - 1] = null;
  maxHeapify(chr_fre, 0, size - 1);
  return max;
 }
}


// 48. Write a Java program to remove "b" and "ac" from a given string. 
// Sample Output:

// The given string is: abrambabasc
// After removing the new string is: aramaasc

import java.util.*;
public class Main {
 public static void main(String[] args) {
  String strg = "abrambabasc";
  System.out.println("The given string is: " + strg);
  System.out.print("After removing the new string is: ");
  removeSetofCharacters(strg, "ac", "b");
 }
 public static void removeSetofCharacters(String str, String ptn1, String ptn2) {
  int n = str.length(), i;
  int ptr = 0;
  char[] arr1 = str.toCharArray();
  for (i = 0; i < n; ++i) {
   if (arr1[i] == 'b') {
    continue;
   } else if (i + 1 < n && arr1[i] == 'a' && arr1[i + 1] == 'c') {
    ++i;
   } else {
    arr1[ptr++] = arr1[i]; // Copy char to head.
   }
  }
  char[] ret = Arrays.copyOfRange(arr1, 0, ptr);
  System.out.println(new String(ret));
 }
}


// 49. Write a Java program to find first non-repeating character from a stream of characters. 
// Sample Output:

// String: godisgood
// Reading: g
// The first non-repeating character so far is:  g
// Reading: o
// The first non-repeating character so far is:  g
// Reading: d
// The first non-repeating character so far is:  g
// Reading: i
// The first non-repeating character so far is:  g
// Reading: s
// The first non-repeating character so far is:  g
// Reading: g
// The first non-repeating character so far is:  o
// Reading: o
// The first non-repeating character so far is:  d
// Reading: o
// The first non-repeating character so far is:  d
// Reading: d
// The first non-repeating character so far is:  i

import java.util.*;

public class Main {

public static void main(String[] args) 
{  
  
int MXCHAR = 256;
 
  List < Character > inDLL = new ArrayList < Character > ();
  boolean[] repeatyn = new boolean[MXCHAR];
  String chrstream = "godisgood";
  System.out.println("String: " + chrstream);
  for (int i = 0; i < chrstream.length(); i++) {
   char x = chrstream.charAt(i);
   System.out.println("Reading: " + x);
   if (!repeatyn[x]) {
    if (!(inDLL.contains(x))) {
     inDLL.add(x);
    } else {
     inDLL.remove((Character) x);
     repeatyn[x] = true;
    }
   }
   if (inDLL.size() != 0) {
    System.out.print("The first non-repeating character so far is:  ");
    System.out.println(inDLL.get(0));
   }
  }
 }

}


// 50. Write a Java program to find lexicographic rank of a given string. 
// Sample Output:

// The Given String is: BDCA
// The Lexicographic rank of the given string is: 12

// N.B.: Total possible permutations of BDCA are(lexicographic order) :
// ABCD ABDC ACBD ACDB ADBC ADCB BACD BADC BCAD BCDA BDAC BDCA
// 1   2   3   4   5   6   7   8   9   10   11   12
// The BDCA appear in 12 position of permutation (lexicographic order).

import java.util.*;
class Main {
 public static int makefactorial(int n) {
  return (n <= 2) ? n : n * makefactorial(n - 1);
 }
 public static int calcuLexicoRank(String str, int n) {
  int ctrOfRank = 1;
  for (int i = 0; i < n; i++) {
   int ctr = 0;
   for (int j = i + 1; j <= n; j++) {
    if (str.charAt(i) > str.charAt(j))
     ctr++;
   }
   ctrOfRank += ctr * makefactorial(n - i);
  }
  return ctrOfRank;
 }
 public static void main(String[] args) {
  String str = "BDCA";
  System.out.println("The Given String is: " + str);
  int n = str.length();
  System.out.print("The Lexicographic rank of the given string is: " + calcuLexicoRank(str, n - 1));
 }
}


// 51. Write a Java program to count and print all the duplicates in the input string. 
// Sample Output:

// The given string is: w3resource
// The duplicate characters and counts are: 
// e  appears  2  times
// r  appears  2  times

import java.util.*; 
public class Main 
{
    static final int MAX_CHARS = 256;
    static void CountCharacters(String str1, int[] ctr)
    {
       for (int i = 0; i < str1.length();  i++)
          ctr[str1.charAt(i)]++;
    }
    static void showDuplicates(String str1)
    {
      int ctr[] = new int[MAX_CHARS];
      CountCharacters(str1, ctr);
      for (int i = 0; i < MAX_CHARS; i++)
        if(ctr[i] > 1)
            System.out.printf("%c  appears  %d  times\n", i,  ctr[i]);
    }
    public static void main(String[] args)
    {
        String str1 = "w3resource";
		System.out.println("The given string is: "+str1);
		System.out.println("The duplicate characters and counts are: ");
        showDuplicates(str1);
    }
}


// 52. Write a Java program to check if two given strings are rotations of each other. 
// Sample Output:

// The given strings are: ABACD  and  CDABA

// The concatination of 1st string twice is: ABACDABACD
// The 2nd string CDABA  exists in the new string.

// Strings are rotations of each other

import java.util.*; 
class Main
{
    static boolean checkForRotation (String str1, String str2)
    {
        return (str1.length() == str2.length()) && ((str1 + str1).indexOf(str2) != -1);
    }
    public static void main (String[] args)
    {
        String str1 = "ABACD";
        String str2 = "CDABA";
		    System.out.println("The given strings are: "+str1+"  and  "+str2);
		    System.out.println("\nThe concatination of 1st string twice is: "+str1+str1);

        if (checkForRotation(str1, str2))
        {
		        System.out.println("The 2nd string "+str2+"  exists in the new string.");	
            System.out.println("\nStrings are rotations of each other");
        }
        else
        {
          	System.out.println("The 2nd string "+str2+"  not exists in the new string.");	
            System.out.printf("\nStrings are not rotations of each other");
        }
    }
}


// 53. Write a Java program to match two strings where one string contains wildcard characters. 
// Sample Output:

// The given string is: abcdhgh
// The given pattern string is: abc*d?*
// The given pattern is matching.

import java.util.*;
class Main
{
    public static String pickSubstring(String samp_str ,String pat_str)
	{
        int ln1  = samp_str.length();
        int ln2  = pat_str.length();
        if(ln1 < ln2)
		{ 
            System.out.println("No such window can exist");
            return "";
        }
        int gvn_strg [] = new int[256];
        int pat_stgr [] = new int[256];
        for(int i=0;i<ln2;i++)
            pat_stgr[pat_str.charAt(i)]++;
        int ctr = 0,start = 0,start_index = -1,min_length = Integer.MAX_VALUE;
        for(int j=0;j<ln1;j++)
		{
            gvn_strg[samp_str.charAt(j)]++;
            if(pat_stgr[samp_str.charAt(j)] != 0 && gvn_strg[samp_str.charAt(j)] <= pat_stgr[samp_str.charAt(j)])
                ctr++;
            if(ctr == ln2)
			{
                while(gvn_strg[samp_str.charAt(start)] > pat_stgr[samp_str.charAt(start)] || pat_stgr[samp_str.charAt(start)] == 0)
				{
                    if(gvn_strg[samp_str.charAt(start)] > pat_stgr[samp_str.charAt(start)] || pat_stgr[samp_str.charAt(start)] == 0)
                        gvn_strg[samp_str.charAt(start)]--;
                    start++;
                }
                int length_window = j - start + 1;
                if(min_length > length_window)
				{
                    min_length = length_window;
                    start_index = start;
                }
            }
        }
        if(start_index == -1)
		{
            System.out.println("No such window exists");
            return "";
        }
        return samp_str.substring(start_index,start_index + min_length);
    }
    public static void main(String args[])
	{
        String str = "welcome to w3resource";
        String pat = "tower";
        System.out.println("The given string is: "+str);
        System.out.println("Characters to find in the main string are: "+pat);
        
        System.out.print("The smallest window which contains the finding characters is : " + pickSubstring(str, pat));
    }
}

// 54. Write a Java program to find the smallest window in a string containing all characters of another string. 
// Sample Output:

// The given string is: welcome to w3resource
// Characters to find in the main sring are: tower
// The smallest window which contains the finding characters is : to w3re

import java.util.*;
class Main
{
    public static String pickSubstring(String samp_str ,String pat_str)
	{
        int ln1  = samp_str.length();
        int ln2  = pat_str.length();
        if(ln1 < ln2)
		{ 
            System.out.println("No such window can exist");
            return "";
        }
        int gvn_strg [] = new int[256];
        int pat_stgr [] = new int[256];
        for(int i=0;i<ln2;i++)
            pat_stgr[pat_str.charAt(i)]++;
        int ctr = 0,start = 0,start_index = -1,min_length = Integer.MAX_VALUE;
        for(int j=0;j<ln1;j++)
		{
            gvn_strg[samp_str.charAt(j)]++;
            if(pat_stgr[samp_str.charAt(j)] != 0 && gvn_strg[samp_str.charAt(j)] <= pat_stgr[samp_str.charAt(j)])
                ctr++;
            if(ctr == ln2)
			{
                while(gvn_strg[samp_str.charAt(start)] > pat_stgr[samp_str.charAt(start)] || pat_stgr[samp_str.charAt(start)] == 0)
				{
                    if(gvn_strg[samp_str.charAt(start)] > pat_stgr[samp_str.charAt(start)] || pat_stgr[samp_str.charAt(start)] == 0)
                        gvn_strg[samp_str.charAt(start)]--;
                    start++;
                }
                int length_window = j - start + 1;
                if(min_length > length_window)
				{
                    min_length = length_window;
                    start_index = start;
                }
            }
        }
        if(start_index == -1)
		{
            System.out.println("No such window exists");
            return "";
        }
        return samp_str.substring(start_index,start_index + min_length);
    }
    public static void main(String args[])
	{
        String str = "welcome to w3resource";
        String pat = "tower";
        System.out.println("The given string is: "+str);
        System.out.println("Characters to find in the main string are: "+pat);
        
        System.out.print("The smallest window which contains the finding characters is : " + pickSubstring(str, pat));
    }
}


// 55. Write a Java program to remove all adjacent duplicates recursively from a given string. 
// Sample Output:

// The given string is: aabaarbarccrabmq
// The new string after removing all adjacent duplicates is:
// brmq

import java.util.*;
import java.lang.*;
import java.io.*;
class Main
 {
     public static void check(String str)
     {
         if(str.length()<=1)
         {
             System.out.println(str);
             return;
         }
         String n=new String();
         int count=0;
         for(int i=0;i<str.length();i++)
         {
             while(i<str.length()-1 && str.charAt(i)==str.charAt(i+1))
             {
                 if(i<str.length()-2 &&str.charAt(i)!=str.charAt(i+2))
                 i+=2;
                 else
                 i++;
                 count++;
             }
             if(i!=str.length()-1)
             n=n+str.charAt(i);
             else
             {if(i==str.length()-1 && str.charAt(i)!=str.charAt(i-1))
                 n=n+str.charAt(i);
             }
         }
         if(count>0)
         check(n);
         else
         System.out.println(n);
     }

public static void main (String[] args)
  {
    String ab="aabaarbarccrabmq";
    System.out.println("The given string is: "+ab);
    System.out.println("The new string after removing all adjacent duplicates is:");

    check(ab);
    }
}


// 56. Write a Java program to append two given strings such that, if the concatenation creates a double characters then omit one of the characters. 
// Sample Output:

// The given strings are: food  and  door
// The string after concatination are: foodoor

import java.util.*;
public class Main 
{
public String conCat(String st1, String st2) 
{
        if (st1.length() != 0 && st2.length() != 0
                && st1.charAt(st1.length() - 1) == st2.charAt(0))
            return st1 + st2.substring(1);
        return st1 + st2;
}

    public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "food";
      String str2 = "door";
      System.out.println("The given strings are: "+str1+"  and  "+str2);
      System.out.println("The string after concatination are: "+m.conCat(str1,str2));
    }
}


// 57. Write a Java program to create a new string from a given string swapping the last two characters of the given string. The length of the given string must be two or more. 
// Sample Output:

// The given strings is: string
// The string after swap last two characters are: strign

import java.util.*;
public class Main
{
public String lastTwo(String str)
{
if (str.length() < 2) return str;
return str.substring(0, str.length()-2)+ str.charAt(str.length()-1) + str.charAt(str.length()-2);
}
    public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "string";
      System.out.println("The given strings is: "+str1);
      System.out.println("The string after swap last two characters are: "+m.lastTwo(str1));
    }
}	


// 58. Write a Java program to read a string and return true if it ends with a specified string of length 2. 
// Sample Output:

// The given strings is: string
// The string containing ng at last: true


// The given strings is: strign
// The string containing ng at last: false

import java.util.*;
public class Main
{
public boolean endsNg(String str) 
{
  int len = str.length();
  String ng = "ng";
  if (len < 2)
    return false;
  else if (ng.equals(str.substring(len-2,len)))
    return true;
  else
    return false;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "string";
      System.out.println("The given strings is: "+str1);
      System.out.println("The string containing ng at last: "+m.endsNg(str1));
    }
}


// 59. Write a Java program to read a string,if the string begins with "red" or "black" return that color string, otherwise return the empty string. 
// Sample Output:

// The given strings is: blacksea
// The string begins with the color: black

import java.util.*;
public class Main
{
public String pickColor(String str) 
{
  if (str.startsWith("red"))
    return "red";
  if (str.startsWith("black"))
    return "black";
  else
    return "";
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "blacksea";
      System.out.println("The given strings is: "+str1);
      System.out.println("The string begins with the color: "+m.pickColor(str1));
	  }
}


// 60. Write a Java program to read two strings append them together and return the result. If the strings are different lengths, remove characters from the beginning of longer string and make them equal length. 
// Sample Output:

// The given strings is: Welcome and home
// The new string is: comehome

import java.util.*;
public class Main
{
public String minCat(String st1, String st2) 
{
  if (st1.length() == st2.length())
    return st1+st2;
  if (st1.length() > st2.length())
  {
    int diff = st1.length() - st2.length();
    return st1.substring(diff, st1.length()) + st2;
  } else 
  {
    int diff = st2.length() - st1.length();
    return st1 + st2.substring(diff, st2.length());
  }
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "Welcome";
	  String str2 =  "home";
	  
      System.out.println("The given strings is: "+str1+" and "+str2);
      System.out.println("The new string is: "+m.minCat(str1,str2));
	  }
}


// 61. Write a Java program to create a new string taking specified number of characters from first and last position of a given string. 
// Sample Output:

// The given strings is: Welcome
// The given numbers is: 3
// The new string is: Welome

import java.util.*;
public class Main
{
public String nTwice(String str, int n) 
{
  return str.substring(0,n) + str.substring(str.length()- n, str.length());
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "Welcome";
	  int n1 =  3;
	  
      System.out.println("The given strings is: "+str1);
	  System.out.println("The given numbers is: "+n1);
      System.out.println("The new string is: "+m.nTwice(str1,n1));
	  }
}


// 62. Write a Java program to read a string and return true if "good" appears starting at index 0 or 1 in the given string. 
// Sample Output:

// The given strings is: goodboy
// The 'good' appear in the string is: true

import java.util.*;
public class Main
{
public boolean hasGood(String str) 
{
  if(str.length() < 4)
    return false;
  else if ((str.substring(0,4)).equals("good"))
    return true;
  else if (str.length() > 4)
  {
    if ((str.substring(1,5)).equals("good"))
      return true;
  }
    return false;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "goodboy";
	  
      System.out.println("The given strings is: "+str1);
      System.out.println("The 'good' appear in the string is: "+m.hasGood(str1));
	  }
}


// 63. Write a Java program to check whether the first two characters present at the end of a given string. 
// Sample Output:

// The given strings is: educated
// The first two characters appear in the last is: true

import java.util.*;
public class Main
{
public boolean firstInLast(String str) 
{
  if (str.length() < 2)
    return false;
  else if (str.substring(0,2).equals(str.substring(str.length()-2, str.length())))
    return true;
  else
    return false;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "educated";
	  
      System.out.println("The given strings is: "+str1);
      System.out.println("The first two characters appear in the last is: "+m.firstInLast(str1));
	  }
}


// 64. Write a Java program to read a string and if a substring of length two appears at both its beginning and end, return a string without the substring at the beginning otherwise, return the original string unchanged. 
// Sample Output:

// The given strings is: educated
// The new string is: ucated

import java.util.*;
public class Main
{
public String withoutMacth(String str) 
{
  int len = str.length();
  if (len == 2)
    return "";
  if (len < 2)
    return str;
  else 
  {
    if (str.substring(0,2).equals(str.substring(len-2, len)))
      return str.substring(2,len);
      else return str;
  }
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "educated";
	  
      System.out.println("The given strings is: "+str1);
      System.out.println("The new string is: "+m.withoutMacth(str1));
	  }
}


// 65. Write a Java program to read a given string and if the first or last characters are same return the string without those characters otherwise return the string unchanged. 
// Sample Output:

// The given strings is: testcricket
// The new string is: estcricke

import java.util.*;
public class Main
{
public String excludeT(String stng)
{
  if (stng.length() == 0)
    return stng;
  if (stng.length() == 1)
  {
    if (stng.charAt(0) == 't')
      return "";
    else
      return stng;
  }
  if (stng.charAt(0) == 't')
    stng = stng.substring(1,stng.length());
  if (stng.charAt(stng.length()-1) == 't')
    stng = stng.substring(0,stng.length()-1);
  return stng;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "testcricket";
      System.out.println("The given strings is: "+str1);
      System.out.println("The new string is: "+m.excludeT(str1));
	  }
}


// 66. Write a Java program to read a string and return the string without the first two characters. Keep the first character if it is 'g' and keep the second character if it is 'h'. 
// Sample Output:

// The given strings is: goat
// The new string is: gat

// he given strings is: photo
// The new string is: hoto

// The given strings is: ghost
// The new string is: ghost

import java.util.*;
public class Main
{
public String exceptFirstTwo(String stng) 
{   
  int len = stng.length();
  String temp = "";
  for (int i = 0; i < len; i++) 
  {
    if (i == 0 && stng.charAt(i) == 'g')
      temp += 'g';
    else if (i == 1 && stng.charAt(i) == 'h')
      temp += 'h';
    else if (i > 1)
      temp += stng.charAt(i);
  }
    return temp;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "ghost";
      System.out.println("The given strings is: "+str1);
      System.out.println("The new string is: "+m.exceptFirstTwo(str1));
	  }
}


// 67. Write a Java program to read a string and if one or both of the first two characters is equal to specified character return without those characters otherwise return the string unchanged. 
// Sample Output:

// The given strings is: oocyte
// The new string is: cyte

// The given strings is: boat
// The new string is: bat

// The given strings is: own
// The new string is: wn

import java.util.*;
public class Main
{
public String exceptTwoO(String stng) 
{
  String temp = "";
  for (int i = 0; i < stng.length(); i++) 
  {
    if (i == 0 && stng.charAt(i) != 'x')
      temp += stng.charAt(i);
    else if (i == 1 && stng.charAt(i) != 'x')
      temp += stng.charAt(i);
    else if (i > 1)
      temp += stng.charAt(i);
  }
  return temp;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "xxcyte";
      System.out.println("The given strings is: "+str1);
      System.out.println("The new string is: "+m.exceptTwoO(str1));
	  }
}


// 68. Write a Java program to read a string and returns after removing a specified character and its immediate left and right characters. 
// Sample Output:

// The given strings is: test#string
// The new string is: testring

// The given strings is: test##string
// The new string is: testring

// The given strings is: test#the#string
// The new string is: teshtring

import java.util.*;
public class Main
{
public String excludeHash(String stng) 
{
  int len = stng.length();
  String resultString = "";
  for (int i = 0; i < len; i++) 
  {
    if (i == 0 && stng.charAt(i) != '#')
      resultString += stng.charAt(i);
    if (i > 0 && stng.charAt(i) != '#' && stng.charAt(i-1) != '#')
      resultString += stng.charAt(i);
    if (i > 0 && stng.charAt(i) == '#' && stng.charAt(i-1) != '#')
      resultString = resultString.substring(0,resultString.length()-1);
  }
  return resultString;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "test#string";
      System.out.println("The given strings is: "+str1);
      System.out.println("The new string is: "+m.excludeHash(str1));
	  }
}


// 69. Write a Java program to return the substring that is between the first and last appearance of the substring 'toast' in the given string,or return the empty string if substirng 'toast' does not exists. 
// Sample Output:

// The given strings is: sweettoastbuttertoast
// The new string is: butter


import java.util.*;
public class Main
{
public String pickMiddleOfBread(String stng) 
{
  int len = stng.length();
  String tmpString = "";
  String resultString = "";
  int st = 0;
  int en = 0;
  boolean found = false;
  if (len <= 10)
    return "";
  for (int i = 0; i < len - 4; i++) 
  {
    tmpString = stng.substring(i, i+5);
    if (tmpString.equals("toast") && found == true)
      en = i; 
    if (tmpString.equals("toast") && found == false) 
	{
      st = i+5;
      found = true;
    }
  }
  resultString = stng.substring(st,en);
  return resultString;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "sweettoastbuttertoast";
      System.out.println("The given strings is: "+str1);
      System.out.println("The new string is: "+m.pickMiddleOfBread(str1));
	  }
}

// 70. Write a Java program to check whether a string is pq-balanced or not.A String is pq-balanced if for all the p's in the string atleast one 'q' must exists right of the p's.But 'q' before the 'p' makes the pq-balanced false. 
// Sample Output:

// The given strings is: gfpmpnppqab
// The string is pq-balanced? true

// The given strings is: gfpmpnpqpab
// The string is pq-balanced? false

import java.util.*;
public class Main
{
public boolean pqBalanceString(String stng) 
{
  Boolean p = false;
  Boolean q = false;
  int len = stng.length();
  for (int i = 0; i < len; i++) 
  {
    if (stng.charAt(i) == 'p' && q == true)
	{
      p = true;
      q = false;
    } 
	else if (stng.charAt(i) == 'p') 
	{
      p = true;
    }
    if (stng.charAt(i) == 'q' && p == true)
      q = true;
  }
  if (p == false)
    q = true;
  return q;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "gfpmpnppqab";
      System.out.println("The given strings is: "+str1);
      System.out.println("The string is pq-balanced? "+m.pqBalanceString(str1));
	  }
}


// 71. Write a Java program to check two given strings whether any one of them appear at the end of the other string (ignore case sensitivity). 
// Sample Output:

// The given strings are: xyz  and pqrxyz
// Is one string appears at the end of other? true

// The given strings are: pqrxyz  and xyz
// Is one string appears at the end of other? true

import java.util.*;
public class Main
{
public boolean anyStringAtEnd(String stng1, String stng2) 
{
  stng1 = stng1.toLowerCase();
  int aLen = stng1.length();
  stng2 = stng2.toLowerCase();
  int bLen = stng2.length();
  if (aLen < bLen) 
  {
    String temp = stng2.substring(bLen - aLen, bLen);
    if (temp.compareTo(stng1) == 0)
      return true;
    else
      return false;
  } else 
  {
    String temp = stng1.substring(aLen - bLen, aLen);
    if (temp.compareTo(stng2) == 0)
      return true;
    else
      return false;
  }
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "pqrxyz";
	  String str2= "xyz";
      System.out.println("The given strings are: "+str1+"  and "+str2);
      System.out.println("Is one string appears at the end of other? "+m.anyStringAtEnd(str1,str2));
	  }
}


// 72. Write a Java program to return true if a given string contain the string 'pop', but the middle 'o' also may other character. 
// Sample Output:

// The given string is: dikchapop
// Is p?p appear in the given string? true

// The given string is: dikp$pdik
// Is p?p appear in the given string? true

import java.util.*;
public class Main
{
public boolean popInTheString(String stng) 
{
  int len = stng.length();
  for (int i = 0; i < len - 2; i++) 
  {
    if (stng.charAt(i) == 'p' && stng.charAt(i+2) == 'p')
    return true;
  }
  return false;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "dikchapop";
      System.out.println("The given string is: "+str1);
      System.out.println("Is p?p appear in the given string? "+m.popInTheString(str1));
	  }
}


// 73. Write a Java program to check whether a substring appears before a period(.) within a given string. 
// Sample Output:

// The given strings is: testabc.test
// Is 'abc' appear before period? true

// The given string is: test.abctest
// Is 'abc' appear before period? false

import java.util.*;
public class Main
{
public Boolean abcBeforePeriod(String stng) 
{
  int len = stng.length();
  String abc = "abc";
  Boolean match = false;
  if (len < 3)
    return false;
  for (int i = 0; i < len - 2; i ++) 
  {
    String temp = stng.substring(i, i+3);
    if (temp.compareTo(abc) == 0 && i == 0)
      match = true;
    else if(temp.compareTo(abc) == 0 && stng.charAt(i-1) != 46)
      match = true;
  } 
  return match;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "testabc.test";
      System.out.println("The given string is: "+str1);
      System.out.println("Is 'abc' appear before period? "+m.abcBeforePeriod(str1));
	  }
}


// 74. Write a Java program to check whether a prefix string creates using the first specific characters in a given string, appears somewhere else in the string. 
// Sample Output:

// The given strings is: MrsJemsmrsam
// The prefix string length is: 3
// Is 'Mrs' appear else where in the string? false

// The given string is: MrsJemsMrsam
// The prefix string length is: 3
// Is 'Mrs' appear else where in the string? true

import java.util.*;
public class Main
{
public boolean nChrStringSomewhere (String stng, int n_chr) 
{
  int len = stng.length();
  String pre_str = stng.substring(0,n_chr);
  for (int i = n_chr; i < len; i++) 
  {
    if(n_chr+i <= len) 
	{
      if (pre_str.equals(stng.substring(i,n_chr+i)))
        return true;
    }
  }
  return false;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "MrsJemsMrsam";
      int n=3;
	  String prechr=str1.substring(0,n);
      System.out.println("The given string is: "+str1);
      System.out.println("The prefix string length is: "+n);
      System.out.println("Is '"+ prechr+"' appear else where in the string? "+m.nChrStringSomewhere(str1,n));
	  }
}


// 75. Write a Java program to check whether a given substring presents in the middle of another given string. Here middle means difference between the number of characters to the left and right of the given substring not more than 1. 
// Sample Output:

// The given string is: xxxabcxxxxx
// Is abc appear in middle? false

// The given string is: xxabcxxx
// Is abc appear in middle? true

import java.util.*;
public class Main
{
public boolean abcInMiddle(String stng) 
{
  String abc = "abc";
  int l = stng.length();
  int mid_pos = l / 2;
  if (l < 3)
    return false;
  if (l % 2 != 0) 
  {
    if (abc.equals(stng.substring(mid_pos-1,mid_pos+2))) 
	{
      return true;
    } else 
	{
        return false;
      }
  } 
  else if (abc.equals(stng.substring(mid_pos-1,mid_pos+2)) || abc.equals(stng.substring(mid_pos-2,mid_pos+1))) 
	  {
          return true;
  } 
  else
      return false; 
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "xxabcxxx";
      System.out.println("The given string is: "+str1);
      System.out.println("Is abc appear in middle? "+m.abcInMiddle(str1));
	  }
}


// 76. Write a Java program to count how many times the substring 'life' present at anywhere in a given string. Counting can also happen for the substring 'li?e', any character instead of 'f'. 
// Sample Output:

// The given string is: liveonwildlife
// The substring life or li?e appear number of times: 2

import java.util.*;
public class Main
{
public int substringCounting(String stng) 
{
  int l = stng.length();
  int ctr = 0;
  String firsttwo = "li";
  String lastone = "e";
  if (l < 4)
    return 0;
  for (int i = 0; i < l - 3; i++) 
  {
    if (firsttwo.compareTo(stng.substring(i,i+2)) == 0 && lastone.compareTo(stng.substring(i+3, i+4)) == 0)
      ctr++;
  }
  return ctr;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "liveonwildlife";
      System.out.println("The given string is: "+str1);
      System.out.println("The substring life or li?e appear number of times: "+m.substringCounting(str1));
	  }
}


// 77. Write a Java program to add a string with specific number of times separated by a substring. 
// Sample Output:

// The given strings are: try  and  best
// Number to times to be repeat: 3
// The new string is: trybesttrybesttry

import java.util.*;
public class Main
{
public String addBySeparator(String main_str, String sep_str, int ctr) 
{
  String new_word = "";
  for (int i = 0; i < ctr; i++) 
  {
    if (i < ctr-1)
      new_word += main_str + sep_str;
    else
      new_word += main_str;
  }
  return new_word;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "try";
      String str2 =  "best";
	  int ctr=3;
	  
      System.out.println("The given strings are: "+str1+"  and  "+str2);
	  System.out.println("Number to times to be repeat: "+ctr);
      System.out.println("The new string is: "+m.addBySeparator(str1,str2,ctr));
	  }
}


// 78. Write a Java program to repeat a specific number of characters for specific number of times from the last part of a given string. 
// Sample Output:

// The given string is: string
// The new string after repetition: inginging

import java.util.*;
public class Main
{
public String lastNchrRepeat(String stng, int no_repeat) 
{
  int l = stng.length();
  String new_word = "";
  for (int i = 0; i < no_repeat; i++) 
  {
    new_word += stng.substring(l - no_repeat, l);
  }
  return new_word;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "string";
      int no_char=3;
      System.out.println("The given string is: "+str1);
      System.out.println("The new string after repetition: "+m.lastNchrRepeat(str1,no_char));
	  }
}


// 79. Write a Java program to create a new string from a given string after removing the 2nd character from the substring of length three starting with 'z' and ending with 'g' presents in the said string. 
// Sample Output:

// The given string is: zzgkitandkatcaketoket
// The new string is: zgkitandkatcaketoket

import java.util.*;
public class Main
{
public String kitKatPattern(String stng) 
{
  int len = stng.length();
  String newformstring = "";
  for (int i = 0; i < len; i++) 
  {
    newformstring += stng.substring(i,i+1);
    if (i > 0 && i < len-1) 
	{
      if (stng.charAt(i-1) == 'z' && stng.charAt(i+1) == 'g')
        newformstring = newformstring.substring(0,newformstring.length()-1);
    }
  }
  return newformstring;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "zzgkitandkatcaketoket";
      System.out.println("The given string is: "+str1);
      System.out.println("The new string is: "+m.kitKatPattern(str1));
	  }
}


// 80. Write a Java program to check whether the character immediately before and after a specified character is same in a given string. 
// Sample Output:

// The given string is: moon#night
// The before and after character are same: true

// The given string is: bat##ball
// The before and after character are same: false

// The given string is: #moon#night
// The before and after character are same: true

import java.util.*;
public class Main
{
public boolean leftAndRightSame(String stng) 
{
  int l = stng.length();
  boolean found = true;
  for (int i = 0; i < l; i++) 
  {
    String tmpString = stng.substring(i,i+1);
    if (tmpString.equals("#") && i > 0 && i < l-1) 
	{
      if (stng.charAt(i-1) == stng.charAt(i+1))
        found = true;
      else
        found = false;
    }
  }
  return found;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "moon#night";
      System.out.println("The given string is: "+str1);
      System.out.println("The before and after character are same: "+m.leftAndRightSame(str1));
	  }
}


// 81. Write a Java program to check whether two strings of length 3 and 4 appear in same number of times in a given string. 
// Sample Output:

// The given string is: redcapmanwithbluecar
// The appearance of red and blue are same: true

import java.util.*;
public class Main
{
public boolean checkSameAppearance(String stng) 
{
  int l = stng.length();
  int red = 0;
  int blue = 0;
  for (int i = 0; i < l - 2; i++) 
  {
    String tmp = stng.substring(i, i+3);
    if (tmp.compareTo("red") == 0)
      red++; 
     }
  for (int i = 0; i < l - 3; i++) 
  {
    String tmp = stng.substring(i, i+4);
    if (tmp.compareTo("blue") == 0)
      blue++; 
  }
  
  if (red == blue)
    return true;
  else
    return false;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "redcapmanwithbluecar";
      System.out.println("The given string is: "+str1);
      System.out.println("The appearance of red and blue are same: "+m.checkSameAppearance(str1));
	  }
}



// 82. Write a Java program to create a new string repeating every character twice of a given string. 
// Sample Output:

// The given string is: welcome
// The new string is: wweellccoommee

import java.util.*;
public class Main
{
public String repeatAllTwice(String stng) 
{
  int l = stng.length();
  String newstring = "";
  for (int i = 0; i < l; i++) 
  {
    newstring += stng.substring(i,i+1) + stng.substring(i, i+1);
  }
  return newstring;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "welcome";
      System.out.println("The given string is: "+str1);
      System.out.println("The new string is: "+m.repeatAllTwice(str1));
	  }
}


// 83. Write a Java program to make a new string from two given string in such a way that, each character of two string will come respectively. 
// Sample Output:

// The given strings  are: welcome  and  w3resource
// The new string is: wwe3lrceosmoeurce

import java.util.*;
public class Main
{
public String stringMixing(String stng1, String stng2) 
{
  int len1 = stng1.length();
  int len2 = stng2.length();
  int max_len = Math.max(len1, len2);
  String newstring = "";
  for (int i = 0; i < max_len; i++) 
  {
    if (i <= len1-1)
      newstring += stng1.substring(i,i+1);
    if (i <= len2-1)
      newstring += stng2.substring(i,i+1);
  }
  return newstring;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "welcome";
      String str2 =  "w3resource";	  
      System.out.println("The given strings  are: "+str1+"  and  "+str2);
      System.out.println("The new string is: "+m.stringMixing(str1,str2));
	  }
}


// 84. Write a Java program to make a new string made of p number of characters from the first of a given string and followed by p-1 number characters till the p is greater than zero. 
// Sample Output:

// The given string is: welcome
// Number of repetition characters and repetition: 4
// The new string is: welcwelwew

import java.util.*;
public class Main
{
public String beginningRepetition(String stng, int n) 
{
  int l = stng.length();
  String newstring = "";
  for (int i = n; n > 0; n--)
  {
    newstring += stng.substring(0,n);
  }
  return newstring;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "welcome";
	  int rep_no=4;
      System.out.println("The given string is: "+str1);
	  System.out.println("Number of repetition characters and repetition: "+rep_no);
      System.out.println("The new string is: "+m.beginningRepetition(str1,rep_no));
	  }
}


// 85. Write a Java program to make a new string with each character of just before and after of a non-empty substring whichever it appears in a non-empty given string. 
// Sample Output:

// The given string are: weablcoabmeab  and ab
// The new string is: elome

import java.util.*;
public class Main
{
public String mAndTstring(String m_stng, String t_stng) 
{
  int m_st_len = m_stng.length();
  int t_st_len = t_stng.length();
  String fin = "";
  for (int i = 0; i < m_st_len-t_st_len+1; i++) 
  {
    String tmp = m_stng.substring(i,i+t_st_len);
    if (i > 0 && tmp.equals(t_stng))
      fin += m_stng.substring(i-1,i);
    if (i < m_st_len-t_st_len && tmp.equals(t_stng))
      fin += m_stng.substring(i+t_st_len,i+t_st_len+1);
  }
  return fin;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "weablcoabmeab";
      String str2 =  "ab";	  
      System.out.println("The given string are: "+str1+"  and "+str2);
      System.out.println("The new string is: "+m.mAndTstring(str1,str2));
	  }
}


// 86. Write a Java program to count the number of triples (characters appearing three times in a row) in a given string. 
// Sample Output:

// The given string is: welllcommmmeee
// The number of triples in the string is: 4

import java.util.*;
public class Main
{
public int noOfTriples(String stng) 
{
  int l = stng.length();
  int ctr = 0;
  for (int i = 0; i < l-2; i++)
  {
    char tmp = stng.charAt(i);
    if (tmp == stng.charAt(i+1) && tmp == stng.charAt(i+2))
      ctr++;
  }
  return ctr;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "welllcommmmeee";
      System.out.println("The given string is: "+str1);
      System.out.println("The number of triples in the string is: "+m.noOfTriples(str1));
	  }
}


// 87. Write a Java program to check whether a specified character is happy or not. A character is happy when the same character appears to its left or right in a string. 
// Sample Output:

// The given string is: azzlea
// Is z happy in the string: true

// The given string is: azmzlea
// Is z happy in the string: falses

import java.util.*;
public class Main
{
public boolean aCharacterIsHappy(String stng) 
{
  int l = stng.length();
  boolean char_happy = true;
  for (int i = 0; i < l; i++) 
  {
    if (stng.charAt(i) == 'z') 
	{
      if (i > 0 && stng.charAt(i-1) == 'z')
        char_happy = true;
      else if (i < l-1 && stng.charAt(i+1) == 'z')
        char_happy = true;
      else
        char_happy = false;
    }
  }
  return char_happy;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "azzlea";
      System.out.println("The given string is: "+str1);
      System.out.println("Is Z happy in the string: "+m.aCharacterIsHappy(str1));
	  }
}


// 88. Write a Java program to return a string where every appearance of the lowercase word 'is' has been replaced with 'is not'. 
// Sample Output:

// The given string is: it is a string
// The new string is: it is not a string

import java.util.*;
public class Main
{
public String wordReplaceBy(String stng) 
{
  String newstring = "";
  int l = stng.length();
  for(int i = 0; i < l; i++)
  {
    if(i-1 >= 0 && Character.isLetter(stng.charAt(i-1))|| i+2 < l && Character.isLetter(stng.charAt(i+2))) 
	{
      newstring += stng.charAt(i);
    }
    else if(i+1 < l && stng.substring(i, i+2).equals("is")) 
	{
      newstring += "is not";
      i++;
    }
    else newstring += stng.charAt(i);
  }
  return newstring;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "it is a string";
      System.out.println("The given string is: "+str1);
      System.out.println("The new string is: "+m.wordReplaceBy(str1));
	  }
}


// 89. Write a Java program to calculate the sum of the numbers appear in a given string. 
// Sample Output:

// The given string is: it 15 is25 a 20string
// The sum of numbers in the string is: 60

import java.util.*;
public class Main
{
public int sumOfTheNumbers(String stng) 
{
  int l = stng.length();
  int sum = 0;
  String temp = "";
  for (int i = 0; i < l; i++) 
  {
    if (Character.isDigit(stng.charAt(i))) 
	{
      if (i < l-1 && Character.isDigit(stng.charAt(i+1))) 
	  {
        temp += stng.charAt(i);
      }
      else 
	  {
        temp += stng.charAt(i);
        sum += Integer.parseInt(temp);
        temp = "";
      }
    }
  }
  return sum;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "it 15 is25 a 20string";
      System.out.println("The given string is: "+str1);
      System.out.println("The sum of numbers in the string is: "+m.sumOfTheNumbers(str1));
	  }
}


// 90. Write a Java program to check the number of appearances of the two substrings appear anywhere in the string. 
// Sample Output:

// The given string is: Thisisthethesis
// Are the appearance of 'the' and 'is' equal? false

import java.util.*;
public class Main
{
public boolean isAndTheEquality(String stng) 
{
  int l = stng.length();
  int st_the = 0;
  int st_is = 0;
  for (int i = 0; i < l; i++) 
  {
    if (i < l - 2) 
	{
      String tmp = stng.substring(i,i+3);
      if (tmp.equals("the"))
        st_the++;
    }
    if (i < l - 1) 
	{
      String tmp2 = stng.substring(i,i+2);
      if (tmp2.equals("is"))
        st_is++;
    }
  }
  if (st_the == st_is)
    return true;
  else
    return false;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "Thisisthethesis";
      System.out.println("The given string is: "+str1);
      System.out.println("Are the appearance of 'the' and 'is' equal? "+m.isAndTheEquality(str1));
	  }
}


// 91. Write a Java program to count the number of words ending in 'm' or 'n' (not case sensitive) in a given text. 
// Sample Output:

// The given string is: mam is in the room
// The number of words ends eith m or n is: 3

import java.util.*;
public class Main
{
public int endWithmOrn(String stng) 
{
  int l = stng.length();
  int ctr = 0;
  stng = stng.toLowerCase();
  for (int i = 0; i < l; i++) 
  {
    if (stng.charAt(i) == 'm' || stng.charAt(i) == 'n') 
	{
      if (i < l-1 && !Character.isLetter(stng.charAt(i+1)))
        ctr++;
      else if (i == l-1)
        ctr++;
    }
  }
  return ctr;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "mam is in the room";
      System.out.println("The given string is: "+str1);
      System.out.println("The number of words ends eith m or n is: "+m.endWithmOrn(str1));
	  }
}


// 92. Write a Java program to return a substring after removing the all instances of remove string as given from the given main string. 
// Sample Output:

// The main string is: This is the test string
// The removable string is: st
// The new string is: This is the te ring

import java.util.*;
public class Main
{
public String removeString(String m_string, String r_string) 
{
  int m_st_len = m_string.length();
  int r_st_len = r_string.length();
  String m_lower  = m_string.toLowerCase();
  String r_lower  = r_string.toLowerCase();
  String f_string = "";
  for (int i = 0; i < m_st_len; i++) 
  {
    if (i <= m_st_len - r_st_len) 
	{
      String tmp = m_lower.substring(i,i+r_st_len);
      if (!tmp.equals(r_lower))
        f_string += m_string.substring(i,i+1);
      else 
	  {
        i += r_st_len-1;
      }
    }
    else 
	{
      String tmp2 = m_lower.substring(i,i+1);
      if (!tmp2.equals(r_lower))
        f_string += m_string.substring(i,i+1);
    }
  }
  return f_string;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "This is the test string";
	  String str2= "st";
      System.out.println("The main string is: "+str1);
      System.out.println("The removable string is: "+str2);
      System.out.println("The new string is: "+m.removeString(str1,str2));
	  }
}


// 93. Write a Java program to find the longest substring appears at both ends of a given string. 
// Sample Output:

// The given string is: playersplay
// The longest substring in the string is: play

import java.util.*;
public class Main
{
public String appearInBothEnds(String stng) 
{
  int l = stng.length();
  String f_str = "";
  String tmp = "";
  for (int i = 0; i < l; i++) 
  {
    tmp += stng.charAt(i);
    int t_len = tmp.length();
    if (i < l / 2 && tmp.equals(stng.substring(l-t_len,l)))
      f_str = tmp;
  }
  return f_str;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "playersplay";
      System.out.println("The given string is: "+str1);
      System.out.println("The longest substring in the string is: "+m.appearInBothEnds(str1));
	  }
}


// 94. Write a Java program to find the longest mirror image string at the both ends of a given string. 
// Sample Output:

// The given string is: rotavator
// The longest mirror image string in the string is: rotavator

import java.util.*;
public class Main
{
public String endsWithMirrorImage(String stng) 
{
  int l  = stng.length();
  String f_str = "";
  String t_str1 = "";
  String t_str2  = "";
  for (int i = 0; i < l; i++) 
  {
    t_str1 += stng.substring(i,i+1);
    t_str2 = "";
    for (int j = t_str1.length()-1; j >= 0; j--) 
	{
      t_str2 += t_str1.substring(j,j+1);
      if (t_str2.equals(stng.substring(l-i-1,l)))
        f_str = t_str1;
    }
  }
  return f_str;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "rotavator";
      System.out.println("The given string is: "+str1);
      System.out.println("The longest mirror image string in the string is: "+m.endsWithMirrorImage(str1));
	  }
}


// 95. Write a Java program to return the sum of the digits present in the given string. If there is no digits the sum return is 0. 
// Sample Output:

// The given string is: ab5c2d4ef12s
// The sum of the digits in the string is: 14

import java.util.*;
public class Main
{
public int sumOfDigits(String stng) 
{
  int l = stng.length();
  int sum = 0;
  for (int i = 0; i < l; i++) 
  {
    if (Character.isDigit(stng.charAt(i))) 
	{
      String tmp = stng.substring(i,i+1);
      sum += Integer.parseInt(tmp);
    }
  }
  return sum;
}


public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "ab5c2d4ef12s";
      System.out.println("The given string is: "+str1);
      System.out.println("The sum of the digits in the string is: "+m.sumOfDigits(str1));
	  }
}


// 96. Write a Java program to create a new string after removing a specified character from a given string except the first and last position. 
// Sample Output:

// The given string is: zebrazone
// The new string is: zebraone

import java.util.*;
public class Main
{
public String removeAllZ(String stng) 
{
  String fin_str = "";
  int l = stng.length();
  for (int i = 0; i < l; i++)
  {
    char temp = stng.charAt(i);
    if (!(i > 0 && i < l - 1 && temp == 'z'))
      fin_str = fin_str + temp;
  }
    return fin_str;     
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "zebrazone";
      System.out.println("The given string is: "+str1);
      System.out.println("The new string is: "+m.removeAllZ(str1));
	  }
}


// 97. Write a Java program to return a string with the characters of the index position 0,1,2, 5,6,7, ... from a given string. 
// Sample Output:

// The given string is: w3resource.com
// The new string is: w3rour.co

import java.util.*;
public class Main
{
public String pairsToReturn(String stng) 
{
  String fin_str = "";
  for (int i=0; i<stng.length(); i += 5) 
  {
    int end = i + 3;
    if (end > stng.length()) 
	{
      end = stng.length();
    }
    fin_str = fin_str + stng.substring(i, end);
  }
  return fin_str;
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "w3resource.com";
      System.out.println("The given string is: "+str1);
      System.out.println("The new string is: "+m.pairsToReturn(str1));
	  }
}


// 98. Write a Java program to check whether the first instance of a given character is immediately followed by the same character in a given string. 
// Sample Output:

// The given string is: fizzez
// Is 'z' appear twice respectively? true

import java.util.*;
public class Main
{
boolean appearTwice(String stng) 
{
  int i = stng.indexOf("z");
  if (i == -1) return false; 
  if (i+1 >= stng.length()) return false; 
  return stng.substring(i+1, i+2).equals("z");
}

public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "fizzez";
      System.out.println("The given string is: "+str1);
      System.out.println("Is 'z' appear twice respectively? "+m.appearTwice(str1));
	  }
}


// 99. Write a Java program to return a new string using every character of even positions from a given string. 
// Sample Output:

// The given string is: w3resource.com
// The new string is: wrsuc.o

import java.util.*;
public class Main
{
public String makeWithEvenCharacters(String stng) 
{
  int len = stng.length();
  String fin_str = "";
  for (int i = 0; i < len; i = i + 2) 
  {
    fin_str += stng.charAt(i);
  }
  return fin_str;
}
public static void main (String[] args)
    {
      Main m= new Main();
      String str1 =  "w3resource.com";
      System.out.println("The given string is: "+str1);
      System.out.println("The new string is: "+m.makeWithEvenCharacters(str1));
	  }
}


// 100. Write a Java program to check if a given string contains another string. Return true or false. 
// Sample Output:

// Original string:
// Java is the foundation for virtually every type of networked application and is the global standard for developing and  delivering embedded and mobile applications, games, Web-based content,  and enterprise software. With more than 9 million developers worldwide, Java enables you to efficiently develop, deploy and use exciting applications and services.

// Is 'million' present in the said text?
// true

// Is 'millions' present in the said text?
// false

public class Main {
    
    public static void main(String[] args) {
          String main_string = "Java is the foundation for virtually every type of "+
           "networked application and is the global standard for developing and "+
           " delivering embedded and mobile applications, games, Web-based content, "+
           " and enterprise software. With more than 9 million developers worldwide,"+
           " Java enables you to efficiently develop, deploy and use exciting applications and services.";
            System.out.println("Original string:");
           System.out.println(main_string);
           String sub_string1 = "million";
            String sub_string2 = "millions";
           boolean result1 = is_present(main_string, sub_string1);
            System.out.println("\nIs '"+sub_string1+"'"+ " present in the said text?");
           System.out.println(result1);
           boolean result2 = is_present(main_string, sub_string2);
            System.out.println("\nIs '"+sub_string2+"'"+ " present in the said text?");
           System.out.println(result2);                        
 }
    public static boolean is_present(String main_string, String sub_string) {
      if (main_string == null || sub_string == null || main_string.isEmpty() || sub_string.isEmpty()) {
            return false;
       }
       return main_string.indexOf(sub_string) != -1;
   }
}


// 101. Write a Java program to test if a given string contains only digits. Return true or false. 
// Sample Output:

// First string:
// 131231231231231231231231231212312312
// true

// Second string:
// 13123123123Z1231231231231231212312312
// false

public class Main {
    
    public static void main(String[] args) {
       String digit_string1 = "131231231231231231231231231212312312";
        String digit_string2 = "13123123123Z1231231231231231212312312";
        System.out.println("First string:");
       System.out.println(digit_string1);
       boolean result1 = test_only_digits(digit_string1);
        System.out.println(result1);
        System.out.println("\nSecond string:");
       System.out.println(digit_string2);
        boolean result2 = test_only_digits(digit_string2);
        System.out.println(result2);                                
 }
     public static boolean test_only_digits(String digit_string) {
       for (int i = 0; i < digit_string.length(); i++) {
           if (!Character.isDigit(digit_string.charAt(i))) {
               return false;
           }
       }
       return true;
   }
}


// 102. Write a Java program to convert a given String to int, long, float and double. 
// Sample Output:

// Convert String to int/Integer:
// "1323" as int is 1323 and as Integer is 1323

// Convert String to long/Long:
// "13625478965325" as long is 13625478965325 and as Long is 13625478965325

// Convert String to float/Float:
// "25.135F" as float is 25.135 and as Float is 25.135

// Convert String to double/Double:
// "21.25478254D" as double is 21.25478254 and as Double is 21.25478254
// false

public class Main {
   public static void main(String[] args) {
        String STR_TO_INT = "1323";
        String STR_TO_LONG = "13625478965325";
        String STR_TO_FLOAT = "25.135F";
        String STR_TO_DOUBLE = "21.25478254D";
        
       System.out.println("Convert String to int/Integer:");
       Integer toInt1 = Integer.valueOf(STR_TO_INT);
       int toInt2 = Integer.parseInt(STR_TO_INT);
       System.out.println("\"" + STR_TO_INT + "\"" + " as int is "
               + toInt1 + " and as Integer is " + toInt2);
                
       System.out.println("\nConvert String to long/Long:");
       Long toLong1 = Long.valueOf(STR_TO_LONG);
       long toLong2 = Long.parseLong(STR_TO_LONG);
       System.out.println("\"" + STR_TO_LONG + "\"" + " as long is "
               + toLong1 + " and as Long is " + toLong2);
       System.out.println("\nConvert String to float/Float:");
       Float toFloat1 = Float.valueOf(STR_TO_FLOAT);
       float toFloat2 = Float.parseFloat(STR_TO_FLOAT);
       System.out.println("\"" + STR_TO_FLOAT + "\"" + " as float is "
               + toFloat1 + " and as Float is " + toFloat2);
                
       System.out.println("\nConvert String to double/Double:");
       Double toDouble1 = Double.valueOf(STR_TO_DOUBLE);
       double toDouble2 = Double.parseDouble(STR_TO_DOUBLE);
       System.out.println("\"" + STR_TO_DOUBLE + "\"" + " as double is "
               + toDouble1 + " and as Double is " + toDouble2);
   }
}


// 103. Write a Java program to remove a specified character from a given string. 
// Sample Output:

// Original string:
// abcdefabcdeabcdaaa

// Second string:
// bcdefbcdebcd

public class Main {    
    public static void main(String[] args) {
       String str1 = "abcdefabcdeabcdaaa";
       char g_char = 'a';
        String result = remove_Character(str1, g_char);
        System.out.println("\nOriginal string:");
        System.out.println(str1);    
        System.out.println("\nSecond string:");
       System.out.println(result);                                
   }
  public static String remove_Character(String str1, char g_char) {
       if (str1 == null || str1.isEmpty()) {
          return "";
       }
       StringBuilder sb = new StringBuilder();
       char[] chArray = str1.toCharArray();
       for (int i = 0; i < chArray.length; i++) {
           if (chArray[i] != g_char) {
               sb.append(chArray[i]);
           }
       }
       return sb.toString();
   }
}


// 104. Write a Java program to sort in ascending and descending order by length of the given array of strings. 
// Sample Output:

// Original unsorted colors: [Green, White, Black, Pink, Orange, Blue, Champagne, Indigo, Ivory]

// Sorted color (descending order): [Champagne, Orange, Indigo, Green, White, Black, Ivory, Pink, Blue]

// Sorted color (ascending order): [Pink, Blue, Green, White, Black, Ivory, Orange, Indigo, Champagne]

import java.util.Arrays;
public class Main {    
   private static String[] strs = {"Green", "White", "Black", "Pink", "Orange", "Blue", "Champagne", "Indigo", "Ivory"};
    
    public enum sort_asc_dsc{
       ASC, DESC
   }
    
    public static void main(String[] args) {
       System.out.println("\nOriginal unsorted colors: " + Arrays.toString(strs));
        sort_array_by_length(strs, sort_asc_dsc.DESC);
       System.out.println("\nSorted color (descending order): " + Arrays.toString(strs));
       sort_array_by_length(strs, sort_asc_dsc.ASC);
       System.out.println("\nSorted color (ascending order): " + Arrays.toString(strs));            
   }
   public static void sort_array_by_length(String[] strs, sort_asc_dsc direction) {
       if (strs == null || direction == null || strs.length == 0) {
           return;
       }
       if (direction.equals(sort_asc_dsc.ASC)) {
           Arrays.sort(strs, (String str1, String str2)
                   -> Integer.compare(str1.length(), str2.length()));
       } else if (direction.equals(sort_asc_dsc.DESC)) {
           Arrays.sort(strs, (String str1, String str2)
                   -> (-1) * Integer.compare(str1.length(), str2.length()));
       }
   }
}


// 105. Write a Java program to count the occurrences of a given string in another given string. 
// Sample Output:

// aa' has occured 3 times in 'abcd abc aabc baa abcaa'

import java.util.Arrays;
public class Main {    
    public static void main(String[] args) {
        String main_string = "abcd abc aabc baa abcaa";
       String sub_string = "aa";
       int countV1 = count_sub_str_in_main_str(main_string, sub_string);
       System.out.println(sub_string + "' has occured " + countV1 + " times in '" + main_string + "'");            
   }
  public static int count_sub_str_in_main_str(String main_string, String sub_string) {
       if (main_string == null || sub_string == null) {
           throw new IllegalArgumentException("The given strings cannot be null");
       }
       if (main_string.isEmpty() || sub_string.isEmpty()) {
           return 0;
       }
       int position = 0;
       int ctr = 0;
       int n = sub_string.length();
       while ((position = main_string.indexOf(sub_string, position)) != -1) {
           position = position + n;
           ctr++;
       }
       return ctr;
   }
}


// 106. Write a Java program to concatenate a given string with itself of a given number of times. 
// Sample Output:

// Original string: PHP

// After repeating 7 times: PHPPHPPHPPHPPHPPHPPHP

import java.util.Arrays;
public class Main {    
    public static void main(String[] args) {
        String str1 = "PHP";
        System.out.println("Original string: "+str1);
        String resultV1 = repeat_str(str1, 7);
       System.out.println("\nAfter repeating 7 times: "+resultV1);
   }
public static String repeat_str(String str1, int n) {
       if (str1 == null || str1.isEmpty()) {
           return "";
       }
       if (n <= 0) {
           return str1;
       }
       if (Integer.MAX_VALUE / n < str1.length()) {
           throw new OutOfMemoryError("Maximum size of a String will be exceeded");
       }
       StringBuilder x = new StringBuilder(str1.length() * n);
       for (int i = 1; i <= n; i++) {
           x.append(str1);
       }
       return x.toString();
   }
}


// 107. Write a Java program to counts occurrences of a certain character in a given string. 

//MIT License: https://bit.ly/35gZLa3
import java.util.concurrent.TimeUnit;

public class Main {

    private static final String TEXT = "My high school, the Illinois Mathematics and Science Academy, "
            + "showed me that anything is possible and that you're never too young to think big. "
            + "At 15, I worked as a computer programmer at the Fermi National Accelerator Laboratory, "
            + "or Fermilab. After graduating, I attended Stanford for a degree in economics and "
            + "computer science.";
    private static final char CHAR_TO_COUNT = 'u';

    private static final String TEXT_CP = "😍 I love 💕 you Ӝ so much 💕 😍";
    private static final String CHAR_TO_COUNT_CP = "Ӝ";   // Unicode: \u04DC, Code Point: 1244
    private static final String CHAR_TO_COUNT_CPS = "💕"; // Unicode: \uD83D\uDC95, Code Point: 128149

    public static void main(String[] args) {
        System.out.println("Input text: \n" + TEXT + "\n");

        System.out.println("\n\nASCII or 16 bits Unicode characters (less than 65,535 (0xFFFF)) examples:\n");

        System.out.println("replace() based solution:");
        long startTimeV1 = System.nanoTime();

        int countV1 = Strings
                .countOccurrencesOfACertainCharacterV1(TEXT, CHAR_TO_COUNT);

        displayExecutionTime(System.nanoTime() - startTimeV1);
        System.out.println("Character '" + CHAR_TO_COUNT + "' occured " + countV1 + " time(s)");

        System.out.println();
        System.out.println("charAt() based solution:");
        long startTimeV2 = System.nanoTime();

        int countV2 = Strings
                .countOccurrencesOfACertainCharacterV2(TEXT, CHAR_TO_COUNT);

        displayExecutionTime(System.nanoTime() - startTimeV2);
        System.out.println("Character '" + CHAR_TO_COUNT + "' occured " + countV2 + " time(s)");

        System.out.println();
        System.out.println("Java 8, functional-style solution:");
        long startTimeV3 = System.nanoTime();

        long countV3 = Strings
                .countOccurrencesOfACertainCharacterV3(TEXT, CHAR_TO_COUNT);

        displayExecutionTime(System.nanoTime() - startTimeV3);
        System.out.println("Character '" + CHAR_TO_COUNT + "' occured " + countV3 + " time(s)");

        System.out.println("\n--------------------------------------\n");
        
        System.out.println("Input text: \n" + TEXT_CP + "\n");
        
        System.out.println("\n\nIncluding Unicode surrogate pairs examples:\n");

        System.out.println("replace() based solution:");
        long startTimeV4 = System.nanoTime();

        int countV4 = Strings
                .countOccurrencesOfACertainCharacterVCP1(TEXT_CP, CHAR_TO_COUNT_CP);

        displayExecutionTime(System.nanoTime() - startTimeV4);
        System.out.println("Character '" + CHAR_TO_COUNT_CP + "' occured " + countV4 + " time(s)");

        System.out.println();
        System.out.println("replace() based solution:");
        long startTimeV5 = System.nanoTime();

        int countV5 = Strings
                .countOccurrencesOfACertainCharacterVCP1(TEXT_CP, CHAR_TO_COUNT_CPS);

        displayExecutionTime(System.nanoTime() - startTimeV5);
        System.out.println("Character '" + CHAR_TO_COUNT_CPS + "' occured " + countV5 + " time(s)");

        System.out.println();
        System.out.println("codePointAt() based solution:");
        long startTimeV6 = System.nanoTime();

        int countV6 = Strings
                .countOccurrencesOfACertainCharacterVCP2(TEXT_CP, CHAR_TO_COUNT_CP);

        displayExecutionTime(System.nanoTime() - startTimeV6);
        System.out.println("Character '" + CHAR_TO_COUNT_CP + "' occured " + countV6 + " time(s)");

        System.out.println();
        System.out.println("codePointAt() based solution:");
        long startTimeV7 = System.nanoTime();

        int countV7 = Strings
                .countOccurrencesOfACertainCharacterVCP2(TEXT_CP, CHAR_TO_COUNT_CPS);

        displayExecutionTime(System.nanoTime() - startTimeV7);
        System.out.println("Character '" + CHAR_TO_COUNT_CPS + "' occured " + countV7 + " time(s)");

        System.out.println();
        System.out.println("Java 8, functional-style solution:");
        long startTimeV8 = System.nanoTime();

        long countV8 = Strings
                .countOccurrencesOfACertainCharacterVCP3(TEXT_CP, CHAR_TO_COUNT_CP);

        displayExecutionTime(System.nanoTime() - startTimeV8);
        System.out.println("Character '" + CHAR_TO_COUNT_CP + "' occured " + countV8 + " time(s)");

        System.out.println();
        System.out.println("Java 8, functional-style solution:");
        long startTimeV9 = System.nanoTime();

        long countV9 = Strings
                .countOccurrencesOfACertainCharacterVCP3(TEXT_CP, CHAR_TO_COUNT_CPS);

        displayExecutionTime(System.nanoTime() - startTimeV9);
        System.out.println("Character '" + CHAR_TO_COUNT_CPS + "' occured " + countV9 + " time(s)");
    }

    private static void displayExecutionTime(long time) {
        System.out.println("Execution time: " + time + " ns" + " ("
                + TimeUnit.MILLISECONDS.convert(time, TimeUnit.NANOSECONDS) + " ms)");
    }
}
