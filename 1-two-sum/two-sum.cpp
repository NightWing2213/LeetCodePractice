class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int l = nums.size();
        for(int i=0; i<l; i++)
        {
            for(int k=i+1; k<l; k++)
            {
                if(nums[i]+nums[k]==target)
                    return{i, k};
            }
        }
        return{};
    }
};