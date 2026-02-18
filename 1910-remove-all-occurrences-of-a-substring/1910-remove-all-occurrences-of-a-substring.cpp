class Solution {
public:
    string removeOccurrences(string s, string part) {
        string st;
        int k = part.size();
        for(char c : s){
            st.push_back(c);
            if(st.size()>=k && st.substr(st.size()-k)==part){
                st.erase(st.size()-k);
            }
        }
        return st;
    }
};