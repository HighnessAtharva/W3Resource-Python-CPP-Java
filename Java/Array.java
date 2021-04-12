// 1. Write a Java program to sort a numeric array and a string array. 
import java.util.Arrays; 
public class Exercise1 {
public static void main(String[] args){   
    
    int[] my_array1 = {
            1789, 2035, 1899, 1456, 2013, 
            1458, 2458, 1254, 1472, 2365, 
            1456, 2165, 1457, 2456};
            
    String[] my_array2 = {
            "Java",
			
            "Python",
            "PHP",
            "C#",
            "C Programming",
            "C++"
        };        
    System.out.println("Original numeric array : "+Arrays.toString(my_array1));
    Arrays.sort(my_array1);
    System.out.println("Sorted numeric array : "+Arrays.toString(my_array1));
    
    System.out.println("Original string array : "+Arrays.toString(my_array2));
    Arrays.sort(my_array2);
    System.out.println("Sorted string array : "+Arrays.toString(my_array2));
    }
}


// 2. Write a Java program to sum values of an array. 
public class Exercise2 {
public static void main(String[] args) {      
int my_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int sum = 0;

for (int i : my_array)
    sum += i;
System.out.println("The sum is " + sum);
}
}


// 3. Write a Java program to print the following grid. 

// Expected Output :

// - - - - - - - - - -                                                                                           
// - - - - - - - - - -                                                                                           
// - - - - - - - - - -                                                                                           
// - - - - - - - - - -                                                                                           
// - - - - - - - - - -                                                                                           
// - - - - - - - - - -                                                                                           
// - - - - - - - - - -                                                                                           
// - - - - - - - - - -                                                                                           
// - - - - - - - - - -                                                                                           
// - - - - - - - - - -  

public class Main {
public static void main(String[] args) {   
 int [][]a = new int[10][10];    
 for(int i = 0; i < 10; i++)
   {
      for(int j = 0; j < 10; j++)
      {
         System.out.printf("%2d ", a[i][j]);
      }
      System.out.println();
   }
}
}


// 4. Write a Java program to calculate the average value of array elements. 
public class Exercise4 {
public static void main(String[] args) {   
 
       int[] numbers = new int[]{20, 30, 25, 35, -16, 60, -100};
       //calculate sum of all array elements
       int sum = 0;
       for(int i=0; i < numbers.length ; i++)
        sum = sum + numbers[i];
       //calculate average value
        double average = sum / numbers.length;
        System.out.println("Average value of the array elements is : " + average); 
   }
}


// 5. Write a Java program to test if an array contains a specific value.
public class Exercise5 {
  public static boolean contains(int[] arr, int item) {
      for (int n : arr) {
         if (item == n) {
            return true;
         }
      }
      return false;
   }
   public static void main(String[] args) {
          int[] my_array1 = {
            1789, 2035, 1899, 1456, 2013, 
            1458, 2458, 1254, 1472, 2365, 
            1456, 2265, 1457, 2456};
      System.out.println(contains(my_array1, 2013));
      System.out.println(contains(my_array1, 2015));
   }
} 



// 6. Write a Java program to find the index of an array element. 
public class Exercise6 {
       public static int  findIndex (int[] my_array, int t) {
        if (my_array == null) return -1;
        int len = my_array.length;
        int i = 0;
        while (i < len) {
            if (my_array[i] == t) return i;
            else i=i+1;
        }
        return -1;
    }
    public static void main(String[] args) {
      int[] my_array = {25, 14, 56, 15, 36, 56, 77, 18, 29, 49};
      System.out.println("Index position of 25 is: " + findIndex(my_array, 25));
      System.out.println("Index position of 77 is: " + findIndex(my_array, 77));
       }
}


// 7. Write a Java program to remove a specific element from an array. 
import java.util.Arrays; 
public class Exercise7 {
 
public static void main(String[] args) {
   int[] my_array = {25, 14, 56, 15, 36, 56, 77, 18, 29, 49};
   
   System.out.println("Original Array : "+Arrays.toString(my_array));     
   
  // Remove the second element (index->1, value->14) of the array
   int removeIndex = 1;

   for(int i = removeIndex; i < my_array.length -1; i++){
        my_array[i] = my_array[i + 1];
      }
    // We cannot alter the size of an array , after the removal, the last and second last element in the array will exist twice
    System.out.println("After removing the second element: "+Arrays.toString(my_array));
 }
 }


// 8. Write a Java program to copy an array by iterating the array. 
import java.util.Arrays; 
public class Exercise8 {
 public static void main(String[] args) {
   int[] my_array = {25, 14, 56, 15, 36, 56, 77, 18, 29, 49};
   int[] new_array = new int[10];     
 
   System.out.println("Source Array : "+Arrays.toString(my_array));     
   
   for(int i=0; i < my_array.length; i++) {
    new_array[i] = my_array[i];
}
   System.out.println("New Array: "+Arrays.toString(new_array));
 }
 }


// 9. Write a Java program to insert an element (specific position) into an array. 
import java.util.Arrays; 
public class Exercise9 {
 
public static void main(String[] args) {

   int[] my_array = {25, 14, 56, 15, 36, 56, 77, 18, 29, 49};

    // Insert an element in 3rd position of the array (index->2, value->5)
   
   int Index_position = 2;
   int newValue    = 5;

  System.out.println("Original Array : "+Arrays.toString(my_array));     
   
  for(int i=my_array.length-1; i > Index_position; i--){
    my_array[i] = my_array[i-1];
   }
   my_array[Index_position] = newValue;
   System.out.println("New Array: "+Arrays.toString(my_array));
 }
 }


// 10. Write a Java program to find the maximum and minimum value of an array. 
import java.util.Arrays; 
public class Exercise10 {
 
  static int max;
  static int min;

    public static void max_min(int my_array[]) {
        max = my_array[0];
        min = my_array[0];
        int len = my_array.length;
        for (int i = 1; i < len - 1; i = i + 2) {
            if (i + 1 > len) {
                if (my_array[i] > max) max = my_array[i];
                if (my_array[i] < min) min = my_array[i];
            }
            if (my_array[i] > my_array[i + 1]) {
                if (my_array[i] > max) max = my_array[i];
                if (my_array[i + 1] < min) min = my_array[i + 1];
            }
            if (my_array[i] < my_array[i + 1]) {
                if (my_array[i] < min) min = my_array[i];
                if (my_array[i + 1] > max) max = my_array[i + 1];
            }
        }
    }

    public static void main(String[] args) {
           int[] my_array = {25, 14, 56, 15, 36, 56, 77, 18, 29, 49};
        max_min(my_array);
        System.out.println(" Original Array: "+Arrays.toString(my_array));
        System.out.println(" Maximum value for the above array = " + max);
        System.out.println(" Minimum value for the above array = " + min);
    }
}


// 11. Write a Java program to reverse an array of integer values. 
import java.util.Arrays; 
public class Exercise11 {
public static void main(String[] args){   
    int[] my_array1 = {
            1789, 2035, 1899, 1456, 2013, 
            1458, 2458, 1254, 1472, 2365, 
            1456, 2165, 1457, 2456};
  System.out.println("Original array : "+Arrays.toString(my_array1));  
   for(int i = 0; i < my_array1.length / 2; i++)
  {
    int temp = my_array1[i];
    my_array1[i] = my_array1[my_array1.length - i - 1];
    my_array1[my_array1.length - i - 1] = temp;
  }
    System.out.println("Reverse array : "+Arrays.toString(my_array1));
 }
}


// 12. Write a Java program to find the duplicate values of an array of integer values. 
import java.util.Arrays; 
public class Exercise12 {
  public static void main(String[] args) 
    {
        int[] my_array = {1, 2, 5, 5, 6, 6, 7, 2};
 
        for (int i = 0; i < my_array.length-1; i++)
        {
            for (int j = i+1; j < my_array.length; j++)
            {
                if ((my_array[i] == my_array[j]) && (i != j))
                {
                    System.out.println("Duplicate Element : "+my_array[j]);
                }
            }
        }
    }    
}


// 13. Write a Java program to find the duplicate values of an array of string values. 
public class Exercise13 {
public static void main(String[] args) 
    {
        String[] my_array = {"bcd", "abd", "jude", "bcd", "oiu", "gzw", "oiu"};
 
        for (int i = 0; i < my_array.length-1; i++)
        {
            for (int j = i+1; j < my_array.length; j++)
            {
                if( (my_array[i].equals(my_array[j])) && (i != j) )
                {
                    System.out.println("Duplicate Element is : "+my_array[j]);
                }
            }
        }
    }    
}



// 14. Write a Java program to find the common elements between two arrays (string values). 
import java.util.*;
public class Exercise14 {
public static void main(String[] args) 
    {
       String[] array1 = {"Python", "JAVA", "PHP", "C#", "C++", "SQL"};
 
       String[] array2 = {"MySQL", "SQL", "SQLite", "Oracle", "PostgreSQL", "DB2", "JAVA"};
       
       System.out.println("Array1 : "+Arrays.toString(array1));
       System.out.println("Array2 : "+Arrays.toString(array2));
 
       HashSet<String> set = new HashSet<String>();
 
        for (int i = 0; i < array1.length; i++)
        {
            for (int j = 0; j < array2.length; j++)
            {
                if(array1[i].equals(array2[j]))
                {
                    set.add(array1[i]);
                }
            }
        }
 
        System.out.println("Common element : "+(set));     //OUTPUT : [THREE, FOUR, FIVE]
    }
}


// 15. Write a Java program to find the common elements between two arrays of integers. 
import java.util.Arrays; 
public class Exercise15 {
public static void main(String[] args) 
    {
      int[] array1 = {1, 2, 5, 5, 8, 9, 7, 10};
      int[] array2 = {1, 0, 6, 15, 6, 4, 7, 0};
 
       System.out.println("Array1 : "+Arrays.toString(array1));
       System.out.println("Array2 : "+Arrays.toString(array2));
 
      
        for (int i = 0; i < array1.length; i++)
        {
            for (int j = 0; j < array2.length; j++)
            {
                if(array1[i] == (array2[j]))
                {
                 
                 System.out.println("Common element is : "+(array1[i]));
                 }
            }
        }
 
    }
}


