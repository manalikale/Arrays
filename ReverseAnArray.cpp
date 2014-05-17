
/*
Reverse an array of n elements
 Iterative way:
 1.Initialize the start and end indices i.e. start=0 and end=n-1
 2.In a loop swap arr[start] and arr[end] and change start and end as follows:
 start=start+1;
 end=end-1;
 Time complexity:
 Overall complexity is O(n)

 */
#include<iostream>
#include<vector>

using namespace std;

void printArray(int arr[], int size);

void reverseArray(int arr[], int start, int end);

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<' ';
}

void reverseArray(int arr[], int start, int end)
{
    int temp;
    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverseArray(arr, 0, 6);
    printArray(arr, 7);
    getchar();
    return 0;
}
