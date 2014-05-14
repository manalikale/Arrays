
/*
Samllest Sum Contiguous Subarray
 Time complexity:
 Overall complexity is O(n)
 
 
 */
#include<iostream>
#include<vector>

using namespace std;

int minSumSubArray(std::vector<int>vect)
{
    int left=0;
    int right=0;
    int sum=INT_MAX;
    int currentMinSum=0;
    int minLeft=0;
    int minRight=0;
    for(int i=0;i<vect.size();i++)
    {
        currentMinSum+=vect[i];
        if(currentMinSum<sum)
        {
            sum=currentMinSum;
            right=i;
            minLeft=left;
            minRight=right;
        }
        if(currentMinSum>0)
        {
            left=i+1;
            right=left;
            currentMinSum=0;
        }
    }
    cout<<"Min contiguous subarray is:"<<endl;
    for(int i=minLeft;i<=minRight;i++)
    {
        cout<<vect[i]<<' ';
    }
    cout<<'\n';
    cout<<"Sum is:"<<endl;
    return sum;
}

int main()
{
    std::vector<int>vect={-8,11,-9,-10,-4};
    cout<<minSumSubArray(vect)<<endl;
    return 0;
}