// 16. Write a Java program to remove duplicate elements from an array. 
import java.util.Arrays;
 
public class Exercise16 {
   static void unique_array(int[] my_array)
    {
        System.out.println("Original Array : ");
         
        for (int i = 0; i < my_array.length; i++)
        {
            System.out.print(my_array[i]+"\t");
        }
         
        //Assuming all elements in input array are unique
         
        int no_unique_elements = my_array.length;
         
        //Comparing each element with all other elements
         
        for (int i = 0; i < no_unique_elements; i++) 
        {
            for (int j = i+1; j < no_unique_elements; j++)
            {
                //If any two elements are found equal
                 
                if(my_array[i] == my_array[j])
                {
                    //Replace duplicate element with last unique element
                     
                    my_array[j] = my_array[no_unique_elements-1];
                     
                    no_unique_elements--;
                     
                    j--;
                }
            }
        }
         
        //Copying only unique elements of my_array into array1
         
        int[] array1 = Arrays.copyOf(my_array, no_unique_elements);
         
        //Printing arrayWithoutDuplicates
         
        System.out.println();
         
        System.out.println("Array with unique values : ");
         
        for (int i = 0; i < array1.length; i++)
        {
            System.out.print(array1[i]+"\t");
        }
         
        System.out.println();
         
        System.out.println("---------------------------");
    }
     
    public static void main(String[] args) 
    {        
        unique_array(new int[] {0, 3, -2, 4, 3, 2});
         
        unique_array(new int[] {10, 22, 10, 20, 11, 22});
         
      }    
}


// 17. Write a Java program to find the second largest element in an array. 
import java.util.Arrays;
public class Main {
public static void main(String[] args) {
int[] my_array = {
            10789, 2035, 1899, 1456, 2013, 
            1458, 2458, 1254, 1472, 2365, 
            1456, 2165, 1457, 2456};
System.out.println("Original numeric array : "+Arrays.toString(my_array));            
Arrays.sort(my_array);
int index = my_array.length-1;
while(my_array[index]==my_array[my_array.length-1]){
index--;
}
System.out.println("Second largest value: " + my_array[index]);
}
}


// 18. Write a Java program to find the second smallest element in an array. 
import java.util.Arrays;
public class Exercise18 {
  public static void main(String[] args) {

    int[] my_array = {-1, 4, 0, 2, 7, -3};
    System.out.println("Original numeric array : "+Arrays.toString(my_array));
    int min = Integer.MAX_VALUE;
    int second_min = Integer.MAX_VALUE;
    for (int i = 0; i < my_array.length; i++) {
        if(my_array[i]==min){
          second_min=min;
        } else if (my_array[i] < min) {
            second_min = min;
            min = my_array[i];
        } else if (my_array[i] < second_min) {
            second_min = my_array[i];
        }

    }
    System.out.println("Second lowest number is : " + second_min);
    }
}


// 19. Write a Java program to add two matrices of the same size. 
import java.util.Scanner;
public class Exercise19 {
 public static void main(String args[])
   {
      int m, n, c, d;
      Scanner in = new Scanner(System.in);
 
      System.out.println("Input number of rows of matrix");
      m = in.nextInt();
      System.out.println("Input number of columns of matrix");
      n  = in.nextInt();
 
      int array1[][] = new int[m][n];
      int array2[][] = new int[m][n];
      int sum[][] = new int[m][n];
 
      System.out.println("Input elements of first matrix");
 
      for (  c = 0 ; c < m ; c++ )
         for ( d = 0 ; d < n ; d++ )
            array1[c][d] = in.nextInt();
 
      System.out.println("Input the elements of second matrix");
 
      for ( c = 0 ; c < m ; c++ )
         for ( d = 0 ; d < n ; d++ )
            array2[c][d] = in.nextInt();
 
      for ( c = 0 ; c < m ; c++ )
         for ( d = 0 ; d < n ; d++ )
             sum[c][d] = array1[c][d] + array2[c][d]; 
 
      System.out.println("Sum of the matrices:-");
 
      for ( c = 0 ; c < m ; c++ )
      {
         for ( d = 0 ; d < n ; d++ )
            System.out.print(sum[c][d]+"\t");
 
         System.out.println();
      }
   }
}


// 20. Write a Java program to convert an array to ArrayList. 
import java.util.ArrayList;
  import java.util.Arrays;
public class Exercise20 {
  public static void  main(String[] args) 
  {
  String[]  my_array = new String[] {"Python", "JAVA", "PHP",  "Perl", "C#", "C++"};
  ArrayList<String>  list = new ArrayList<String>(Arrays.asList(my_array));
  
  System.out.println(list);
  }
}


// 21. Write a Java program to convert an ArrayList to an array. 
import java.util.ArrayList;
  import java.util.Arrays;
  public class Exercise21 {
  public static void  main(String[] args)
  {
  ArrayList<String> list = new ArrayList<String>();

  list.add("Python");
 
  list.add("Java");
 
  list.add("PHP");
  
  list.add("C#");
 
  list.add("C++");
  
  list.add("Perl");
 
  String[]  my_array = new String[list.size()];
  
  list.toArray(my_array);
  
  for (String  string : my_array)
  {
  System.out.println(string);
  }
  }
  }


// 22. Write a Java program to find all pairs of elements in an array whose sum is equal to a specified number. 
public class Exercise22 {
static void  pairs_value(int inputArray[], int inputNumber)
  {
  System.out.println("Pairs of elements and their sum : ");
 
  for (int i =  0; i < inputArray.length; i++)
  {
  for (int j  = i+1; j < inputArray.length; j++)
  {
  if(inputArray[i]+inputArray[j] == inputNumber)
  {
  System.out.println(inputArray[i]+" + "+inputArray[j]+" =  "+inputNumber);
  }
  }
  }
  }
  
  public static void  main(String[] args)
  {
  pairs_value(new int[] {2, 7, 4, -5, 11, 5, 20}, 15);
  
  pairs_value(new int[] {14, -15, 9, 16, 25, 45, 12, 8}, 30);
  
  }
}


// 23. Write a Java program to test the equality of two arrays. 
public class Exercise23 {
static void  equality_checking_two_arrays(int[] my_array1, int[] my_array2)
  {
  boolean  equalOrNot = true;
  
  if(my_array1.length == my_array2.length)
  {
  for (int i  = 0; i < my_array1.length; i++)
  {
  if(my_array1[i] != my_array2[i])
  {
  equalOrNot = false;
  }
  }
  }
  else
  {
  equalOrNot  = false;
  }
  
  if  (equalOrNot)
  {
  System.out.println("Two arrays are equal.");
  }
  else
  {
  System.out.println("Two  arrays are not equal.");
  }
  }
  
  public static void  main(String[] args)
  {
  int[] array1 =  {2, 5, 7, 9, 11};
  int[] array2 =  {2, 5, 7, 8, 11};
  int[] array3 =  {2, 5, 7, 9, 11};
  
  equality_checking_two_arrays(array1,  array2);
  equality_checking_two_arrays(array1, array3);
  }
  }


// 24. Write a Java program to find a missing number in an array. 
import java.util.*;
public class Exercise24 {
 public static void main(String[] args) {

   int total_num;
   int[] numbers = new int[]{1,2,3,4,6,7};
   total_num = 7;
   int expected_num_sum = total_num * ((total_num + 1) / 2);
   int num_sum = 0;
   for (int i: numbers) {
    num_sum += i;
   }
       System.out.print( expected_num_sum - num_sum);
	   System.out.print("\n");
  }
 }


// 25. Write a Java program to find common elements from three sorted (in non-decreasing order) arrays. 
import java.util.*;
public class Exercise25 {
public static void main(String[] args) {
	ArrayList<Integer> common = new ArrayList<Integer>();
   int array1[] = {2, 4, 8};
   int array2[] = {2, 3, 4, 8, 10, 16};
   int array3[] = {4, 8, 14, 40};
	int x = 0, y = 0, z = 0;
	while (x < array1.length && y < array2.length && z < array3.length){
		if (array1[x] == array2[y] && array2[y] == array3[z]){
			common.add(array1[x]);
			x++;
			y++;
			z++;
		}
		else if (array1[x] < array2[y])
			x++;
		else if (array2[y] < array3[z])
			y++;
		else
			z++;
	}
	System.out.println("Common elements from three sorted (in non-decreasing order ) arrays: ");
System.out.println(common);
}
}


// 26. Write a Java program to move all 0's to the end of an array. Maintain the relative order of the other (non-zero) array elements. 
import java.util.*;
 public class Exercise26 {
     public static void main(String[] args) throws Exception {
        int[] array_nums = {0,0,1,0,3,0,5,0,6};
         int i = 0;
		System.out.print("\nOriginal array: \n");
		for (int n : array_nums)
            System.out.print(n+"  ");
		
        for(int j = 0, l = array_nums.length; j < l;) {
            if(array_nums[j] == 0)
                j++;
            else {
                int temp = array_nums[i];
                array_nums[i] = array_nums[j];
                array_nums[j] = temp;
                i ++;
                j ++;
            }
        }
        while (i < array_nums.length)
            array_nums[i++] = 0;
		System.out.print("\nAfter moving 0's to the end of the array: \n");
        for (int n : array_nums)
            System.out.print(n+"  ");
			System.out.print("\n");
    }
}



