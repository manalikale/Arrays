/*
 Given an array A[] of n numbers and another number x, determine if there are two numbers in A[] that have a sum equal to x
 1. Initialize a map M
 2.Do the following for every element A[i] in A[]
 a)If M[x-A[i]]is set then print the pair (A[i],x-A[i])
 b)Set M[A[i]]
 
 */
#include<iostream>
#include<vector>
#include<map>


using namespace std;

void PrintPairsWithASum(std::vector<int>v1,int x)
{
    std::map<int,int>m1;
    int temp;
    for(int i=0;i<v1.size();i++)
    {
        temp=x-v1[i];
        if(temp>=INT_MIN && m1[temp]==1)
        {
            cout <<"Pair with sum"<<' '<<x<<' '<<"is"<<' '<< temp<<' '<<"and"<<v1[i]<<endl;
        }
        else if(temp<INT_MAX && m1[temp]==1)
        {
            cout <<"Pair with sum"<<' '<<x<<' '<<"is"<<' '<< temp<<' '<<"and"<<v1[i]<<endl;
        }
        m1[v1[i]]=1;
    }
}

int main()
{
    std::vector<int>vect={0,1,-2,3,4,-5};
    
    PrintPairsWithASum(vect,-2);
    return 0;
}
