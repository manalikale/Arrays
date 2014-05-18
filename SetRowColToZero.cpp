/* 
 
 Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0.
 
 Algo: Maintain a second matrix that marks the row and column that have a zero present in them. The second pass is then used to set all the elements in that particular row or column to zero
 
 */


#include<iostream>
#include<vector>


using namespace std;
void setZero(vector<vector<int>>& matrix)
{
    
    size_t row_len=matrix.size();
    size_t col_len=matrix[0].size();
    
    vector<int> row(row_len,1);
    vector<int>col(col_len,1);
    
    //Store the row and column index with value 0
    for(int i =0;i<row_len;i++)
    {
        for(int j=0;j<col_len;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=0;
                col[j]=0;
            }
        }
    }
    
    //Set the vect[i][j] as 0 if either row or column has a zero
    for(int i=0;i<row_len;i++)
    {
        for(int j=0;j<col_len;j++)
        {
            if(row[i]==0 || col[j]==0)
            {
                matrix[i][j]=0;
            }
        }
    }
    
}
int main()
{
    vector<vector<int>> matrix = { { 0, 2, 3,4,5},
        { 6,7,8,0,10 }, {11,12,13,14,15},{16,17,18,19,20},{21,22,20,24,25} };
    setZero(matrix);
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }
}