// 27. Write a Java program to find the number of even and odd integers in a given array of integers. 
import java.util.Arrays; 
 public class Exercise27 {
 public static void main(String[] args)
 {
    int[] array_nums = {5, 7, 2, 4, 9};
	System.out.println("Original Array: "+Arrays.toString(array_nums)); 
	int ctr = 0;
	for(int i = 0; i < array_nums.length; i++)
	{
		if(array_nums[i] % 2 == 0)
			ctr++;
	}
	System.out.println("Number of even numbers : "+ctr);
	System.out.println("Number of odd numbers  : "+(array_nums.length-ctr));
 }
}


// 28. Write a Java program to get the difference between the largest and smallest values in an array of integers. The length of the array must be 1 and above. 
import java.util.Arrays; 
 public class Exercise28 {
 public static void main(String[] args)
 {
    int[] array_nums = {5, 7, 2, 4, 9};
	System.out.println("Original Array: "+Arrays.toString(array_nums)); 
	int max_val = array_nums[0];
	int min = array_nums[0];
	for(int i = 1; i < array_nums.length; i++)
	{
		if(array_nums[i] > max_val)
			max_val = array_nums[i];
		else if(array_nums[i] < min)
			min = array_nums[i];
	}
	System.out.println("Difference between the largest and smallest values of the said array: "+(max_val-min));	
 }
}


// 29. Write a Java program to compute the average value of an array of integers except the largest and smallest values. 
import java.util.*; 
import java.io.*; 
 public class Exercise29 {
 public static void main(String[] args)
 {
    int[] array_nums = {5, 7, 2, 4, 9};
	System.out.println("Original Array: "+Arrays.toString(array_nums)); 
	int max = array_nums[0];
	int min = array_nums[0];
	float sum = array_nums[0];
	for(int i = 1; i < array_nums.length; i++)
	{
		sum  += array_nums[i];
		if(array_nums[i] > max)
			max = array_nums[i];
		else if(array_nums[i] < min)
			min = array_nums[i];
	}
	float x = ((sum-max-min) / (array_nums.length - 2));
	System.out.printf("Compute the average value of an array of integers except the largest and smallest values: %.2f",x);
	System.out.print("\n");	
  }
}


// 30. Write a Java program to check if an array of integers without 0 and -1. 
import java.util.*; 
import java.io.*; 
 public class Exercise30 {
 public static void main(String[] args)
 {
    int[] array_nums = {50, 77, 12, 54, -11};
	System.out.println("Original Array: "+Arrays.toString(array_nums)); 
	System.out.println("Result: "+test(array_nums));
    }	
    public static boolean test(int[] numbers) {
    for (int number : numbers) {
      if (number == 0 || number == -1) {
        return false;
      }
    }
    return true;
  }  
}


// 31. Write a Java program to check if the sum of all the 10's in the array is exactly 30. Return false if the condition does not satisfy, otherwise true. 
import java.util.*; 
import java.io.*; 
 public class Exercise31 {
 public static void main(String[] args)
 {
    int[] array_nums = {10, 77, 10, 54, -11, 10};
	System.out.println("Original Array: "+Arrays.toString(array_nums)); 
	int search_num = 10;
    int fixed_sum = 30;
	
	System.out.println("Result: "+result(array_nums, search_num, fixed_sum));
    }	
  
  public static boolean result(int[] numbers, int search_num, int fixed_sum) {
   int temp_sum = 0;
   for (int number : numbers) {
      if (number == search_num) {
        temp_sum += search_num;
      }

      if (temp_sum > fixed_sum) {
        break;
      }
    }
    return temp_sum == fixed_sum;
  }  
}


// 32. Write a Java program to check if an array of integers contains two specified elements 65 and 77. 
import java.util.*; 
import java.io.*; 
 public class Exercise32 {
 public static void main(String[] args)
 {
    int[] array_nums = {77, 77, 65, 65, 65, 77};
	System.out.println("Original Array: "+Arrays.toString(array_nums)); 
	int num1 = 77;
    int num2 = 65;
	
	System.out.println("Result: "+result(array_nums, num1, num2));
    }	
  
  public static boolean result(int[] array_nums, int num1, int num2) {
    for (int number : array_nums) {
      boolean r = number != num1 && number != num2;
      if (r) {
        return false;
        }
     }
        return true;
   }
}


// 33. Write a Java program to remove the duplicate elements of a given array and return the new length of the array.
// Sample array: [20, 20, 30, 40, 50, 50, 50]
// After removing the duplicate elements the program should return 4 as the new length of the array.
public class Exercise33 {    
   public static void main(String[] args) {
        int nums[] = {20, 20, 30, 40, 50, 50, 50};  
		System.out.println("Original array length: "+nums.length);
		System.out.print("Array elements are: ");
       for (int i = 0; i < nums.length; i++)
        {
            System.out.print(nums[i]+" ");
        }
		System.out.println("\nThe new length of the array is: "+array_sort(nums));
			
    }
    
    public static int array_sort(int[] nums) {
         int index = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[index-1])
                nums[index++] = nums[i];
        }
	  return index;
    }
}
  



// 34. Write a Java program to find the length of the longest consecutive elements sequence from a given unsorted array of integers.
// Sample array: [49, 1, 3, 200, 2, 4, 70, 5]
// The longest consecutive elements sequence is [1, 2, 3, 4, 5], therefore the program will return its length 5.  
import java.util.HashSet;
public class Exercise34 {    
   public static void main(String[] args) {
        int nums[] = {49, 1, 3, 200, 2, 4, 70, 5};  
		System.out.println("Original array length: "+nums.length);
		System.out.print("Array elements are: ");
       for (int i = 0; i < nums.length; i++)
        {
            System.out.print(nums[i]+" ");
        }
		System.out.println("\nThe new length of the array is: "+longest_sequence(nums));
			
    }
    
    public static int longest_sequence(int[] nums) {
      final HashSet<Integer> h_set = new HashSet<Integer>();
        for (int i : nums) h_set.add(i);

        int longest_sequence_len = 0;
        for (int i : nums) {
            int length = 1;
            for (int j = i - 1; h_set.contains(j); --j) {
                h_set.remove(j);
                ++length;
            }
            for (int j = i + 1; h_set.contains(j); ++j) {
                h_set.remove(j);
                ++length;
            }
            longest_sequence_len = Math.max(longest_sequence_len, length);
        }
        return longest_sequence_len;
    }
}


// 35. Write a Java program to find the sum of the two elements of a given array which is equal to a given integer.
// Sample array: [1,2,4,5,6]
// Target value: 6.  
import java.util.*;
public class Exercise35
{
        public static ArrayList<Integer> two_sum_array_target(final List<Integer> a, int b) {
        
        HashMap<Integer, Integer> my_map = new HashMap<Integer, Integer>();
        ArrayList<Integer> result = new ArrayList<Integer>();
        result.add(0);
        result.add(1);
        for(int i = 0; i < a.size(); i++){
            if(my_map.containsKey(a.get(i))){
                int index = my_map.get(a.get(i));
                result.set(0, index );
                result.set(1, i );
                break;
            }
            else{
                my_map.put(b - a.get(i), i);
            }
        }
        
        return result;
    }
  
    public static void main(String[] args){
        ArrayList<Integer> my_array = new ArrayList<Integer>();
        my_array.add(1);
        my_array.add(2);
        my_array.add(4);
        my_array.add(5);
		my_array.add(6);
		int target = 6;
        ArrayList<Integer> result = two_sum_array_target(my_array, target);
        for(int i : result)
            System.out.print("Index: "+i + " ");
    }
}


// 36. Write a Java program to find all the unique triplets such that sum of all the three elements [x, y, z (x ≤ y ≤ z)] equal to a specified number.
// Sample array: [1, -2, 0, 5, -1, -4]
// Target value: 2.  
import java.util.ArrayList;
import java.util.List;
public class Exercise36 {
    public static void main(String[] args) {
        int[] input = {1, -2, 0, 5, -1, -4};
		int target = 2;
		Exercise36 r = new Exercise36();
        System.out.println(r.threeSum(input,target));       
    }
    public List<List<Integer>> threeSum(int[] nums, int target) {
        List<List<Integer>> my_List = new ArrayList<List<Integer>>();
        
        for(int i = 0; i < nums.length; i++){
            for(int j = i; j < nums.length ;j++){
                for(int k = j; k<nums.length;k++){
                    if ( i != j && j != k && i != k && (nums[i] + nums[j] + nums[k] == target)){
                        List<Integer> inner_List = new ArrayList<Integer>(3);
                        inner_List.add(nums[i]);
                        inner_List.add(nums[j]);
                        inner_List.add(nums[k]);
                        my_List.add(inner_List);
                    }
                }
            }
        }
       return my_List;
    }
  }


// 37. Write a Java program to create an array of its anti-diagonals from a given square matrix.  

// Example:
// Input :
// 1 2
// 3 4
// Output:
// [
// [1],
// [2, 3],
// [4]
// ]
import java.util.*;
public class Exercise37
{
    public static ArrayList<ArrayList<Integer>> Exercise37(ArrayList<ArrayList<Integer>> A) {
        ArrayList<ArrayList<Integer>> result = new ArrayList<ArrayList<Integer>>();
        int m = A.size();
        int n = A.get(0).size();
        ArrayList<Integer> temp = new ArrayList<Integer>();
        temp.add(A.get(0).get(0));
        result.add(new ArrayList<Integer>(temp));
        int i = 0;
        while(i < m){            
            System.out.printf("For i : %d \n", i );
            int j = i+1;
            while(j < n){
                int k = i;
                int l = j;
                temp.clear();
                System.out.printf("\t For j : %d \n", j );
                while(l >= 0 && k < m){
                    System.out.printf("\t \t For k : %d and l : %d  add \n", k, l, A.get(k).get(l) );
                    temp.add(A.get(k).get(l));
                    k++;
                    l--;
                }
                System.out.println("\t \t Temp : " + temp);
                
                result.add(new ArrayList<Integer>(temp));
                j++;                                
            }
            
            
            i++;
        }
        temp.clear();
        temp.add(A.get(m-1).get(n-1));
        result.add(new ArrayList<Integer>(temp));
        return result;
    }
    
