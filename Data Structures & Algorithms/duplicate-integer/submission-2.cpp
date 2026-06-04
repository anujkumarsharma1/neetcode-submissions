class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
//         // sol 1 -- > vector sorting  

//         if (nums.size()<2) {
//             return false;
//         }

// //  this is because i< nums.size()-1 in for loop me if size==0 then i was going to access -1 ;

//         sort(nums.begin(), nums.end());
//         for (int i=0; i< nums.size()-1; i++) {
//             if (nums[i]==nums[i+1]) { // i have done i++ here instead of i+1 so it was not checking the i+1 version 
//                 return true;
//             }
//         }
//         return false;

// solution 2 

            unordered_map<int,int> dup;
            for (int i=0; i<nums.size(); i++) {
                dup[nums[i]]++;
            }

            for (const auto& [key,value] : dup) {
                if (value>1) {
                    return true;
                }
            }

            return false;



        
    }
};