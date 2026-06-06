class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";

        for (int i=0; i<strs.size(); i++) {
            if (strs[i].size()==0) {
                s+=strs[i]+"/00";
            } else {
                s+=strs[i]+"/0";
            }
            
        }
        return s;

    }

    vector<string> decode(string s) {
        vector<string>vec;
        int count=0;
        int end=0;
        for (int i=0; i<s.size(); i++) {

            if (s[i]=='/' && s[i+1]=='0' && s[i+2]=='0') {
               vec.push_back("");
               count = i+3;
               continue;
            }


            if (s[i]=='/' && s[i+1]=='0') {
                end=i-1;
                string dabba = s.substr(count,end-count+1);
                vec.push_back(dabba);
                count =i+2;
            }
        }

        return vec;


    }
};