    public static ArrayList<ArrayList<Integer>> diagonalEfficient(ArrayList<ArrayList<Integer>> A) {
        ArrayList<ArrayList<Integer>> result = new ArrayList<ArrayList<Integer>>();
        int m = A.size();
        int n = A.get(0).size();
        ArrayList<Integer> temp = new ArrayList<Integer>();
        temp.add(A.get(0).get(0));
        result.add(new ArrayList<Integer>(temp));
        
        
            int j;
            int i = 0;
            j = i+1;
            while(j < n){
                int k = i;
                int l = j;
                temp.clear();
                while(k < m && l >= 0){
                    temp.add(A.get(k).get(l));
                    k++;
                    l--;
                }
                result.add(new ArrayList<Integer>(temp));
                j++;
            }
            
            i = 1;
            j = n-1;
            while(i < m){
                int k = i;
                int l = j;
                temp.clear();
                while(k < m && l >= 0){
                    temp.add(A.get(k).get(l));
                    k++;
                    l--;
                }
                result.add(new ArrayList<Integer>(temp));
                i++;
            }
                
        
        
        temp.clear();
        return result;
    }
    public static void main(String[] args){
        ArrayList<ArrayList<Integer>> A = new ArrayList<ArrayList<Integer>>();
        ArrayList<Integer> temp = new ArrayList<Integer>();
        temp.add(10);
        temp.add(20);
        temp.add(30);
        A.add(new ArrayList<Integer>(temp));
        temp.clear();
        
        temp.add(50);
        temp.add(60);
        temp.add(70);
        A.add(new ArrayList<Integer>(temp));
        temp.clear();
        
        temp.add(90);
        temp.add(100);
        temp.add(110);
        A.add(new ArrayList<Integer>(temp));
        temp.clear();
        for(ArrayList<Integer> t : A)
            System.out.println(t);
        
        ArrayList<ArrayList<Integer>> result  = diagonalEfficient(A);
        for(ArrayList<Integer> t : result)
            System.out.println(t);
    }
}


// 38. Write a Java program to get the majority element from a given array of integers containing duplicates.  
// Majority element: A majority element is an element that appears more than n/2 times where n is the size of the array.
import java.util.HashMap;
import java.util.Map;
import java.util.Iterator;
import java.util.Arrays; 

public class Main
{
  	public static void main (String[] args)
	{
		// Array - test majority element
		int nums[] = { 1, 6, 6, 5, 7, 4, 1, 7, 7, 7, 7, 7, 7, 7, 2 };
                                 System.out.println("Original Array : "+Arrays.toString(nums));  
		int result = MajorityElement(nums);
		if (result != -1)
			System.out.println("Majority element is " + result);
		else
			System.out.println("Majority element does not exist");
	}
  
  
	public static int MajorityElement(int arra1[])
	{
		int n = arra1.length;

		// Hash Map
		Map<Integer, Integer> map = new HashMap<Integer, Integer>();
	 
		// Element's frequency in a map
		for (int i = 0; i < n; i++)
		{
			if (map.get(arra1[i]) == null)
				map.put(arra1[i], 0);
			
			map.put(arra1[i], map.get(arra1[i]) + 1);
		}

		// Return the element if its count is more than n/2
		Iterator it = map.entrySet().iterator();
		while (it.hasNext()) 
		{
			Map.Entry pair = (Map.Entry)it.next();
			if ((int)pair.getValue() > n/2)
				return (int)pair.getKey();

			it.remove(); 
		}

		// no majority element
		return -1;
	}
}


// 39. Write a Java program to print all the LEADERS in the array.   
// Note: An element is leader if it is greater than all the elements to its right side.
import java.util.HashMap;
import java.util.Map;
import java.util.Iterator;
import java.util.Arrays; 

public class Main
{
 public static void main(String[] args)
    {
      int arr[] = {10, 9, 14, 23, 15, 0, 9};
      int size = arr.length;
        for (int i = 0; i < size; i++) 
        {
            int j;
            for (j = i + 1; j < size; j++) 
            {
                if (arr[i] <= arr[j])
                    break;
            }
            if (j == size) 
                System.out.print(arr[i] + " ");
        }
    }
}


// 40. Write a Java program to find the two elements from a given array of positive and negative numbers such that their sum is closest to zero.   
import java.util.*;
import java.lang.*;
public class Main
{
   public static void main (String[] args) 
    {
      int arr[] = {1, 5, -4, 7, 8, -6};
      int size = arr.length;
      int l, r, min_sum, sum, min_l_num, min_r_num;
    
      if(size < 2)
      {
        System.out.println("Invalid Input");
        return;
      }
      
      min_l_num = 0;
      min_r_num = 1;
      min_sum = arr[0] + arr[1];
      
      for(l = 0; l < size - 1; l++)
      {
        for(r = l+1; r < size; r++)
        {
          sum = arr[l] + arr[r];
          if(Math.abs(min_sum) > Math.abs(sum))
          {
            min_sum = sum;
            min_l_num = l;
            min_r_num = r;
          }
        }
      }
      
      System.out.println("Two elements whose sum is minimum are "+
                        arr[min_l_num]+ " and "+arr[min_r_num]);
    }
}


// 41. Write a Java program to find smallest and second smallest elements of a given array.   
import java.util.*;
import java.lang.*;
public class Main
{
   public static void main (String[] args) 
    {
      int arr[] = {5, 7, -8, 5, 14, 1};
      
      int first_element, second_element, arr_size = arr.length;
 
        /* Return if the array size less than two */
        if (arr_size < 2)
        {
            System.out.println("Array size less than two.");
            return;
        }
 
        first_element = second_element = Integer.MAX_VALUE;
        for (int i = 0; i < arr_size ; i ++)
        {
            /* Update both first and second if current element is smaller than first. */
            if (arr[i] < first_element)
            {
                second_element = first_element;
                first_element = arr[i];
            }
 
            /* Update second if arr[i] is between first and second
               elements.*/
            else if (arr[i] < second_element && arr[i] != first_element)
                second_element = arr[i];
        }
        if (second_element == Integer.MAX_VALUE)
            System.out.println("No second smallest element.");
        else
            System.out.println("The smallest element is " +
                               first_element + " and second Smallest  element is " + second_element +".");
      
    }
}


// 42. Write a Java program to segregate all 0s on left side and all 1s on right side of a given array of 0s and 1s.   
import java.util.*;
import java.lang.*;
public class Main
{
   public static void main (String[] args) 
    {  
        int nums[] = {0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1};
        int i,  nums_size = nums.length;
        int left = 0, right = nums_size - 1;
        
        System.out.println("Original Array : "+Arrays.toString(nums));  
 
        while (left < right) 
        {
            /* While  0 at left increment left index  */
            while (nums[left] == 0 && left < right)
               left++;
 
            /* While we see 1 at right decrement right index*/
            while (nums[right] == 1 && left < right)
                right--;
 
           
            if (left < right) 
            {
                nums[left] = 0;
                nums[right] = 1;
                left++;
                right--;
            }
        }
        
       System.out.println("Array after segregation is : "+Arrays.toString(nums));  
    }
}


// 43. Write a Java program to find all combination of four elements of a given array whose sum is equal to a given value.   
import java.util.*;
import java.lang.*;
public class Main
{
   public static void main (String[] args) 
    {  
      int nums[] = {10, 20, 30, 40, 1, 2};
      int n = nums.length;
      // given value
      int s = 53;
       System.out.println("Given value: "+s);
        System.out.print("Combination of four elements:");  
        // Find other three elements after fixing first element
        for (int i = 0; i < n - 3; i++) 
        {
          // Find other two elements after fixing second element
            for (int j = i + 1; j < n - 2; j++) 
            {
           // Find the fourth element after fixing third element    
              for (int k = j + 1; k < n - 1; k++) 
                {
            // find the fourth
                    for (int l = k + 1; l < n; l++) 
                    {
                        if (nums[i] + nums[j] + nums[k] + nums[l] == s) 
                            System.out.print("\n"+nums[i]+" "+nums[j]+" "+nums[k] 
                                                                 +" "+nums[l]);
                    }
                }
            }
    }
  }
}


// 44. Write a Java program to count the number of possible triangles from a given unsorted array of positive integers.   
// Note: The triangle inequality states that the sum of the lengths of any two sides of a triangle must be greater than or equal to the length of the third side.
import java.util.*;
import java.lang.*;
public class Main
{
   public static void main (String[] args) 
    {  
        int nums[] = {6, 7, 9, 16, 25, 12, 30, 40};
        int n = nums.length;
        System.out.println("Original Array : "+Arrays.toString(nums));  

        // Sort the array elements in non-decreasing order
        Arrays.sort(nums);
        
        // Initialize count of triangles
        int ctr = 0;
 
        for (int i = 0; i < n-2; ++i)
        {
          int x = i + 2;
 
          for (int j = i+1; j < n; ++j)
            {
               while (x < n && nums[i] + nums[j] > nums[x])
               ++x;
                 ctr += x - j - 1;
            }
        }
    System.out.println("Total number of triangles:  " +ctr);
    }
}


// 45. Write a Java program to cyclically rotate a given array clockwise by one.   
import java.util.Arrays;
 public class Main
{
    static int arra[] = new int[]{10, 20, 30, 40, 50, 60};
     
    static void rotate_array()
    {
       int a = arra[arra.length-1], i;
       for (i = arra.length-1; i > 0; i--)
          arra[i] = arra[i-1];
       arra[0] = a;
    }
     
   public static void main(String[] args) 
    {
        System.out.println("Original arraay:");
        System.out.println(Arrays.toString(arra));
         
        rotate_array();
         
        System.out.println("Rotated arraay:");
        System.out.println(Arrays.toString(arra));
    }
}


