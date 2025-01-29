class Solution {
public:

int solve(string &s,string &part){
    int ind = s.find(part);
    if(ind != string::npos) return ind;
    return -1;
}

    int strStr(string haystack, string needle) {
        return solve(haystack, needle);
    }
};