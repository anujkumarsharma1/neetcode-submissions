class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int cnt=0;
        int num= min(word1.size(), word2.size());

        for (int i=0; i<num; i++) {
            ans+=word1[i];
            ans+=word2[i];
            cnt++;
        }

        for (int i=cnt; i<word1.size();i++) {
            ans+=word1[i];
        }
        for (int i=cnt; i<word2.size();i++) {
            ans+=word2[i];
        }

        return ans;
    }
};