// 46. Write a Java program to check whether there is a pair with a specified sum of a given sorted and rotated array.   
public class Main
{
     static boolean sum_pair(int arr_int[], 
                                    int n, int x)
    {
        int k;
        for (k = 0; k < n - 1; k++)
            if (arr_int[k] > arr_int[k+1])
                break;
                 
        int l = (k + 1) % n;                           
                       
        int r = k;                          
      
       while (l != r)
        {
             if (arr_int[l] + arr_int[r] == x)
                  return true;
             if (arr_int[l] + arr_int[r] < x)
                  l = (l + 1) % n;
                   
             else
                  r = (n + r - 1) % n;
        }
        return false;
    }
 
 public static void main (String[] args)
    {
        int arr_int[] = {22, 25, 17, 18, 19, 20};
        int sum = 42;
        int n = arr_int.length;
      
        if (sum_pair(arr_int, n, sum))
            System.out.print("Array has a pair of elements with sum 42.");
        else
            System.out.print("Array has no pair with sum 42.");
    }
}


// 47. Write a Java program to find the rotation count in a given rotated sorted array of integers.   
import java.util.*;
import java.lang.*;
import java.io.*;
 
public class Main
{
  static int count_rotations(int arr_int[], int n)
    {
       int min_val = arr_int[0], min_index = -1;
        for (int i = 0; i < n; i++)
        {
            if (min_val > arr_int[i])
            {
                min_val = arr_int[i];
                min_index = i;
            }
        } 
        return min_index;
    }
    public static void main (String[] args) 
    {
          int arr_int[] = {35, 32, 30, 14, 18, 21, 27};
      // int arr_int[] = {35, 32, 14, 18, 21, 27};
      // int arr_int[] = {35, 14, 18, 21, 27};
           int n = arr_int.length;
            System.out.println(count_rotations(arr_int, n));
    }
}


// 48. Write a Java program to arrange the elements of a given array of integers where all negative integers appear before all the positive integers.   
import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
        int[] nums = {-4, 8, 6, -5, 6, -2, 1, 2, 3, -11};
		System.out.println("Original Array: "+Arrays.toString(nums)); 
        sort_nums(nums);
        System.out.println("New Array: "+Arrays.toString(nums)); 
    }
    public static void sort_nums(int[] nums){
        int pos_num = 0;
        int neg_num = 0;
        int i,j;
        int max = Integer.MIN_VALUE;
        for(i=0; i<nums.length; i++){
            if(nums[i]<0) neg_num++;
            else pos_num++;
            if(nums[i]>max) max = nums[i];
        }
        max++;
        if(neg_num==0 || pos_num == 0) return;
        i=0;
        j=1;
        while(true){
            while(i<=neg_num && nums[i]<0) i++;
            while(j<nums.length && nums[j]>=0) j++;
            if(i>neg_num || j>=nums.length) break;
            nums[i]+= max*(i+1);
            swap_nums(nums,i,j);
        }

        i = nums.length-1;
        while(i>=neg_num){
            int div = nums[i]/max;
            if(div == 0) i--;
            else{
                nums[i]%=max;
                swap_nums(nums,i,neg_num+div-2); 
            }
        }

    }
    private static void swap_nums(int[] nums, int i , int j){
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
}


// 49. Write a Java program to arrange the elements of a given array of integers where all positive integers appear before all the negative integers.   
import java.util.Arrays;
public class Main {

    public static void main(String[] args) {
       int arra_nums[] = {-4, 8, 6, -5, 6, -2, 1, 2, 3, -11};
       System.out.println("Original array : "+Arrays.toString(arra_nums)); 
       int j,temp,arr_size;

        arr_size = arra_nums.length;
        for (int i = 0; i <arr_size; i++){
            j = i;  
            
           //Shift positive numbers left, negative numbers right
         
            while ((j > 0) && (arra_nums[j] >0) && (arra_nums[j-1] < 0)){
                  temp = arra_nums[j];
                  arra_nums[j] = arra_nums[j-1];
                  arra_nums[j-1] = temp;
                  j--;
            }
        }
       System.out.println("New array : "+Arrays.toString(arra_nums)); 
    }       
 }


// 50. Write a Java program to sort an array of positive integers of a given array, in the sorted array the value of the first element should be maximum, second value should be minimum value, third should be second maximum, fourth second be second minimum and so on.   
import java.util.Arrays;
 
public class Main
{
     static int[] rearrange(int[] new_arra, int n)
    {
        int temp[] = new int[n];
     
         int small_num = 0, large_num = n-1;
         boolean flag = true;
     
        for (int i=0; i < n; i++)
        {
            if (flag)
                temp[i] = new_arra[large_num--];
            else
                temp[i] = new_arra[small_num++];
     
            flag = !flag;
        }
     
        return temp;
    }
 
    public static void main(String[] args) 
    {
        int nums[] = new int[]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        int result[];
         
        System.out.println("Original Array ");
        System.out.println(Arrays.toString(nums));
         
        result = rearrange(nums,nums.length);
         
        System.out.println("New Array ");
        System.out.println(Arrays.toString(result));
     
    }
}


// 51. Write a Java program to separate 0s on left side and 1s on right side of an array of 0s and 1s in random order.   
import java.util.Arrays;

public class Main {
    public static void main(String[] args)
    {
        int arr[] = new int[]{ 0, 0, 1, 1, 0, 1, 1, 1,0 };
        int result[];
        System.out.println("Original Array ");
        System.out.println(Arrays.toString(arr));

        int n = arr.length;
 
        result = separate_0_1(arr, n);
        System.out.println("New Array ");
        System.out.println(Arrays.toString(result));
      }
    
    static int [] separate_0_1(int arr[], int n)
     {
        int count = 0;   
     
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0)
                count++;
        }
 
        for (int i = 0; i < count; i++)
            arr[i] = 0;
 
        for (int i = count; i < n; i++)
            arr[i] = 1;
    
         return arr;
     }       
   }


// 52. Write a Java program to separate even and odd numbers of a given array of integers. Put all even numbers first, and then odd numbers.   
import java.util.Arrays;
public class Main
{
	
	 public static void main (String[] args)
     {
        int nums[] = {20, 12, 23, 17, 7, 8, 10, 2, 1, 0};
        int result[];
        System.out.println("Original Array ");
        System.out.println(Arrays.toString(nums));

        result = separate_odd_even(nums);
 
        System.out.print("Array after separation ");
        System.out.println(Arrays.toString(result));
    }
	
    static int [] separate_odd_even(int arr[])
    {
        int left_side = 0, right_side = arr.length - 1;
        while (left_side < right_side)
        {
            while (arr[left_side]%2 == 0 && left_side < right_side)
                left_side++;
 
            while (arr[right_side]%2 == 1 && left_side < right_side)
                right_side--;
 
            if (left_side < right_side)
            {
                int temp = arr[left_side];
                arr[left_side] = arr[right_side];
                arr[right_side] = temp;
                left_side++;
                right_side--;
            }
        }
        return arr;
    }
}


// 53. Write a Java program to replace every element with the next greatest element (from right side) in a given array of integers. There is no element next to the last element, therefore replace it with -1.  
import java.io.*;
import java.util.Arrays;
public class Main 
{
   public static void main (String[] args)
    {
        int nums[] = {45, 20, 100, 23, -5, 2, -6};
		int result[];
		System.out.println("Original Array ");
        System.out.println(Arrays.toString(nums));

        result = next_greatest_num(nums);
        System.out.println("The modified array:");
        System.out.println(Arrays.toString(result));
    }
 
    static int [] next_greatest_num(int arr_nums[])
    {
        int size = arr_nums.length;
        int max_from_right_num =  arr_nums[size-1];
        arr_nums[size-1] = -1;
 
        for (int i = size-2; i >= 0; i--)
        {
            int temp = arr_nums[i];
            arr_nums[i] = max_from_right_num;
            if(max_from_right_num < temp)
            max_from_right_num = temp;
        }
		return arr_nums;
    } 
}


// 54. Write a Java program to check if a given array contains a subarray with 0 sum.   

// Example:
// Input :
// nums1= { 1, 2, -2, 3, 4, 5, 6 }
// nums2 = { 1, 2, 3, 4, 5, 6 }
// nums3 = { 1, 2, -3, 4, 5, 6 }
// Output:
// Does the said array contain a subarray with 0 sum: true
// Does the said array contain a subarray with 0 sum: false
// Does the said array contain a subarray with 0 sum: true
import java.util.Set;
import java.util.HashSet;
import java.util.Arrays;

class solution
{
	public static Boolean find_subarray_sum_zero(int[] nums)
	{
		Set<Integer> set = new HashSet<>();
		set.add(0);
		int suba_sum = 0;
		for (int i = 0; i < nums.length; i++)
		{			
			suba_sum += nums[i];

     		if (set.contains(suba_sum)) {
				return true;
			}
		set.add(suba_sum);
		}

		return false;
	}

	public static void main (String[] args)
	{
		int[] nums1= { 1, 2, -2, 3, 4, 5, 6 };
		System.out.println("Original array: "+Arrays.toString(nums1));
		System.out.println("Does the said array contain a subarray with 0 sum: "+find_subarray_sum_zero(nums1));		
		int[] nums2 = { 1, 2, 3, 4, 5, 6 };
		System.out.println("\nOriginal array: "+Arrays.toString(nums2));
		System.out.println("Does the said array contain a subarray with 0 sum: "+find_subarray_sum_zero(nums2));	
        int[] nums3 = { 1, 2, -3, 4, 5, 6 };
		System.out.println("\nOriginal array: "+Arrays.toString(nums3));
		System.out.println("Does the said array contain a subarray with 0 sum: "+find_subarray_sum_zero(nums3));
	}
}


// 55. Write a Java program to print all sub-arrays with 0 sum present in a given array of integers.   

