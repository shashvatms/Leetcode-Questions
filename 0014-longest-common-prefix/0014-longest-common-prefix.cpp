class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){
            return "";
        }
        string pref = strs[0];
        int preflen = pref.size();
        for(int i=1;i<strs.size();i++){
            string s = strs[i];
            while(preflen > s.size() || pref!=s.substr(0,preflen)){
                preflen--;
                if(preflen==0){
                    return "";
                }
                pref = pref.substr(0,preflen);
            }
        }
        return pref;
    }
};