// 1. Write a C++ program to find the largest element of a given array of integers. 

#include<iostream>
using namespace std;
int find_largest(int nums[], int n) {
  return *max_element(nums, nums + n);
}

int main() {
  int nums[] = {5,4,9,12,8};
  int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Original array:";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    
  cout << "\nLargest element of the said array: "<< find_largest(nums, n);
  return 0;
}

// 2. Write a C++ program to find the largest three elements in an array. 

#include<iostream>
using namespace std;

void three_largest(int arr[], int arr_size)
  {
   int i, first, second, third;
  
    if (arr_size < 3)
    {
        cout << "Invalid Input";
    }
  
    third = first = second = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] > third)
            third = arr[i];
    }
  
      cout << "\nThree largest elements are: " <<first <<", "<< second <<", "<< third;
}
int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
   three_largest(nums, n);
    return 0;
}

// 3. Write a C++ program to find second largest element in an given array of integers. 

#include<iostream>
using namespace std;
void second_largest(int nums[], int arr_size)
  {
   int i, first_element, second_element;
 
    /* There should be atleast two elements */
    if (arr_size < 2)
    {
        cout<< " Invalid Input ";
        return;
    }
 
    first_element = second_element = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
  
        if (nums[i] > first_element)
        {
            second_element = first_element;
            first_element = nums[i];
        }
 

        else if (nums[i] > second_element && nums[i] != first_element)
        {
            second_element = nums[i];
        }
    }
    if (second_element == INT_MIN)
     {
        cout<< "No second largest element";
     }
    else
     { 
        cout<< "\nThe second largest element is: " <<second_element;
     }
}



int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
   second_largest(nums, n);
    return 0;
}

// 4. Write a C++ program to find k largest elements in a given array of integers. 

#include<iostream>
using namespace std;
 void kLargest(int nums[], int n, int k)
{
   sort(nums, nums+n, greater<int>());
    cout << "\nLargest " << k << " Elements: ";
    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";
}
 
int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    int k = 4;
    kLargest(nums, n, k);
}

// 5. Write a C++ program to find the second smallest elements in a given array of integers. 

#include <iostream>
using namespace std;
int find_Second_Smallest(int array_num[], int n) {
  int smallest_num, second_smallest_num;
  if (array_num[0] < array_num[1]) {
    smallest_num = array_num[0];
    second_smallest_num = array_num[1];
  } else {
    smallest_num = array_num[1];
    second_smallest_num = array_num[0];
  }
for (int i = 0; i < n; i++) {
if (smallest_num > array_num[i]) {
second_smallest_num = smallest_num;
smallest_num = array_num[i];
} else if (array_num[i] < second_smallest_num && array_num[i] > smallest_num) {
second_smallest_num = array_num[i];
}
}
  return second_smallest_num;
}
int main() {
  int n = 7;
  int array_num[7] = {5,6,7,2,3,4,12};
  int s = sizeof(array_num) / sizeof(array_num[0]);
    cout << "Original array: ";
    for (int i=0; i < s; i++)
    cout << array_num[i] <<" ";
  int second_smallest_num = find_Second_Smallest(array_num, n);
  cout<<"\nSecond smallest number: "<<second_smallest_num;
  return 0;
}

// 6. Write a C++ program to find all elements in array of integers which have at-least two greater elements. 

#include<iostream>
using namespace std;
 
void find_greater_elements(int nums[], int n)
{
    cout << "\nElements which have at-least two greater elements: ";
    for (int i=0; i<n; i++)
    {
        int ctr = 0;
        for (int j=0; j<n; j++)
            if (nums[j] > nums[i])
                ctr++;
 
        if (ctr >= 2)
            cout << nums[i] << " ";
    }
}
 

int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
   find_greater_elements(nums, n);
    return 0;
}

// 7. Write a C++ program to find the most occurring element in an array of integers. 

#include<iostream>
using namespace std;