// Example:
// Input :
// nums1 = { 1, 3, -7, 3, 2, 3, 1, -3, -2, -2 }
// nums2 = { 1, 2, -3, 4, 5, 6 }
// nums3= { 1, 2, -2, 3, 4, 5, 6 }
// Output:
// Sub-arrays with 0 sum : [1, 3, -7, 3]
// Sub-arrays with 0 sum : [3, -7, 3, 2, 3, 1, -3, -2]

// Sub-arrays with 0 sum : [1, 2, -3]
// Sub-arrays with 0 sum : [2, -2]
import java.util.*;
import java.lang.*;
class solution
{
	public static void print_all_Subarrays(int[] A)
	{
		
		List<Integer> llist = new ArrayList<Integer>();
		for (int i = 0; i < A.length; i++)
		{
			int sum = 0;
			llist.removeAll(llist);
			for (int j = i; j < A.length; j++)
			{
				sum += A[j];
				llist.add(A[j]); 
				if (sum == 0) {
					System.out.println("Sub-arrays with 0 sum : " + llist.toString()); 
				
				}
			}
		}
	}

	public static void main (String[] args)
	{
		int[] nums1 = { 1, 3, -7, 3, 2, 3, 1, -3, -2, -2 };
		System.out.println("\nOriginal array: "+Arrays.toString(nums1));
		print_all_Subarrays(nums1);
		
	              int[] nums2 = { 1, 2, -3, 4, 5, 6 };
		System.out.println("\nOriginal array: "+Arrays.toString(nums2));
		print_all_Subarrays(nums2);
		
		int[] nums3= { 1, 2, -2, 3, 4, 5, 6 };
		System.out.println("\nOriginal array: "+Arrays.toString(nums3));
		print_all_Subarrays(nums3);
	}
}


// 56. Write a Java program to sort a given binary array in linear times.   
// From Wikipedia,
// Linear time: An algorithm is said to take linear time, or O(n) time, if its time complexity is O(n). Informally, this means that the running time increases at most linearly with the size of the input. More precisely, this means that there is a constant c such that the running time is at most cn for every input of size n. For example, a procedure that adds up all elements of a list requires time proportional to the length of the list, if the adding time is constant, or, at least, bounded by a constant.
// Linear time is the best possible time complexity in situations where the algorithm has to sequentially read its entire input. Therefore, much research has been invested into discovering algorithms exhibiting linear time or, at least, nearly linear time. This research includes both software and hardware methods. There are several hardware technologies which exploit parallelism to provide this. An example is content-addressable memory. This concept of linear time is used in string matching algorithms such as the Boyer–Moore algorithm and Ukkonen's algorithm.

// Example:
// Input :
// b_nums[] = { 0, 1, 1, 0, 1, 1, 0, 1, 0, 0 }
// Output:
// After sorting: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1]
import java.util.Arrays;

class solution
{

	public static void sort_binary_nums(int[] b_nums)
	{
		int k = 0;

		for (int i = 0; i < b_nums.length; i++)
		{
			if (b_nums[i] == 0) {
				b_nums[k++] = 0;
			}
		}

		for (int i = k; i < b_nums.length; i++) {
			b_nums[k++] = 1;
		}
	}

	public static void main (String[] args)
	{
		int b_nums[] = { 0, 1, 1, 0, 1, 1, 0, 1, 0, 0 };
        System.out.println("Original array: "+Arrays.toString(b_nums)); 
		sort_binary_nums(b_nums);
		System.out.println("After sorting: "+Arrays.toString(b_nums));
		
	}
}


// 57. Write a Java program to check if a sub-array is formed by consecutive integers from a given array of integers.   

// Example:
// Input :
// nums = { 2, 5, 0, 2, 1, 4, 3, 6, 1, 0 }
// Output:
// The largest sub-array is [1, 7]
// Elements of the sub-array: 5 0 2 1 4 3 6
import java.lang.Math;
import java.util.Arrays;
class solution
{
	static boolean is_consecutive(int nums[], int i, int j, int min, int max)
	{
		if (max - min != j - i) {
			return false;
		}

		boolean check[] = new boolean[j - i + 1];

		for (int k = i; k <= j; k++)
		{
			if (check[nums[k] - min]) {
				return false;
			}

			check[nums[k] - min] = true;
		}
	
		return true;
	}
	
	public static void find_Max_SubArray(int[] nums)
	 {
		int len = 1;
		int start = 0, end = 0;

		for (int i = 0; i < nums.length - 1; i++)
		{
			int min_val = nums[i], max_val = nums[i];
	
			for (int j = i + 1; j < nums.length; j++)
			{
				min_val = Math.min(min_val, nums[j]);
				max_val = Math.max(max_val, nums[j]);
	
				if (is_consecutive(nums, i, j, min_val, max_val))
				{
					if (len < max_val - min_val + 1)
					{
						len = max_val - min_val + 1;
						start = i;
						end = j;
					}
				}
			}
		}
	
		System.out.println("The largest sub-array is [" + start + ", "
							+ end + "]");
		System.out.print("Elements of the sub-array: ");
	    for (int x = start; x <= end; x++)
	     {
			
		  System.out.print(nums[x]+" ");			
		 }	
	}

	public static void main (String[] args)
	{
		int[] nums = { 2, 5, 0, 2, 1, 4, 3, 6, 1, 0 };
        System.out.println("Original array: "+Arrays.toString(nums)); 
		find_Max_SubArray(nums);
	}
} 


// 58. Given two sorted arrays A and B of size p and q, write a Java program to merge elements of A with B by maintaining the sorted order i.e. fill A with first p smallest elements and fill B with remaining elements.   

// Example:
// Input :
// int[] A = { 1, 5, 6, 7, 8, 10 }
// int[] B = { 2, 4, 9 }
// Output:
// Sorted Arrays:
// A: [1, 2, 4, 5, 6, 7]
// B: [8, 9, 10]
import java.util.Arrays;

class solution
{
	public static void merge_sorted_arrays(int[] A, int p, int[] B, int q)
	{
		
		for (int i = 0; i < p; i++)
		{
			if (A[i] > B[0])
			{
				int temp = A[i];
				A[i] = B[0];
				B[0] = temp;

				int first_arr = B[0];
				int k;
				for (k = 1; k < q && B[k] < first_arr; k++) {
					B[k - 1] = B[k];
				}

				B[k - 1] = first_arr;
			}
		}
	}

	public static void main (String[] args)
	{
		int[] A = { 1, 5, 6, 7, 8, 10 };
		int[] B = { 2, 4, 9 };
		int p = A.length;
		int q = B.length;

		System.out.println("Original Arrays:");
		System.out.println("A: " + Arrays.toString(A));
		System.out.println("B: " + Arrays.toString(B));
		
		merge_sorted_arrays(A, p, B, q);
        
		System.out.println("\nSorted Arrays:");
		System.out.println("A: " + Arrays.toString(A));
		System.out.println("B: " + Arrays.toString(B));
	}
}


// 59. Write a Java program to find maximum product of two integers in a given array of integers.   

// Example:
// Input :
// nums = { 2, 3, 5, 7, -7, 5, 8, -5 }
// Output:
// Pair is (7, 8), Maximum Product: 56
import java.util.*;
class solution
{
	public static void find_max_product(int[] nums)
	{
		int max_pair_product = Integer.MIN_VALUE;
		int max_i = -1, max_j = -1;

		for (int i = 0; i < nums.length - 1; i++)
		{
			for (int j = i + 1; j < nums.length; j++)
			{
				if (max_pair_product < nums[i] * nums[j])
				{
					max_pair_product = nums[i] * nums[j];
					max_i = i;
					max_j = j;
				}
			}
		}

		System.out.print("Pair is (" + nums[max_i] + ", " + nums[max_j] + "), Maximum Product: " + (nums[max_i]*nums[max_j]));
	}

	public static void main (String[] args)
	{
		int[] nums = { 2, 3, 5, 7, -7, 5, 8, -5 };
		System.out.println("\nOriginal array: "+Arrays.toString(nums));
		find_max_product(nums);
	}
}


// 60. Write a Java program to shuffle a given array of integers.   

// Example:
// Input :
// nums = { 1, 2, 3, 4, 5, 6 }
// Output:
// Shuffle Array: [4, 2, 6, 5, 1, 3]
import java.util.Arrays;
import java.util.Random;

class solution
{
	public static void shuffle(int nums[])
	{
		for (int i = nums.length - 1; i >= 1; i--)
		{
			Random rand = new Random();

			int j = rand.nextInt(i + 1);

			swap_elements(nums, i, j);
		}
	}
        private static void swap_elements(int[] nums, int i, int j) {
		int temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}
	public static void main (String[] args)
	{
		int[] nums = { 1, 2, 3, 4, 5, 6 };
        System.out.println("Original Array: "+Arrays.toString(nums));
		shuffle(nums);
		System.out.println("Shuffle Array: "+Arrays.toString(nums));
	}
}


// 61. Write a Java program to rearrange a given array of unique elements such that every second element of the array is greater than its left and right elements.   

// Example:
// Input :
// nums= { 1, 2, 4, 9, 5, 3, 8, 7, 10, 12, 14 }
// Output:
// Array with every second element is greater than its left and right elements:
// [1, 4, 2, 9, 3, 8, 5, 10, 7, 14, 12]
import java.util.Arrays;

class solution
{
	private static void swap_nums(int[] nums, int i, int j) {
		int t_nums = nums[i];
		nums[i] = nums[j];
		nums[j] = t_nums;
	}

	public static void rearrange_Array_nums(int[] nums)
	{
		for (int i = 1; i < nums.length; i += 2)
		{
			if (nums[i - 1] > nums[i]) {
				swap_nums(nums, i - 1, i);
			}

			if (i + 1 < nums.length && nums[i + 1] > nums[i]) {
				swap_nums(nums, i + 1, i);
			}
		}
	}

