class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> count(26,0);
        for(int i=0;i<s.length();i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for(int c: count){
            if(c!=0){
                return false;
            }
        }
        return true;
    }
};