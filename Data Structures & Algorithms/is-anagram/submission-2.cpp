class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!= t.size()) {
            return false ;
        }
//  best advice : The unordered map does not become empty if the values becomes 0 because keys are always there ....
        // // Sol 1 --> Frq++ , Frq-- ?
        // unordered_map<char,int> m1;
        
        // for (int i=0; i<s.size(); i++) {
        //     m1[s[i]]++;
        // }

        // for (int i=0; i<s.size(); i++) {
        //     m1[t[i]]--;
        // }

        // for (const auto& [key , value] : m1) {
        //     if (value>0) {
        //         return false;
        //     }
        // }

        // return true ;


        // // solution 2 --> Directly comparing unordered maps .

        // unordered_map<char,int> m2;
        // unordered_map<char,int> m3;


        // for (int i=0; i<s.size(); i++) {
        //     m2[s[i]]++;
        // }
        // for (int i=0; i<s.size(); i++) {
        //     m3[t[i]]++;
        // }

        // if ( m2 == m3 ) {
        //     return true ; // we can compare the two maps directly 
        // }

        // return false;


        // Solution 3 

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if (s==t) {
            return true ;
        }
        return false ;

    }
};
