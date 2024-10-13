#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) 
{
    if (nums.empty()) 
        return 0;

    int sum = 0 ;
    int maxSum = nums[0] ;

    for (int i=0 ; i<nums.size() ; i++)
    {
        sum = max (nums[i] , sum+nums[i] );
        maxSum = max (maxSum , sum) ;
    }
    return maxSum ;
}

int main() 
{
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    cout<< maxSubArray(v) ; 
    
}
