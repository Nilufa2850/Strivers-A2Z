class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0 , max =0 ;
    for (int i=0 ; i<nums.size() ; i++)
        if (nums[i])
            c++ ;
        else
        {
            if (max < c)
                max = c ;
            c = 0 ;
        }
    return c>max?c:max ;
    }
};
