class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int> s1 ;
        for (int i=0; i<nums.size(); i++) {
            s1[nums[i]]=i;
        }

        for (int i=0; i<nums.size(); i++) {
            int number = target-nums[i] ;
            if (s1.count(number)) {
                if (i==s1[number]) {
                    continue ;
                }

                ans.push_back(i);
                ans.push_back(s1[number]);
                break;
            }
        }

        sort(ans.begin(),ans.end());

        return ans;
        
    }
};