void most_occurred_number(int nums[], int size)
{
  int max_count = 0;
  cout << "\nMost occurred number: ";
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max_count)
      max_count = count;
  }

  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==max_count)
       cout << nums[i] << endl;
  }
 }
 
int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    most_occurred_number(nums, n);
}

// 8. Write a C++ program to find the next greater element of every element of a given array of integers. Ignore those elements which have no greater element. 

#include<iostream>
using namespace std;

void next_greater(int nums[], int n)
{
    stack<int> data_stack;
 
    data_stack.push(nums[0]);
 
   for (int i=1; i<n; i++)
    {
        int next_element = nums[i];
 
        if (data_stack.empty() == false)
        {
            int array_element = data_stack.top();
            data_stack.pop();
 
         while (array_element < next_element)
            {
                cout << array_element << ": " << next_element
                     << endl;
                if (data_stack.empty() == true)
                   break;
                array_element = data_stack.top();
                data_stack.pop();
            }
 
           if (array_element > next_element)
                data_stack.push(array_element);
           }
 
          data_stack.push(next_element);
         }
 
     } 
int main()
{
    int nums[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    cout << "\nNext Greater Element:\n";
    next_greater(nums, n);
}

// 9. Write a C++ program to sort a given unsorted array of integers, in wave form. 
// Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . .

#include<iostream>
#include<algorithm>
using namespace std;
 
void swap_elements(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
void array_wave(int nums[], int n)
{
    sort(nums, nums+n);
 
    for (int i=0; i<n-1; i += 2)
        swap_elements(&nums[i], &nums[i+1]);
}
 
int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    array_wave(nums, n);
    cout << "\nWave form of the said array: ";
    for (int i=0; i<n; i++)
       cout << nums[i] << " ";
    return 0;
}

// 10. Write a C++ program to find the smallest element missing in a sorted array. 

#include<iostream>
#include<algorithm>
using namespace std;

int smalest_missing_num(int nums[], int start_pos, int end_pos)
{
    if (start_pos  > end_pos)
        return end_pos + 1;
 
    if (start_pos != nums[start_pos])
        return start_pos;
 
    int mid = (start_pos + end_pos) / 2;
 
    if (nums[mid] == mid)
        return smalest_missing_num(nums, mid + 1, end_pos);
 
    return smalest_missing_num(nums, start_pos, mid);
}
 
int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int result;
	int n = sizeof(nums)/sizeof(nums[0]);
	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    result = smalest_missing_num(nums, 0, n-1);
    cout << "\nSmallest missing element is " << result;
  return 0;     
}

// 11. Write a C++ program to update every array element by multiplication of next and previous values of a given array of integers. 

#include<iostream>
using namespace std;
 
void replace_elements(int nums[], int n)
{
    if (n <= 1)
      return;
 
    int prev_element = nums[0];
    nums[0] = nums[0] * nums[1];
 
    for (int i=1; i<n-1; i++)
    {
        int curr_element = nums[i];
 
        nums[i] = prev_element * nums[i+1];
 
        prev_element = curr_element;
    }
 
    nums[n-1] = prev_element * nums[n-1];
    }
 
int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    replace_elements(nums,n);
    cout << "\nNew array elements: ";
    for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
  return 0;     

}

// 12. Write a C++ program to rearrange the elements of a given array of integers in zig-zag fashion way. 
// Note: The format zig-zag array in form a < b > c < d > e < f.

#include<iostream>
using namespace std;
 
void zig_zag_array(int nums[], int n)
{
    bool ans = true;
 
    for (int i=0; i<=n-2; i++)
    {
        if (ans) 
        {
            if (nums[i] > nums[i+1])
                swap(nums[i], nums[i+1]);
        }
        else  
        {
            if (nums[i] < nums[i+1])
                swap(nums[i], nums[i+1]);
        }
        ans = !ans; 
    }
}
 
int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    zig_zag_array(nums, n);
    cout << "\nNew array elements: ";
    for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
  return 0;     
}

