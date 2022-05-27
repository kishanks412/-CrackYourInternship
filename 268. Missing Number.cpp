class Solution {
public:
    int missingNumber(vector<int>& nums) {
        bool c=true;
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i])==nums.size())
                continue;
            if(nums[abs(nums[i])]==0)
                c=false;
            nums[abs(nums[i])]*=-1;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                return i;
            else if(c==true  && nums[i]==0)
                return i;
        }
        return nums.size();
    }
};