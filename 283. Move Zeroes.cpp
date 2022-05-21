class Solution {
public:

//  this is two pointer technique, first pointer is used for traversing and 2nd is used for non zero elements
    void moveZeroes(vector<int>& nums) {
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                continue;
            else
            {
                int t=nums[l];
                nums[l]=nums[i];
                nums[i]=t;
                l++;
            }
        }
    }
};