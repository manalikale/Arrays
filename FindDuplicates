//Given an array of n elements which contains elements from 0 to n-1, with any of these numbers appearing any number of times.
//Find these repeating numbers in O(n) and using only constant memory space.

//Find duplicates in O(n) time and O(1) extra space

#include<iostream>
#include<vector>


void swap(int i, int j, std::vector<int> &vect){
    int temp = vect[i];
	vect[i] = vect[j];
	vect[j] = temp;
}
void print(std::vector<int> vect){
    
	for(int i=0;i<vect.size();i++)
	{
		std::cout<<vect[i]<<"\t";
        
	}
    std::cout<<"\n";
    
}
void findDuplicates(std::vector<int>vect)
{
    
    for(int i=0; i<vect.size(); i++)
    {
        
		swap(i, vect[i], vect);// input indexes
        
    }
    
    for(int i=0; i<vect.size(); i++)
    {
    	if(vect[i] != i ) // we have found a repetition
		{
			vect[abs(vect[i])] = -1;
		}
        
    }
    
    for(int i=0; i<vect.size(); i++)
    {
    	if(vect[i] == -1 )
		{
            std::cout<<i<<"\t";
		}
    }
}


int main()
{
    std::vector<int>vect={1,1,1, 2, 3, 1, 3, 6, 6};
    findDuplicates(vect);
    return 0;
}


