class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=-1 , l ;
    int n=nums.size() ;

    //step 1 : find right most ascending order
    for (int i=n-2 ; i>=0 ; i--)
        if (nums[i] < nums[i+1])
        {
            k = i ;
            break ;
        }
    //step 2 : find right most successor
    if (k != -1)
    {
        for (int i=n-1 ; i>k ; i--)
            if (nums[i] > nums[k])
            {
                l = i ;
                break ;
            }
        
        //step 3 : swap k and l elements
        swap(nums[k] , nums[l]) ;
    }

    //step 4 : reverse from k+1 to end 
    reverse(nums.begin()+k+1 , nums.end()) ;

    

    }
};
