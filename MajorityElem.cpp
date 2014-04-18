/*
Majority element: An element that occurs more than n/2 times is a majority element
 
 Algorithm done in 2 steps:
 1. Get an element occuring most of the time in the array in O(n).We cancel out each occurence of an element e with all other elements that are different from e, so that only e will exist in the end if it is a majority element
 2.Check if the element obtained from the step above is a majority element i.e. check if it has occured more than n/2 times. If yes then print the element else return NONE
 */
#include<iostream>
#include<vector>

using namespace std;

int findCandidate(std::vector<int>vect)
{
    int maj_index=0;
    int count=1;
    for(int i=1;i<vect.size();i++)
    {
        if(vect[maj_index]==vect[i])
        {
            count++;
        }
        else{
            count--;
        }
        if(count==0)
        {
            maj_index=i;
            count=1;
        }
    }
    return vect[maj_index];
}

bool isMajority(std::vector<int>vect,int cand)
{
    int count=0;
    for(int i=0;i<vect.size();i++)
    {
        if(vect[i]==cand)
        {
            count++;
        }
    }
    if(count>vect.size()/2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void printMajority(std::vector<int>vect)
{
    int candidate=findCandidate(vect);
    if(isMajority(vect,candidate))
        cout<<candidate<<endl;
    else
        cout<<"No Majority"<<endl;
}

int main()
{
    std::vector<int>vect={-1,-1,-1,1,1,1,4,5};
    printMajority(vect);
    return 0;
}
