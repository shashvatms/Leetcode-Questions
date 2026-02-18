class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         if (s1.size() > s2.size()) return false;
    vector<int> s1_count(26, 0), window_count(26, 0);
    for (char c : s1) s1_count[c - 'a']++;
    for (int i = 0; i < s1.size(); i++) window_count[s2[i] - 'a']++;
    for (int i = s1.size(); i < s2.size(); i++) {
        if (window_count == s1_count) return true;   
        window_count[s2[i] - 'a']++;
        window_count[s2[i - s1.size()] - 'a']--;
    }
    return window_count == s1_count;
    }
};