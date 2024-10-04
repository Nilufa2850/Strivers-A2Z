#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std ;

void moveZeros(vector<int>& nums) 
{
    int n= nums.size() ;
    int x =0 ;

    for(int i=0 ; i<n ; i++)
    {
        if (nums[i]!=0)
            nums[x++] = nums[i] ;
    }
    for (int i=x ; i<n ; i++)
        nums[i]= 0 ;
}
int main ()
{
    vector<int> arr = {1,2,0,3,4,0,5} ;
    moveZeros (arr) ;
    for (auto x: arr)
        cout<<x<<" " ;
    return 0 ;
}

