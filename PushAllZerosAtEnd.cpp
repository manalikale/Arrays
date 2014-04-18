/*Algorithm
Push all Zeros to the end of an array

1.Traverse the entire array from left to right
2.Keep track of the non-zero numbers and maintain their count in a variable 'count'
3.If the number is non-zero, put the number at arr[count] i.e. arr[count]=arr[i] and increment the count
4.After the traversal, all the non-zero elements are already at the beginning of the array and now we need to 
use 'count' as the first index of 0
5. Run a while loop till the end of the array, to make all the elements 0

*/

#include<iostream>
#include<vector>

using namespace std;


void pushZerosAtEnd(std::vector<int>&vect)
{
    int count=0;
    for(int i=0; i<vect.size();i++)
    {
        if(vect[i]!=0)
        {
            vect[count++]=vect[i];
        }
    }
    while(count<vect.size())
    {
        vect[count++]=0;
    }
}


int main()
{
    std::vector<int> vect = {1,0,9,8,0,0,7};
    pushZerosAtEnd(vect);
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    }
    return 0;
}
