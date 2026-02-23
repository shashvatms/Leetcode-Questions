class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> need(26,0),window(26,0),ans;
        if(m>n){
            return ans;
        }
        //check for need
        for(char c: p){
            need[c-'a']++;
        }
        for(int i=0;i<m;i++){
            window[s[i]-'a']++;
        }
        if(need==window){
            ans.push_back(0);
        }
        for(int i=m;i<n;i++){
            window[s[i]-'a']++;
            window[s[i-m]-'a']--;
            if(need==window){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};