// 13. Write a C++ program to separate even and odd numbers of an array of integers. Put all even numbers first, and then odd numbers. 

#include<iostream>
using namespace std;
 
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void segregateEvenOdd(int nums[], int size)
{
    int left_num = 0, right_num = size-1;
    while (left_num < right_num)
    {
         while (nums[left_num]%2 == 0 && left_num < right_num)
            left_num++;
 
        while (nums[right_num]%2 == 1 && left_num < right_num)
            right_num--;
 
        if (left_num < right_num)
        {
            swap(&nums[left_num], &nums[right_num]);
            left_num++;
            right_num--;
        }
    }
}
 
int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    segregateEvenOdd(nums, n);
 
    printf("\nArray after divided: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
     }

// 14. Write a C++ program to separate 0s and 1s from a given array of values 0 and 1. 

#include<iostream>
using namespace std;
 

void segregateEvenOdd(int nums[], int n)
{
    int ctr = 0;  
 
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0)
            ctr++;
    }
 
   for (int i = 0; i < ctr; i++)
        nums[i] = 0;
 
   for (int i = ctr; i < n; i++)
        nums[i] = 1;
}
 
int main()
{
    int nums[] = {0, 1, 0, 0 , 1, 1, 1, 0, 1, 0};
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    segregateEvenOdd(nums, n);
 
    printf("\nArray after divided: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;     
}

// 15. Write a C++ program to rearrange a given sorted array of positive integers . 
// Note: In final array, first element should be maximum value, second minimum value, third second maximum value , fourth second minimum value, fifth third maximum and so on.

#include <iostream>
using namespace std;
 
void rearrange_max_min(int nums[], int n)
{
    int temp[n];
    int small_num=0, large_num=n-1;
    int result = true;
 
    for (int i=0; i<n; i++)
    {
        if (result)
            temp[i] = nums[large_num--];
        else
            temp[i] = nums[small_num++];
 
        result = !result;
    }
 
     for (int i=0; i<n; i++)
        nums[i] = temp[i];
}
 
int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10}; 
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    rearrange_max_min(nums, n);
 
    printf("\nArray elements after rearranging: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
     
}

