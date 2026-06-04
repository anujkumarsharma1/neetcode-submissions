class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sol 1 -- > vector sorting  

        if (nums.size()<2) {
            return false;
        }
        sort(nums.begin(), nums.end());
        for (int i=0; i< nums.size()-1; i++) {
            if (nums[i]==nums[i+1]) {
                return true;
            }
        }
        return false;
        
    }
};