	public static void main (String[] args)
	{
		int[] nums= { 1, 2, 4, 9, 5, 3, 8, 7, 10, 12, 14 };
        System.out.println("Original array:\n"+Arrays.toString(nums));
		rearrange_Array_nums(nums);
		System.out.println("\nArray with every second element is greater than its left and right elements:\n"+Arrays.toString(nums));
	}
}


// 62. Write a Java program to find the equilibrium indices from a given array of integers.   

// Example:
// Input :
// nums = {-7, 1, 5, 2, -4, 3, 0}
// Output:
// Equilibrium indices found at : 3
// Equilibrium indices found at : 6
import java.util.Arrays; 
public class solution {
	public static void main(String[] args) {
		int[] nums = {-7, 1, 5, 2, -4, 3, 0};
		System.out.println("Original array: "+Arrays.toString(nums));
		equlibrium_indices(nums);
	}
 
	public static void equlibrium_indices(int[] nums){
		//find total sum
		int totalSum = 0;
		for (int n : nums) {
			totalSum += n;
		}
		//compare running sum to remaining sum to find equlibrium indices
		int runningSum = 0;
		for (int i = 0; i < nums.length; i++) {
			int n = nums[i];
			if (totalSum - runningSum - n == runningSum) {
				System.out.println("Equilibrium indices found at : "+i);
			}
			runningSum += n;
		}
	}
}


// 63. Write a Java program to replace each element of the array with product of every other element in a given array of integers.   

// Example:
// Input :
// nums1 = { 1, 2, 3, 4, 5, 6, 7}
// nums2 = {0, 1, 2, 3, 4, 5, 6, 7}
// Output:
// Array with product of every other element:
// [5040, 2520, 1680, 1260, 1008, 840, 720]
// Array with product of every other element:
// [5040, 0, 0, 0, 0, 0, 0, 0]
import java.util.Arrays;

class solution
{
	public static int[] find_Product_in_array(int[] nums)
	{
		int n = nums.length;

		int[] left_element = new int[n];
		int[] right_element = new int[n];

		left_element[0] = 1;
		for (int i = 1; i < n; i++) {
			left_element[i] = nums[i - 1] * left_element[i - 1];
		}

		right_element[n - 1] = 1;
		for (int j = n - 2; j >= 0; j--) {
			right_element[j] = nums[j + 1] * right_element[j + 1];
		}

		for (int i = 0; i < n; i++) {
			nums[i] = left_element[i] * right_element[i];
		}
	return nums;	
	}

	public static void main(String[] args)
	{
		int[] nums1 = { 1, 2, 3, 4, 5, 6, 7};
		System.out.println("Original array:\n"+Arrays.toString(nums1));
		int[] result1 = find_Product_in_array(nums1);
		System.out.println("Array with product of every other element:\n" + Arrays.toString(result1));

		int[] nums2 = {0, 1, 2, 3, 4, 5, 6, 7};
		System.out.println("\nOriginal array:\n"+Arrays.toString(nums2));
		int[] result2 = find_Product_in_array(nums2);
		System.out.println("Array with product of every other element:\n" + Arrays.toString(result2));

	}
}


// 64. Write a Java program to find Longest Bitonic Subarray in a given array.   

// A bitonic subarray is a subarray of a given array where elements are first sorted in increasing order, then in decreasing order. A strictly increasing or strictly decreasing subarray is also accepted as bitonic subarray.

// Example:
// Input :
// nums = { 4, 5, 9, 5, 6, 10, 11, 9, 6, 4, 5 }
// Output:
// The longest bitonic subarray is [3,9]
// Elements of the said sub-array: 5 6 10 11 9 6 4
// The length of longest bitonic subarray is 7
import java.util.Arrays;
class solution
{
	public static int find_Bitonic_Subarray(int[] nums)
	{
		int[] incre_array = new int[nums.length];
		incre_array[0] = 1;
		for (int i = 1; i < nums.length; i++) {
			incre_array[i] = 1;
			if (nums[i - 1] < nums[i]) {
				incre_array[i] = incre_array[i - 1] + 1;
			}
		}

		int[] decre_array = new int[nums.length];
		decre_array[nums.length - 1] = 1;
		for (int i = nums.length - 2; i >= 0; i--) {
			decre_array[i] = 1;
			if (nums[i] > nums[i + 1]) {
				decre_array[i] = decre_array[i + 1] + 1;
			}
		}

		int lbs_len = 1;
		int start = 0, end = 0;

		for (int i = 0; i < nums.length; i++)
		{
			if (lbs_len < incre_array[i] + decre_array[i] - 1)
			{
				lbs_len = incre_array[i] + decre_array[i] - 1;
				start = i - incre_array[i] + 1;
				end = i + decre_array[i] - 1;
			}
		}

		// print longest bitonic sub-array
		System.out.println("The longest bitonic subarray is [" + start + "," + end + "]");
		System.out.print("Elements of the said sub-array: ");
	    for (int x = start; x <= end; x++)
	     {
			
		  System.out.print(nums[x]+" ");			
		 }	

		System.out.println("\nThe length of longest bitonic subarray is " + lbs_len);

		return lbs_len;
	}

	public static void main(String[] args)
	{
		int[] nums = { 4, 5, 9, 5, 6, 10, 11, 9, 6, 4, 5 };
		System.out.println("\nOriginal array: "+Arrays.toString(nums));
		find_Bitonic_Subarray(nums);
	}
}


// 65. Write a Java program to find maximum difference between two elements in a given array of integers such that smaller element appears before larger element.   

// Example:
// Input :
// nums = { 2, 3, 1, 7, 9, 5, 11, 3, 5 }
// Output:
// The maximum difference between two elements of the said array elements
// 10
import java.util.Arrays;
class solution
{
  public static int diff_between_two_elemnts(int[] nums)
	{
		int diff_two_elemnts = Integer.MIN_VALUE;

		for (int i = 0; i < nums.length - 1; i++) {
			for (int j = i + 1; j < nums.length; j++) {
				diff_two_elemnts = Integer.max(diff_two_elemnts,nums[j] - nums[i]);
			}
		}

		return diff_two_elemnts;
	}

	public static void main(String[] args)
	{
		int[] nums = { 2, 3, 1, 7, 9, 5, 11, 3, 5 };
		System.out.println("\nOriginal array: "+Arrays.toString(nums));

		System.out.print("The maximum difference between two elements of the said array elements\n" + diff_between_two_elemnts(nums));
	}
}


// 66. Write a Java program to find contiguous subarray within a given array of integers which has the largest sum.   

// In computer science, the maximum sum subarray problem is the task of finding a contiguous subarray with the largest sum, within a given one-dimensional array A[1...n] of numbers. Formally, the task is to find indices and with, such that the sum is as large as possible.

// Example:
// Input :
// int[] A = {1, 2, -3, -4, 0, 6, 7, 8, 9}
// Output:
// The largest sum of contiguous sub-array: 30
import java.util.Arrays;
class solution	
{
	public static int largest_sum(int[] A)
	{
		int max_ele_val = 0;
		int max_end = 0;
		for (int i: A)
		{
			max_end = max_end + i;
			max_end = Integer.max(max_end, 0);

			max_ele_val = Integer.max(max_ele_val, max_end);
		}
		return max_ele_val;
	}
	public static void main(String[] args)
	{
		int[] A = {1, 2, -3, -4, 0, 6, 7, 8, 9};
		System.out.println("\nOriginal array: "+Arrays.toString(A));
		System.out.println("The largest sum of contiguous sub-array: " + largest_sum(A));
	}
}


// 67. Write a Java program to find subarray which has the largest sum in a given circular array of integers.   

// Example:
// Input :
// nums1 = { 2, 1, -5, 4, -3, 1, -3, 4, -1 }
// nums2 = { 1, -2, 3, 0, 7, 8, 1, 2, -3 }
// Output:
// The sum of subarray with the largest sum is 6
// The sum of subarray with the largest sum is 21
import java.util.Arrays;
class solution {
    public static int max_Subarray_Sum_Circular(int[] nums) {
        int n = nums.length;
        int result = nums[0];
        int sum = nums[0];
        for (int i = 1; i < n; i++) {
            sum = Math.max(sum + nums[i], nums[i]);
            result = Math.max(result, sum);
        }
        
        int[] right_Sum = new int[n];
        int[] right_Max = new int[n];
        right_Sum[n - 1] = nums[n - 1];
        right_Max[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right_Sum[i] = right_Sum[i + 1] + nums[i];
            right_Max[i] = Math.max(right_Sum[i], right_Max[i + 1]);
        }
        
        int left_Sum = 0;
        for (int i = 0; i < n - 2; i++) {
            left_Sum += nums[i];
            result = Math.max(result, left_Sum + right_Max[i + 2]);
        }
        
        return result;
    }
	
	public static void main(String[] args)
	{
		int[] nums1 = { 2, 1, -5, 4, -3, 1, -3, 4, -1 };
		System.out.println("\nOriginal circular array: "+Arrays.toString(nums1));
		System.out.println("The sum of subarray with the largest sum is " + max_Subarray_Sum_Circular(nums1));
		
		int[] nums2 = { 1, -2, 3, 0, 7, 8, 1, 2, -3 };
		System.out.println("\nOriginal circular array: "+Arrays.toString(nums2));
		System.out.println("The sum of subarray with the largest sum is " + max_Subarray_Sum_Circular(nums2));
	}
}


// 68. Write a Java program to create all possible permutations of a given array of distinct integers.   