// 16. Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all 0s first, then all 1s and all 2s in last. 

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort_012_num(int nums[], int n)
{
    int i = 0;
    int j = n - 1;
    int mid_num = 0;
 
    while (mid_num <= j)
    {
        switch (nums[mid_num])
        {
        case 0:
            swap(&nums[i++], &nums[mid_num++]);
            break;
        case 1:
            mid_num++;
            break;
        case 2:
            swap(&nums[mid_num], &nums[j--]);
            break;
        }
    }
}
 
 
int main()
{
    int nums[] = {0, 1, 2, 2, 1, 1, 0, 0, 1}; 
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    sort_012_num(nums, n);
 
    printf("\nArray elements after rearranging: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
      }

// 17. Write a C++ program to sort (in descending order) an array of distinct elements according to absolute difference of array elements and with a given value. 

#include <iostream>
using namespace std;

void rearrange_array_elements(int nums[], int n, int x)
{
    multimap<int, int> m;
 
    for (int i = 0 ; i < n; i++)
        m.insert(make_pair(abs(x-nums[i]),nums[i]));

    int i = 0;
    for (auto t = m.begin(); t != m.end(); t++)
        nums[i++] = (*t).second ;
}
 
 
int main()
{
    int nums[] = {0, 9, 7, 2, 12, 11, 20}; 
    int n = sizeof(nums)/sizeof(nums[0]);
   cout << "Original array: ";
   int x = 12;
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    rearrange_array_elements(nums, n, x);
 
    printf("\nArray elements after rearrange: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
      
}

// 18. Write a C++ program to move all negative elements of an array of integers to the end of the array without changing the order of positive element and negative element. 

#include <iostream>
using namespace std;

void segregateElements(int nums[], int n)
{
    // Array to store result
    int result[n];

    int j = 0; // index of result
    for (int i = 0; i < n ; i++)
        if (nums[i] >= 0 )
            result[j++] = nums[i];
    if (j == n || j == 0)
        return;
 
    for (int i = 0 ; i < n ; i++)
        if (nums[i] < 0)
            result[j++] = nums[i];
 
    // Copy contents to nums[]
    memcpy(nums, result, sizeof(result));
} 
 
int main()
{
    int nums[] = {0, 9, -7, 2, -12, 11, -20}; 
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
     segregateElements(nums, n);
 
    printf("\nArray elements after rearrange: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
      
}

// 19. Write a C++ program to find a number which occurs odd number of times of a given array of positive integers. In the said array all numbers occur even number of times. 

#include <iostream>
using namespace std;

int getOddOccurrence(int nums[], int n)
{
    for (int i = 0; i < n; i++) {
         
        int ctr = 0;
         
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
                ctr++;
        }
        if (ctr % 2 != 0)
            return nums[i];
    }
    return -1;
}
 
int main()
{
    int nums[] = {5, 7, 8, 8, 5, 8, 7, 7}; 
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
         cout << "\nNumber which occurs odd number of times: " << getOddOccurrence(nums, n);
 
        return 0;
    }

// 20. Write a C++ program to count the number of occurrences of given number in a sorted array of integers. 

#include <iostream>
using namespace std;

int count_occurrences(int arr[], int n, int x)
{
    int result = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          result++;
    return result;
}
 
int main()
{
    int nums[] = {5, 7, 8, 8, 5, 8, 7, 7}; 
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    int x = 7;
    cout <<"\nNumber of occurrences of 7 : " << count_occurrences(nums, n, x);
    return 0;
    }

// 21. Write a C++ program to find the two repeating elements in a given array of integers. 

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 5, 5, 7, 8, 8, 9, 9, 2}; 
    int i, j;
    int size = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (i = 0; i < size; i++) 
    cout << nums[i] <<" ";
    cout  << "\nRepeating elements: ";
    for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(nums[i] == nums[j])
        cout <<  nums[i] << " ";
       
    return 0;
 
   }

// 22. Write a C++ program to find the missing element from two given arrays of integers except one element. 

#include <iostream>
using namespace std;
 
int findMissing(int array1[], int array2[], int s1, int s2)
{
    int result = 0;
    for (int i=0; i<s1; i++)
       result = result^array1[i];
    for (int i=0; i<s2; i++)
       result = result^array2[i];
 
    return result;
}
int main()
{
    int array1[] = {3, 1, 5, 7, 9};
    int array2[] = {3, 7, 5, 9};
     int mn;
     int s1 = sizeof(array1) / sizeof(array1[0]);
    int s2 = sizeof(array2) / sizeof(array2[0]);
        if (s1 != s2-1 && s2 != s1-1)
    {
        cout << "Invalid Input";
        return 0;
    }
    
    cout << "Original arrays: ";
    
    cout << "\nFirst array: ";
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    cout << "\nSecond array: ";
    for (int i=0; i < s2; i++) 
    cout << array2[i] <<" ";
    
    mn = findMissing(array1, array2, s1, s2);
    cout <<"\nMissing number: " << mn;
    return 0; 
}

// 23. Write a C++ program to find the element that appears once in an array of integers and every other element appears twice. 

#include <iostream>
using namespace std;
 
int search_single_element(int array1[], int s1)
    {
        int result = array1[0];
        for (int i = 1; i < s1; i++)
            result = result ^ array1[i];
 
        return result;
    }


int main()
{
    int array1[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};
    int se;
 
    int s1 = sizeof(array1) / sizeof(array1[0]);
    
    cout << "Original array: ";
    
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    se = search_single_element(array1, s1);
    cout <<"\nSingle element: " << se;
    return 0; 
}

// 24. Write a C++ program to find the first repeating element in an array of integers. 

