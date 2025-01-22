class Solution {
public:
    void generatecombination(string &digits,int index,string curr,vector<string> &map,vector<string> &ans){
        if(index==digits.size()){
            ans.push_back(curr);
            return;
        }
        string letter = map[digits[index]-'0'];
        for(char i: letter){
            generatecombination(digits,index+1,curr+i,map,ans);
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0){
            return {};
        }
        vector<string> map = {
            "","", "abc" , "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        vector<string> ans;
        generatecombination(digits,0,"",map,ans);
        return ans;
    }
};