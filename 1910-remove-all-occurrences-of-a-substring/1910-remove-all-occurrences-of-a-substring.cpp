class Solution {
public:
    string removeOccurrences(string s, string part) {
        int k = part.size();
        
        for(int i = 0; i <= (int)s.size() - k;){
            bool found = true;
            for (int j = 0; j < k; j++) {
                if(s[i+j]!=part[j]){
                    found = false;
                    break;
                }
            }
            if(found){
                s.erase(i,k);
                i = max(0,i-k);
            }
            else{
                i++;
            }
        }
        return s;
    }
};