class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(string str: strs){
            string sorted = str;
            sort(sorted.begin(),sorted.end());
            map[sorted].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto i: map){
            ans.push_back(i.second);
        }
        return ans;
    }
    
};