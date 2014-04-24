/* Segregate Even and Odd numbers
Given an array A[], write a function that segregates even and odd numbers. The functions should put all even numbers first, and then odd numbers.
 
 Example
 Input = {12, 34, 45, 9, 8, 90, 3}
 Output = {12, 34, 8, 90, 45, 9, 3}
 
 Algorithm: segregateEvenOdd()
 1) Initialize two index variables left and right:
 left = 0,  right = size -1
 2) Keep incrementing left index until we see an odd number.
 3) Keep decrementing right index until we see an even number.
 4) If lef < right then swap arr[left] and arr[right]
 
*/

#include<stdio.h>

/* Function to swap *a and *b */
void swap(int *a, int *b);

void segregateEvenOdd(int arr[], int size)
{
    /* Initialize left and right indexes */
    int left = 0, right = size-1;
    while(left < right)
    {
        /* Increment left index while we see 0 at left */
        while(arr[left]%2 == 0 && left < right)
            left++;
        
        /* Decrement right index while we see 1 at right */
        while(arr[right]%2 == 1 && left < right)
            right--;
        
        if(left < right)
        {
            /* Swap arr[left] and arr[right]*/
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}

/* UTILITY FUNCTIONS */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* driver program to test */
int main()
{
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int arr_size = 7, i = 0;
    
    segregateEvenOdd(arr, arr_size);
    
    printf("array after segregation ");
    for(i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
