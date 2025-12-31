class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int len=0;
        unordered_map<char,int> mp;
        while(j<s.length()){
            if(mp.count(s[j])==0){
                mp[s[j]] = 1;
                len = max(len,j-i+1);
                j++;
            }
            else{
                mp.erase(s[i]);
                i++;
            }
        }
        return len;
    }
};