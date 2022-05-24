class Solution {
public:
    int minMoves(vector<int>& nums) {
        int a=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<a)
                a=nums[i];
            sum+=nums[i];
        }
        return sum-a*nums.size();
    }
};