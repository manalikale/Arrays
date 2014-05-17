/* Rotate a image by 90 degrees
 
 Algo: Swap layer by layer: Start from the outermost leayer and move to the innermost layer
 
1. store the top element in a temp
 2.store left in top
 3. store bottom in left
 4.store right in bottom
 5.restore top(temp) into right
 
 Time:O(n^2) since we have to touch all the n2 elements
 
 */


#include<iostream>
#include<vector>


using namespace std;
void rotate(vector<vector<int>>& matrix)
{
    size_t size=matrix.size();
    for(int layer=0;layer<size/2;++layer)
    {
        int first=layer;
        int last=size-1-layer;
        for(int i=first;i<last;++i)
        {
            int offset=i-first;
            
            //save top
            int top=matrix[first][i];
            
            //save left->top
            matrix[first][i]=matrix[last-offset][first];
            
            //save bottom->left
            matrix[last-offset][first]=matrix[last][last-offset];
            
            //save right->bottom
            matrix[last][last-offset]=matrix[i][last];
            
            //top->right
            matrix[i][last]=top;
        }
    }
    
}
int main()
{
    vector<vector<int>> matrix = { { 1, 2, 3,4,5},
        { 6,7,8,9,10 }, {11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
    rotate(matrix);
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }
}
