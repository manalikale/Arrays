/*Union and intersection of 2 sorted arrays

Time: O(m+n)
 
 Algorithm Union(arr1[], arr2[]):
 For union of two arrays, follow the following merge procedure.
 1) Use two index variables i and j, initial values i = 0, j = 0
 2) If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i.
 3) If arr1[i] is greater than arr2[j] then print arr2[j] and increment j.
 4) If both are same then print any of them and increment both i and j.
 5) Print remaining elements of the larger array.
 
 
 Algorithm Intersection(arr1[], arr2[]):
 For Intersection of two arrays, print the element only if the element is present in both arrays.
 1) Use two index variables i and j, initial values i = 0, j = 0
 2) If arr1[i] is smaller than arr2[j] then increment i.
 3) If arr1[i] is greater than arr2[j] then increment j.
 4) If both are same then print any of them and increment both i and j
*/

#include<iostream>
#include<vector>

using namespace std;

void Union(std::vector<int>vect1, std::vector<int>vect2)
{
    int i=0;
    int j=0;
    while(i<vect1.size() && j<vect2.size())
    {
        if(vect1[i]<vect2[j])
        {
            cout<<vect1[i++]<<" ";
        }
        else if(vect1[i]>vect2[j])
        {
            cout<<vect2[j++]<<" ";
        }
        else{
            cout<<vect2[j++]<<" ";
            i++;
        }
    }
    while(i<vect1.size())
    {
        cout<<vect1[i++]<<" ";
    }
    while(j<vect2.size())
    {
        cout<<vect2[j++]<<" ";
    }
}

void Intersect(vector<int>vect1, vector<int>vect2)
{
    int i=0;
    int j=0;
    while(i<vect1.size() && j<vect2.size())
    {
        if(vect1[i]<vect2[j])
        {
            i++;
        }
        else if(vect1[i]>vect2[j])
        {
            j++;
        }
        else
        {
            cout<<vect2[j++]<<" ";
            i++;
        }
    }
    
}
int main()
{
    vector<int>vect1={1,3,4,5};
    vector<int>vect2={2,3,4,9,10,11};
    Union(vect1,vect2);
    cout<<endl;
    Intersect(vect1,vect2);
    cout<<endl;
    return 0;
}
