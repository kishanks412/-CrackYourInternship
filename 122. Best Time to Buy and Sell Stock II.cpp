class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                ans+=(nums[i]-nums[i-1]);
            }
        }
        return ans;
    }
};