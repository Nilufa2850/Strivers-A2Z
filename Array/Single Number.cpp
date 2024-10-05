#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std ;

int singleNumber(vector<int>& nums) 
{
    map<int,int> m ;
    for (int i=0 ; i<nums.size() ; i++)
        m[nums[i]] ++ ;
    for (auto x: m)
        if ( x.first !=1 && x.second != 2)
            return x.first ;
    return 1 ;
}

int main ()
{
    vector<int> v={4,1,2,1,2} ;
    cout<<singleNumber(v) ;
}

