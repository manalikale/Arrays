/*Search for an element in a row-wise and column-wise sorted matrix
 
 The above approach will also work for m x n matrix (not only for n x n). 
 Complexity would be O(m + n).
 
 Algo:
 1) Start with top right element
 2) Loop: compare this element e with x
i) if they are equal then return its position
ii) e < x then move it to down (if out of bound of matrix then break return false)
iii) e > x then move it to left (if out of bound of matrix then break return false)
 3) repeat the i), ii) and iii) till you find element or returned false
 */

#include<iostream>
#define ROW 4
#define COL 4

int search(int mat[ROW][COL], int n, int x)
{
    int i=0;
    int j=n-1;//Set index for the top right element
    while(i<n && j>=0)
    {
        if(mat[i][j]==x)
        {
            std::cout<<"Found at"<<" "<<i<<","<<j<<std::endl;
            return 1;
        }
        if(mat[i][j]>x)//element to be searched is smaller than the current element in the matrix, so move left
        {
            j--;
        }
        else//element to be searched is greater than the current element in the matrix, so move down
        {
            i++;
        }
    }
    std::cout<<"Element not found";
    return 0;
}

int main()
{
    int mat[4][4] = { {10, 20, 30},
        {15, 25, 35},
        {27, 29, 37},
        {32, 33, 39},
    };
    search(mat, 3, 35);
    return 0;
}
