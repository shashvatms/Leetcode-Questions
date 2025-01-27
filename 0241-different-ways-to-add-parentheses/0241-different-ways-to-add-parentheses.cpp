class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        int n = s.length();
        vector<int> result;
        for(int i=0;i<n;i++){
            char opr = s[i];
            if(opr=='+'||opr=='-'||opr=='*'){
                vector<int> temp1 = diffWaysToCompute(s.substr(0,i));
                vector<int> temp2 = diffWaysToCompute(s.substr(i+1));
                for(int a: temp1){
                    for(int b: temp2){
                        if(opr == '+'){
                            result.push_back(a+b);
                        }
                        else if(opr == '-'){
                            result.push_back(a-b);
                        }
                        else if(opr == '*'){
                            result.push_back(a*b);
                        }
                    }
                }
            }
        }
        if(result.size()==0){
            result.push_back(stoi(s));
        }
        return result;
    }
};