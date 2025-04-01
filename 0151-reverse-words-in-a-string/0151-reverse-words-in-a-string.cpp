class Solution {
public:
    string reverseWords(string s) {
        istringstream stream(s);
        string word;
        vector<string> res;
        while(stream >> word){
            res.push_back(word);
        }
        reverse(res.begin(),res.end());
        string result="";
        for(int i=0;i<res.size();i++){
            if(i==res.size()-1){
                result += res[i];
            }
            else{
                result += res[i] + " ";
            }
        }
        return result;
    }
};