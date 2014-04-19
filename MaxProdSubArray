
/*

 Maximum product Subarray
 
 Time: O(n)
 Additional O(1) extra space
 
 */
#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

int max(int a, int b, int c)
{
    int maxelem=max(a,max(b,c));
    return maxelem;
}

int min(int a, int b, int c)
{
    int minelem=min(a,min(b,c));
    return minelem;
}


int maxSubarrayProduct(vector<int>vect)
{
    int max_ending_at = vect[0];
    int min_ending_at = vect[0];
    int max_product = vect[0];
    
    for (int i = 1; i < vect.size(); i++)
    {
        int product_with_max = vect[i] * max_ending_at;
        int product_with_min = vect[i] * min_ending_at;
        max_ending_at = max(vect[i], product_with_max, product_with_min);
        min_ending_at = min(vect[i], product_with_max, product_with_min);
        max_product = max(max_ending_at, max_product);
    }
    return max_product;
}

int main()
{
    vector<int>vect1={0,2,-3,4,-5,-6};
    cout<< maxSubarrayProduct(vect1);
    cout<<endl;
    
    return 0;
}
