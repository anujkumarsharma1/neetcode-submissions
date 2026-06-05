class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==1) {
            return strs[0];  // so from Now , I will always test my code on the Given Example and also the Edge Cases that is Constraint s.
        }
        string ans= strs[0];
        

        for (int i=1; i<strs.size(); i++) {
            int count=0;
            for (int j=0; j<min(strs[i].size(), ans.size()); j++) {
                if (ans[j]!=strs[i][j]) {
                    break; // i forgot this because what if starting ke not matched and random kahi ke matched 
                }
                 else if (ans[j]==strs[i][j]) {
                    count++;
                }
            }
            ans = ans.substr(0, count); // Returns the prefix of length vec[0]  because the trim function was not there here in c++ .

        
        }

        
        
        return ans;
    }
};  