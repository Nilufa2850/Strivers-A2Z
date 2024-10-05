#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int missingNumber(vector<int>& nums)
{
    int sum=0 ;
    int n = nums.size() ;
    for (int x: nums)
        sum+=x ;
    int expected_sum = n*(n+1)/2 ;
    return expected_sum - sum ;
}

int main ()
{
    vector<int> v={0,1} ;
    cout<<missingNumber(v) ;
}

