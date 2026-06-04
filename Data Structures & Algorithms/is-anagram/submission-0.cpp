class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!= t.size()) {
            return false ;
        }

        // Sol 1 --> Frq++ , Frq-- ?
        unordered_map<char,int> m1;
        
        for (int i=0; i<s.size(); i++) {
            m1[s[i]]++;
        }

        for (int i=0; i<s.size(); i++) {
            m1[t[i]]--;
        }

        for (const auto& [key , value] : m1) {
            if (value>0) {
                return false;
            }
        }

        return true ;

        


    }
};
