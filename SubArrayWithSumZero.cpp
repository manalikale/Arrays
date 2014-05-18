#include <iostream>
#include <vector>
#include <unordered_map>

class output{

public:
    int s;
    int e;
    output(){
        s = -1; e = -1;
    }
    
    output(int start, int end);
    
    output& printZeroSumSubArray(std::vector<int>vect);
    
};

output::output(int start, int end)
{
    s= start; e=end;
}

output& output::printZeroSumSubArray(std::vector<int> vect)
{
    std::unordered_map<int,int> mapp;
    int sum=0;
    
    for(int i=0;i<vect.size();i++)
    {
        
        sum += vect[i];
        std::unordered_map<int,int>::iterator it = mapp.find(sum);
        //std::cout<< it->first;
        
        if(it != mapp.end()||vect[i] == 0 || sum == 0 )
        {
            output o = *new output(it->second,i);
            return o;
        
        }
        mapp.insert({sum, i});
    }
    output o = *new output();
    return o;
}
int main ()
{
    std::vector<int> vect={4, 2, -3, 1, 6};
    output o;
    o = o.printZeroSumSubArray(vect);
    std::cout<<"start index="<<o.s<<"\n";
    std::cout<<"end index"<<o.e<<"\n";
    return 0;
}
