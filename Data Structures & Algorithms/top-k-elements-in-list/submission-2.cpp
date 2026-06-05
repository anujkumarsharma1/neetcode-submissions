class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        vector<vector<int>>vec;
        vector<int>ans;

        for (int i=0; i<nums.size(); i++ ) {
            mp[nums[i]]++;
        }

        // for (const auto& [key, value] : mp) {
        //     vec[key].push_back(value);  // this is wrong  because Key can be random number like -4 or 1038 anything .
        // }

        // int x =0;
        // for (const auto& [key, value] : mp) {
        //     // Mistake : I am accessing Directly the Xth row but i haven't made any of it yet . 
        //     vec[x].push_back(value);
        //     x++;
        // }


        // Correctt .

        for (const auto& [key, value] : mp) {
            vec.push_back({key,value}) ; // this is how Directly we have submitted it ....
        }

        sort (vec.begin(), vec.end() , [](const vector<int>&a, const vector<int>&b){
            return a[1]>b[1];
        }); //nlogn


        for (int i=0; i<k ; i++) {  // it will move k times 
            ans.push_back(vec[i][0]);
        }
        

        return ans ;


    }
};
