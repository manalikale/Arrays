/*

 Find the number that occurs odd number of times
 
 Algo: Do a bitwise XOR of all elements.
 Finally we get the number with odd number of occurences
 Time complexity:
 Overall complexity is O(n)
 
 
 */
#include<iostream>
#include<vector>

using namespace std;

int getOddOccurrence(std::vector<int>vect)
{
    int res=0;
    for(int i=0;i<vect.size();i++)
    {
        res=res^vect[i];
    }
    return res;
}

int main()
{
    std::vector<int>vect={2,3,4,4,6,6,7,7,2};
    cout<<getOddOccurrence(vect)<<endl;
    return 0;
}
