class Solution {
public:


    void reverseString(vector<char>& s) {
        int start=0;
        int end= s.size()-1;
        while(start<end) {
            swap(s[start++],s[end--]);
            // int temp=s[start];
            // s[start]= s[end];
            // s[end]=temp;

            // start++;
            // end--;

        }
        
    }
};