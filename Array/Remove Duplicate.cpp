#include<iostream>
#include<vector>
#include<set>
using namespace std ;

int removeDuplicates(vector<int>& nums)
{
    
    int uniq = 0 ;
    for (int i=1 ; i<nums.size() ; i++)
    {
        if (nums[i] != nums[uniq])
            nums[++uniq]=nums[i] ;
    }
    return uniq+1 ;
    
    
    /*for (auto it=nums.begin()+1 ; it!=nums.end() ; it++)
    {
        if (*it == *(it-1))
        {
            it = nums.erase(it) ;
            it-- ;
        }   
    }
    return nums.size() ;*/
    
    
    /*set<int> unique(nums.begin(),nums.end()) ;
    nums.clear() ;
    nums.assign(unique.begin() , unique.end()) ;
    return unique.size() ;*/
}

int main ()
{
    vector <int> v{0,0,1,1,1,2,2,3,3,4} ;
    cout<<removeDuplicates(v) ;
}
