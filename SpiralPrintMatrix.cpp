#include <stdio.h>
#define R 2
#define C 6

void spiralPrint(int row_end, int col_end, int a[R][C])
{
    int i=0;
    int row_start=0;
    int col_start=0;
    
    
    
    while(row_start < row_end&& col_start < col_end)
    {
        //Print first row from remaining rows
        for (i = col_start; i < col_end; ++i)
        {
            printf("%d ", a[row_start][i]);
        }
        row_start++;
        
       //Print the last column from remaining col
        for (i = row_start; i < row_end; ++i)
        {
            printf("%d ", a[i][col_end-1]);
        }
        col_end--;
        
       //Print the last row from the remaining rows
        if ( row_start < row_end)
        {
            for (i = col_end-1; i >= col_start; --i)
            {
                printf("%d ", a[row_end-1][i]);
            }
            row_end--;
        }
        
        //Print the last column from the remaining columns
        if (col_start < col_end)
        {
            for (i = row_end-1; i >= row_start; --i)
            {
                printf("%d ", a[i][col_start]);
            }
            col_start++;
        }
    }
}

/* Driver program to test above functions */
int main()
{
    int a[R][C] = { {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12}
    };
    
    spiralPrint(R, C, a);
    return 0;
}
