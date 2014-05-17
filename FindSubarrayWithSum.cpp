/*
 
 Find subarray with given sum(only positive numbers)
 
 Initialize a variable curr_sum as first element. 
 curr_sum indicates the sum of current subarray. 
 Start from the second element and add all elements one by one to the curr_sum. 
 If curr_sum becomes equal to sum, then print the solution. 
 If curr_sum exceeds the sum, then remove trailing elemnents while curr_sum is greater than sum.
 */

#include<iostream>
#include<vector>

/* Returns true if the there is a subarray of arr[] with sum equal to 'sum'
 otherwise returns false.  Also, prints the result */
int subArraySum(std::vector<int>vect, int sum)
{
    /* Initialize curr_sum as value of first element
     and starting point as 0 */
    int curr_sum = vect[0];
    int start = 0;
    int i;
    
    /* Add elements one by one to curr_sum and if the curr_sum exceeds the
     sum, then remove starting element */
    for (i = 1; i <= vect.size(); i++)
    {
        // If curr_sum exceeds the sum, then remove the starting elements
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - vect[start];
            start++;
        }
        
        // If curr_sum becomes equal to sum, then return true
        if (curr_sum == sum)
        {
            std::cout<<"Sum found between indexes:"<<start<<" "<<"and"<<" "<<i-1<<std::endl;
            return 1;
        }
        
        // Add this element to curr_sum
        if (i < vect.size())
            curr_sum = curr_sum + vect[i];
    }
    
    // If we reach here, then no subarray
    std::cout<< "No subarray found"<<std::endl;
    return 0;
}

// Driver program to test above function
int main()
{
    std::vector<int>vect={15, 2, 4, 8, 9, 5, 10, 23};
    int sum = 23;
    subArraySum(vect,sum);
    return 0;
}
