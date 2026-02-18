class Solution {
public:
    string reverseWords(string s) {
        int i = s.size()-1;
        string ans;
        while(i>=0){
            while(i>=0 && s[i]==' '){
                i--;
            }
            if(i<0){
                break;
            }
            int j = i;
            while(j>=0 && s[j]!=' '){
                j--;
            }
            ans += s.substr(j+1,i-j);
            if(!ans.empty()){
                ans += ' ';
            }
            i = j;
        }
        if(!ans.empty()){
            ans.pop_back();
        }
        return ans;
    }
};