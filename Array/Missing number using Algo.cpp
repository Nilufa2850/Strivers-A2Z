#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int missingNumber(vector<int>& nums)
{
    sort(nums.begin() , nums.end()) ;
    nums.resize(nums.size()+1) ;
    for (int i=0 ; i<nums.size() ; i++)
        if (i!=nums[i])
            return i ;
    return -1 ;
}

int main ()
{
    vector<int> v={0,1} ;
    cout<<missingNumber(v) ;
}

