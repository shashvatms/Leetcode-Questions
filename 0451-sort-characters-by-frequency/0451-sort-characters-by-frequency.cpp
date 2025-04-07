class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c: s){
            mp[c]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto& i : mp){
            pq.push({i.second,i.first});
        }
        string result;
        while(!pq.empty()){
            auto [count,ch] = pq.top();
            pq.pop();
            result.append(count,ch);
        }
        return result;
    }
};