/*
Kth Smallest element in a row-wise and column-wise sorted 2-D array:
 Algorithm:
 1)Build a min heap of elements from the first row. A heap entry also stores the row and column number
 2)Do the following k times:
 a)Get minimum element (root) from the min heap
 b)Find the row number and column number of the min element
 c)Replace the root with the next element from the same column and min-heapify the root.
 3.Return the last extracted root
 
 Time complexity:
 Building a heap takes O(n) time
 Heapify operation k times takes O(klogn) time
 Overall complexity is O(n+klogn)
 
 
 */
#include<iostream>
#include<vector>

using namespace std;
//Structure to store the heap entry. Every heap entry has an associated value, row number and a column number
struct HeapNode{
    int val;
    int row;
    int column;
};

//Function to swap the two heap nodes
void swap(HeapNode *x, HeapNode *y)
{
    HeapNode z=*x;
    *x=*y;
    *y=z;
}

//Utility function to min-heapify the node harr[i] of a heap stored in harr[]
void minHeapify(HeapNode harr[], int i, int heap_size)
{
    int l=i*2+1;
    int r=i*2+2;
    int smallest=i;
    if(l<heap_size && harr[l].val<harr[i].val)
    {
        smallest=l;
    }
    if(r<heap_size && harr[r].val<harr[smallest].val)
    {
        smallest=r;
    }
    if(smallest!=i)
    {
        swap(&harr[i],&harr[smallest]);
        minHeapify(harr, smallest, heap_size);
    }
}

//Utility function to convert harr[] to a max heap
void buildHeap(HeapNode harr[], int n)
{
    int i=(n-1)/2;
    while(i>=0)
    {
        minHeapify(harr, i, n);
        i--;
    }
}

int kthSmallest(int mat[4][4],int n, int k)
{
    //k must be greater than 0 and less than n*n
    if(k<0 || k>n*n)
    {
        return INT_MAX;
    }
    //Create a min heap of elements from the first row of 2Darray
    HeapNode harr[n];
    for(int i=0;i<n;i++)
    {
        harr[i]={mat[0][i],0,i};
    }
    buildHeap(harr,n);
    
    HeapNode hr;
    for(int i=0;i<k;i++)
    {
        //Get current heap node
        hr=harr[0];
        
        //Get next value from the column of the root element. If the value stored at the root
        //was the last element in the column, the assign INFINITE as the next value
        int next_val=(hr.row<(n-1))? mat[hr.row+1][hr.column]:INT_MAX;
        
        //Update heap root with the next value
        harr[0]={next_val,(hr.row)+1,hr.column};
        
        //Heapify root
        minHeapify(harr, 0, n);
    }
    return hr.val;
}
int main()
{
    int mat[4][4]={{10,24,30,40},{21,25,35,45},{26,29,37,48},{32,33,39,50}};
    cout <<"5th smallest element is:"<<kthSmallest(mat, 4, 5)<<endl;
        
        
    return 0;
}
