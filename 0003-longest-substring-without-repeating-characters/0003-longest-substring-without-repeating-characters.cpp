class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        for(int i=0;i<s.length();i++){
            unordered_map<char,int> mp;
            for(int j=i;j<s.length();j++){
                if(mp.count(s[j])>0){
                    break;
                }
                else{
                    mp[s[j]] = 1;
                    len = max(len,j-i+1);
                }
            }
        }
        return len;
    }
};