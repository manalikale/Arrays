
/*
Rotate an array by d elements
 Time complexity:
 Overall complexity is O(n)

 */
#include<iostream>
#include<vector>

using namespace std;

void printArray(int arr[], int size);

void reverseArray(int arr[], int start, int end);

void leftRotate(int arr[], int d, int n)
{
    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
    reverseArray(arr, 0, n-1);
}


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
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    getchar();
    return 0;
}
