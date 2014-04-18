#include<iostream>
#include<vector>

using namespace std;


void pushZerosAtEnd(std::vector<int>&vect)
{
    int count=0;
    for(int i=0; i<vect.size();i++)
    {
        if(vect[i]!=0)
        {
            vect[count++]=vect[i];
        }
    }
    while(count<vect.size())
    {
        vect[count++]=0;
    }
}


int main()
{
    std::vector<int> vect = {1,0,9,8,0,0,7};
    pushZerosAtEnd(vect);
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    }
    return 0;
}
