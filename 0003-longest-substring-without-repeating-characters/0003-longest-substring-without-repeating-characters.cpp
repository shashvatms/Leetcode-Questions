class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int i=0;
        // int j=0;
        int len=0;
        // unordered_map<char,int> mp;
        // while(j<s.length()){
        //     if(mp.count(s[j])==0){
        //         mp[s[j]] = 1;
        //         len = max(len,j-i+1);
        //         j++;
        //     }
        //     else{
        //         mp.erase(s[i]);
        //         i++;
        //     }
        // }
        // return len;
        int l = 0;
        unordered_set<char> st;
        for(int r=0;r<s.length();r++){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);
            len = max(len,r-l+1);
        }
        return len;
    }
};