// Example:
// Input :
// nums1 = {1, 2, 3, 4}
// nums2 = {1, 2, 3}
// Output:
// Possible permutations of the said array:
// [1, 2, 3, 4]
// [1, 2, 4, 3]
// ....
// [4, 1, 3, 2]
// [4, 1, 2, 3]
// Possible permutations of the said array:
// [1, 2, 3]
// [1, 3, 2]
// ...
// [3, 2, 1]
// [3, 1, 2]
import java.util.*;
import java.util.List;

 public class solution {
 public static void main(String[] args) throws Exception {
    int[] nums1 = {1, 2, 3, 4};
	System.out.println("\nOriginal array: "+Arrays.toString(nums1));
    List<List<Integer>> result1 = new solution().permute(nums1);
	System.out.println("\nPossible permutations of the said array:");
	result1.forEach(System.out::println);
    int[] nums2 = {1, 2, 3};
	System.out.println("\nOriginal array: "+Arrays.toString(nums2));
    List<List<Integer>> result2 = new solution().permute(nums2);
	System.out.println("\nPossible permutations of the said array:");
	result2.forEach(System.out::println);	
	  }

  public List<List<Integer>> permute(int[] nums) {
    List<List<Integer>> result = new ArrayList<>();
    Permutation(0, nums, result);
    return result;
  }

  private void Permutation(int i, int[] nums, List<List<Integer>> result) {
    if (i == nums.length - 1) {
      List<Integer> list = new ArrayList<>();
      for (int n : nums) list.add(n);
      result.add(list);
    } else {
      for (int j = i, l = nums.length; j < l; j++) {
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
        Permutation(i + 1, nums, result);
        temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
      }
    }
  }
}


// 69. Write a Java program to find minimum subarray sum of specified size in a given array of integers.   

// Example:
// Input :
// nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10}
// Output:
// Sub-array size: 4
// Sub-array from 0 to 3 and sum is: 10
import java.util.*;
class solution {

	public static int [] find_min_subarray_sum(int[] nums, int k)
	{
		int sub_arr_sum = 0;
		int min_sub_arr = Integer.MAX_VALUE;
		int last = 0;
		int[] result = new int[3];

		for (int i = 0; i < nums.length; i++)
		{
			sub_arr_sum += nums[i];

			if (i + 1 >= k)
			{
				if (min_sub_arr > sub_arr_sum)
				{
					min_sub_arr = sub_arr_sum;
					last = i;
				}

				sub_arr_sum -= nums[i + 1 - k];
			}
		}
		result[0] = last - k + 1;
		result[1] = last;
		result[2] = min_sub_arr;
		return result;		
	}

	public static void main(String[] args)
	{
		int[] nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10};
		int k = 4;
        System.out.printf("\nOriginal array: "+Arrays.toString(nums));
		System.out.printf("\nSub-array size: %d", k);
		int [] result = find_min_subarray_sum(nums, k);
		System.out.printf("\nSub-array from %d to %d and sum is: %d", result[0], result[1], result[2]);
	}
}


// 70. Write a Java program to find the smallest length of a contiguous subarray of which the sum is greater than or equal to specified value. Return 0 instead.   

// Example:
// Input :
// nums = {1, 2, 3, 4, 6}
// Output:
// Minimum length of a contiguous subarray of which the sum is 8, 2
import java.util.Arrays;
public class solution {
  public static void main(String[] args)
  {
    int[] nums = {1, 2, 3, 4, 6};
	int m_len = 8;
    int result = min_SubArray_length(8, nums);
	System.out.printf("\nOriginal array: "+Arrays.toString(nums));
	System.out.printf("\nMinimum length of a contiguous subarray of which the sum is %d, %d ",m_len, result);
  }

  public static int min_SubArray_length(int s, int[] nums) {
    int sum = 0, ctr = 0, min_len = Integer.MAX_VALUE;
    for (int i = 0, j = 0; j < nums.length; ) {
      if (nums[j] >= s) {
        return 1;
      } else {
        sum += nums[j];
        ctr++;
        if (sum >= s) {
          min_len = Math.min(min_len, ctr);
          while (j > i) {
            sum -= nums[i];
            ctr--;
            i++;
            if (sum < s) break;
            min_len = Math.min(min_len, ctr);
          }
        }
      }
      j++;
    }
    if (min_len == Integer.MAX_VALUE) {
      return 0;
    }
    return min_len;
  }
}


// 71. Write a Java program to form the largest number from a given list of non negative integers.   

// Example:
// Input :
// nums = {1, 2, 3, 0, 4, 6}
// Output:
// Largest number using the said array numbers: 643210
import java.util.*;
public class solution {
	
 public static String  largest_Numbers(int[] num) {
        String[] array_nums = Arrays.stream(num).mapToObj(String::valueOf).toArray(String[]::new);
        Arrays.sort(array_nums, (String str1, String str2) -> (str2 + str1).compareTo(str1 + str2));
        return Arrays.stream(array_nums).reduce((a, b) -> a.equals("0") ? b : a + b).get();
    }	
	
  public static void main(String[] args)
  {
    int[] nums = {1, 2, 3, 0, 4, 6};
	System.out.printf("\nOriginal array: "+Arrays.toString(nums));	
	System.out.printf("\nLargest number using the said array numbers: "+largest_Numbers(nums));
   }  
}


// 72. Write a Java program to find and print one continuous subarray (from a given array of integers) that if you only sort the said subarray in ascending order then the entire array will be sorted in ascending order.   

// Example:
// Input :
// nums1 = {1, 2, 3, 0, 4, 6}
// nums2 = { 1, 3, 2, 7, 5, 6, 4, 8}
// Output:
// Continuous subarray:
// 1 2 3 0
// Continuous subarray:
// 3 2 7 5 6 4
import java.util.Arrays;
public class solution {
public static int[] findUnsortedSubarray(int[] nums) {
			int[] result = new int[3];
            int n = nums.length;
            int start = -1;
            int end = -2;
            int min = nums[n - 1];
            int max = nums[0];
            for (int i = 1; i < n; i++) {
                max = Math.max(max, nums[i]);
                min = Math.min(min, nums[n - 1 - i]);
                if (nums[i] < max) {
                    end = i;
                }
                if (nums[n - 1 - i] > min) {
                    start = n - 1 - i;
                }
            }
           		result[0] = start;
		    result[1] = end;

			return result;
        }
    
  public static void main(String[] args)
  {
    int[] nums1 = {1, 2, 3, 0, 4, 6};
	System.out.printf("\nOriginal array: "+Arrays.toString(nums1));	

	int[] result1 = findUnsortedSubarray(nums1);
	System.out.printf("\nContinuous subarray:\n");
	for(int i=result1[0]; i<=result1[1]; i++){
        System.out.print(nums1[i] +" ");
        }
	
	int[] nums2 = { 1, 3, 2, 7, 5, 6, 4, 8};
	System.out.printf("\n\nOriginal array: "+Arrays.toString(nums2));	
    System.out.printf("\nContinuous subarray:\n"); 
	int[] result2 = findUnsortedSubarray(nums2);
	
	for(int i=result2[0]; i<=result2[1]; i++){
        System.out.print(nums2[i] +" ");
        }
   }  
}


// 73. Write a Java program to sort a given array of distinct integers where all its numbers are sorted except two numbers.   

// Example:
// Input :
// nums1 = { 3, 5, 6, 9, 8, 7 }
// nums2 = { 5, 0, 1, 2, 3, 4, -2 }
// Output:
// After sorting new array becomes: [3, 5, 6, 7, 8, 9]
// After sorting new array becomes: [-2, 0, 1, 2, 3, 4, 5]
import java.util.Arrays;

class solution
{
	private static int [] sort_Array(int[] nums)
	{
		int x = -1, y = -1;
		int prev = nums[0];

		for (int i = 1; i < nums.length; i++)
		{
			if (prev > nums[i])
			{
				if (x == -1) {
					x = i - 1;
					y = i;
				}
				else {
					y = i;
				}
			}
			prev = nums[i];
		}

		swap_nums(nums, x, y);
		return nums;
	}

	private static void swap_nums(int[] a, int i, int j) {
		int temp_val = a[i];
		a[i] = a[j];
		a[j] = temp_val;
	}

	public static void main(String[] args)
	{
		int[] nums1 = { 3, 5, 6, 9, 8, 7 };
        System.out.println("\nOriginal array: "+Arrays.toString(nums1));
		int[] result1 = sort_Array(nums1);
		System.out.println("\nAfter sorting new array becomes: "+Arrays.toString(result1));
		int[] nums2 = { 5, 0, 1, 2, 3, 4, -2 };
        System.out.println("\nOriginal array: "+Arrays.toString(nums2));
		int[] result2 = sort_Array(nums2);
		System.out.println("\nAfter sorting new array becomes: "+Arrays.toString(result2));
	}
}


// 74. Write a Java program to find all triplets equal to a given sum in a unsorted array of integers.   

// Example:
// Input :
// nums = { 1, 6, 3, 0, 8, 4, 1, 7 }
// Output:
// Triplets of sum 7
// (0 1 6)
// (0 3 4)
import java.util.Arrays;

	class solution {
	
		public static void find_and_print_all_Triplets(int[] nums, int sum, int alen)
		{
		System.out.println("\nTriplets of sum "+sum);
		for (int i = 0; i <= alen - 3; i++)
			{
				int k = sum - nums[i];
				int l_index = i + 1, h_index = nums.length - 1;
	
				while (l_index < h_index)
				{
					if (nums[l_index] + nums[h_index] < k) {
						l_index++;
					}
	
				else if (nums[l_index] + nums[h_index] > k) {
						h_index--;
					}
	
					else {
						System.out.println("(" + nums[i] + " " + nums[l_index] + " " + nums[h_index] + ")");
						l_index++;
						h_index--;
					}
				}
			}
		}
		public static void main(String[] args)
		{
			int[] nums = { 1, 6, 3, 0, 8, 4, 1, 7 };
			int alen = nums.length;
			System.out.println("\nOriginal array: "+Arrays.toString(nums));
			// sort the array in ascending order
			Arrays.sort(nums);
			int sum = 7;
	
			find_and_print_all_Triplets(nums, sum, alen);
		}
	}