#include<iostream>
using namespace std;
 int first_repeating_element(int array1[], int s1)
{
    int min_val = -1;
 
    set<int> result;
 
    for (int i = s1 - 1; i >= 0; i--)
    {
        if (result.find(array1[i]) != result.end())
            min_val = i;
 
        else   
            result.insert(array1[i]);
    }
 
    if (min_val != -1)
        return array1[min_val];
    else
        return 0;
}

int main()
{
    int array1[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};
    int fre;
 
    int s1 = sizeof(array1) / sizeof(array1[0]);
    
    cout << "Original array: ";
    
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    fre = first_repeating_element(array1, s1);
    cout <<"\nFirst repeating  element: " << fre;
    return 0; 
}

// 25. Write a C++ program to find and print all common elements in three sorted arrays of integers. 

#include <iostream>
using namespace std;
int main()
{
    int array1[] = {1, 5, 7, 8, 9, 11};
    int array2[] = {6, 8, 10, 11, 12, 16};
    int array3[] = {1, 3, 5, 6, 8, 10, 11, 17}; 
    
    int s1 = sizeof(array1)/sizeof(array1[0]);
    int s2 = sizeof(array2)/sizeof(array2[0]);
    int s3 = sizeof(array3)/sizeof(array3[0]);
    
    cout << "Original arrays: ";
    cout << "\nArray1: ";
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    cout << "\nArray2: ";
    for (int i=0; i < s2; i++) 
    cout << array2[i] <<" ";
    cout << "\nArray3: ";
    for (int i=0; i < s3; i++) 
    cout << array3[i] <<" ";
    cout <<"\nCommon elements of the said sorted arrays: ";
    int i = 0, j = 0, k = 0;
   while (i < s1 && j < s2 && k < s3)
    {
        if (array1[i] == array2[j] && array2[j] == array3[k])
         {  
             cout << array1[i] << " ";   
			 i++;
			 j++; 
			 k++;
		 }
 
        else if (array1[i] < array2[j])
             i++;
 
        else if (array2[j] < array3[k])
             j++;
 
        else
             k++;
    }
    return 0; 
}

// 26. Write a C++ program to find and print all unique elements of a given array of integers. 

#include <iostream>
using namespace std;


