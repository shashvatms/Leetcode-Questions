class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if(n>m){
            return false;
        }
        vector<int> need(26,0), window(26,0);
        // get the need
        for(char c:s1){
            need[c-'a']++;
        }
        //start first window;
        for(int i=0;i<n;i++){
            window[s2[i]-'a']++;
        }
        //check if satisfying the need
        if(need==window){
            return true;
        }
        // move window forward
        for(int i=n;i<m;i++){
            window[s2[i]-'a']++; //add new 
            window[s2[i-n]-'a']--; // remove older
            if(need==window){
                return true;
            }
        }
        return false;
    }
};