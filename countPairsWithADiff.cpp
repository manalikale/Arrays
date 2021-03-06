/*Count all distinct pairs with difference equal to k
 
 1.Initialize the count =0
 2.Insert all distinct elements in the map. While inserting, ignore if an element is already present
 3.Do the following for every element in an array:
 
 a)Look for arr[i]+k in the map, if found then increment the count
 b)Look for arr[i]-k in the map, if found then increment the count
 c)Remove arr[i] from the map
 
 */
#include<iostream>
#include<vector>
#include<map>


using namespace std;


int countPairsWithDiff(std::vector<int>&vect, int k)
{
    int count=0;
    std::map<int,int>m1;
    
    for(int i=0;i<vect.size();i++)
    {
        m1[vect[i]]=true;
    }
    for(int i=0;i<vect.size();i++)
    {
        int x=vect[i];
        if(x-k>=INT_MIN && m1[x-k])
            count++;
        if(x+k<INT_MAX && m1[x+k])
            count++;
        m1[x]=false;
    }
    return count;
}

int main()
{
    std::vector<int>vect={-7,1,2,3,4,-5};
    
    cout << countPairsWithDiff(vect,-3)<<endl;
    return 0;
}
