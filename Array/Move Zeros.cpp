#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std ;

void moveZeros(vector<int>& nums) 
{
    int c= count(nums.begin(),nums.end(),0) ;
    cout<<c<<endl ;
    auto newEnd = remove(nums.begin(),nums.end(),0) ;
    cout<<*newEnd<<endl ;
    nums.erase(newEnd,nums.end()) ; 
    nums.insert(newEnd,c,0) ;
}
int main ()
{
    vector<int> arr = {1,2,0,3,4,0,5} ;
    moveZeros (arr) ;
    for (auto x: arr)
        cout<<x<<" " ;
    return 0 ;
}