int main()
{
    int array1[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int s1 = sizeof(array1)/sizeof(array1[0]);

    cout << "Original array: ";
    
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    cout <<"\nUnique elements of the said array: ";
    for (int i=0; i<s1; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (array1[i] == array1[j])
               break;
         if (i == j)
          cout << array1[i] << " ";
    }
    return 0; 
}

// 27. Write a C++ program to find the number of pairs of integers in a given array of integers whose sum is equal to a specified number. 

#include <iostream>
using namespace std;
int main()
{
    int array1[] = {1, 5, 7, 5, 8, 9, 11, 12};
    int s1 = sizeof(array1)/sizeof(array1[0]);

    cout << "Original array: ";
    
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    int i, sum = 12, ctr = 0;
    cout <<"\nArray pairs whose sum equal to 12: ";
    
    for (int i=0; i<s1; i++)
        for (int j=i+1; j<s1; j++)
            if (array1[i]+array1[j] == sum)
              {
                cout << "\n" << array1[i] << "," << array1[j];
                ctr++;
              }
 
    cout <<"\nNumber of pairs whose sum equal to 12: ";
    cout << ctr;
    
    return 0; 
}

// 28. Write a C++ program to arrange the numbers of a given array in a way that the sum of some numbers equal the largest number in the array. 

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string array_addition_1(int* arr, const size_t array_size) {
  if (array_size < 2)
    return "False";

  sort(arr, arr + array_size);

  const int max_number{arr[array_size - 1]};

  const bool negative_numbers{arr[0] < 0};

  do {
    int latest_sum{};

    for (size_t i{}; i < array_size - 1; i++) {
      latest_sum += arr[i];

      if (max_number == latest_sum)
        return "True";
      if (!negative_numbers && latest_sum > max_number)
        break;
    }

  } while (next_permutation(arr, arr + array_size - 1));

  return "False";
}

int main() {
  int nums1[] = {3, 5, 22, 10, 1, 3};
  cout << '\n' << array_addition_1(nums1, sizeof(nums1) / sizeof(nums1[0])); // "true" 3 + 5 + 10 + 1 + 3 = 22
  int nums2[] = {4, 6, 15, 0, 1};
  cout << '\n' << array_addition_1(nums2, sizeof(nums2) / sizeof(nums2[0])); //  "false"
  int nums3[] = {2, 6, -1, 8, 1};
  cout << '\n' << array_addition_1(nums3, sizeof(nums3) / sizeof(nums3[0])); // "true" 2 + 6 - 1 + 1 = 8 
  int nums4[] = {2, 2, 4, 6, 7};
  cout << '\n' << array_addition_1(nums4, sizeof(nums4) / sizeof(nums4[0]));  // "false"
  int nums5[] = {1, 1, 1, 1, 1, 0, 5};
  cout << '\n' << array_addition_1(nums5, sizeof(nums5) / sizeof(nums5[0])); // "true" 1 + 1 + 1 + 1 + 1 = 5
  return 0;
}


// 29. Write a C++ program to find the second lowest and highest numbers in a given array. 

#include <iostream>
#include <string>

using namespace std;

void Second_highest_lowest(int array_nums[], int array_size) {

	if (array_size == 2)
	{
		if (array_nums[0] < array_nums[1])
		{
			cout << array_nums[0] << " " << array_nums[1];
		}
		else
		{
			cout << array_nums[1] << " " << array_nums[0];
		}
	}
	else
	{
		bool flag;
		int temp;

		do
		{
			flag = false;

			for (int x = 0; x < array_size - 1; x++)
			{
				if (array_nums[x] > array_nums[x + 1])
				{
					temp = array_nums[x];
					array_nums[x] = array_nums[x + 1];
					array_nums[x + 1] = temp;
					flag = true;
				}
			}
		} while (flag);

		int index = 0;
		int index2 = array_size - 1;
		for (int y = 0; y < array_size-1; y++)
		{
			if (array_nums[y] == array_nums[y + 1])
			{
				index++;
			}
			else
			{
				break;
			}
		}
	
		for (int z = array_size - 1; array_size > 0; z--)
		{
			if (array_nums[z] == array_nums[z - 1])
			{
				index2--;
			}
			else
			{
				break;
			}
		}
		cout << "\nSecond lowest number  of the said array: " << array_nums[index+1]; 
		cout << "\nSecond highest NUmber of the said array: " << array_nums[index2-1];
	}
}

int main() {

	int nums1[] = { 1, 12, 122, 9 };
    int size_A = sizeof(nums1)/sizeof(nums1[0]);
	cout <<"Array elements: ";
	for (int i = size_A - 1; i >= 0; i--) 
    cout << nums1[i] << " ";
    Second_highest_lowest(nums1, size_A );
	cout << endl;
	
	int nums2[] = { 1, 12, 12, 9 };
	size_A = sizeof(nums2)/sizeof(nums2[0]);
	cout <<"\nArray elements: ";
	for (int i = size_A - 1; i >= 0; i--) 
    cout << nums2[i] << " ";
    Second_highest_lowest(nums2, size_A );
	cout << endl;
	
	int nums3[] = { 1, 12, 12, 9, 9, 5, 5 };
	size_A = sizeof(nums3)/sizeof(nums3[0]);
	cout <<"\nArray elements: ";
	for (int i = size_A - 1; i >= 0; i--) 
    cout << nums3[i] << " ";
    Second_highest_lowest(nums3, size_A );
	cout << endl;
	
	int nums4[] = { 9, 9 , 9, 9, 9 };
	size_A = sizeof(nums3)/sizeof(nums4[0]);
	cout <<"\nArray elements: ";
	for (int i = size_A - 1; i >= 0; i--) 
    cout << nums4[i] << " ";
    Second_highest_lowest(nums4, size_A );
	cout << endl;
	
	return 0;

}
