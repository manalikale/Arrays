/*
Largest Sum Contiguous Subarray
 Time complexity:
 Overall complexity is O(n)
 
 */
#include<iostream>
#include<vector>

using namespace std;

int maxSumSubArray(std::vector<int>vect)
{
    int left=0;
    int right=0;
    int sum=INT_MIN;
    int currentMaxSum=0;
    int maxLeft=0;
    int maxRight=0;
    for(int i=0;i<vect.size();i++)
    {
        currentMaxSum+=vect[i];
        if(currentMaxSum>sum)
        {
            sum=currentMaxSum;
            right=i;
            maxLeft=left;
            maxRight=right;
        }
        if(currentMaxSum<0)
        {
            left=i+1;
            right=left;
            currentMaxSum=0;
        }
    }
    cout<<"Max contiguous subarray is:"<<endl;
    for(int i=maxLeft;i<=maxRight;i++)
    {
        cout<<vect[i]<<' ';
    }
    cout<<'\n';
    cout<<"Sum is:"<<endl;
    return sum;
}

int main()
{
    std::vector<int>vect={-8,-9,-10,-4};
    cout<<maxSumSubArray(vect)<<endl;
    return 0;
}
