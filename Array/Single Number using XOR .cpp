#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std ;

int singleNumber(vector<int>& nums) 
{
    int unique=0 ;
    for (int x:nums)
        unique ^= x ;
    return unique ;
}

int main ()
{
    vector<int> v={4,1,2,1,2} ;
    cout<<singleNumber(v) ;
}

