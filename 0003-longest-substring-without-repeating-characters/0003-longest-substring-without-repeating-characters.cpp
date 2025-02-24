class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0,i=0,j=0;
        unordered_set<char> mp;
        if(s.length()==0){
            return 0;
        }
        while(j<s.length()){
            if(mp.find(s[j]) == mp.end()){
                mp.insert(s[j]);
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