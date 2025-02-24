class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0,i=0,j=0;
        unordered_map<char,int> mp;
        if(s.length()==0){
            return 0;
        }
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