/*Rearrange the numbers to return the largest possible number from the given numbers
 
 I/P:{54, 546, 548, 60}
 O/P:6054854654
 
 Algo: Use a comparison based sorting algorithm. Given two numbers X and Y, compare Y appended at the end of X i.e. (XY) and compare X appended at the end of Y i.e. (YX). If XY is larger, then X should come before Y else Y should come before X
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int myCompare(string X, string Y)
{
    string XY=X.append(Y);
    string YX=Y.append(X);
    return XY.compare(YX)>0?1:0;
}

void printLargest(vector<string>vect)
{
    // Sort the numbers using library sort funtion. The function uses
    // our comparison function myCompare() to compare two strings.
    sort(vect.begin(),vect.end(),myCompare);
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i];
    }
}


int main()
{
    
    std::vector<string>vect;
    vect.push_back("34");
    vect.push_back("3");
    vect.push_back("98");
    vect.push_back("9");
    vect.push_back("76");
    vect.push_back("45");
    vect.push_back("4");

    printLargest(vect);
    cout <<endl;
    return 0;
}
