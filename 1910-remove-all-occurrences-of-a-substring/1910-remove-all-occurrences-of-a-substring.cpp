class Solution {
public:
    string removeOccurrences(string s, string part) {
        // int k = part.size();
        while(true){
            int pos = s.find(part);
            if(pos==string::npos){
                break;
            }
            s.erase(pos,part.size());
        }
        return s;
        // for(int i=0;i<s.size();i++){
        //     bool found = true;
        //     int j = i;
        //     for (int x = 0; x < part.size(); x++, j++) {
        //         if(s[j]!=part[x]){
        //             found = false;
        //             break;
        //         }
        //     }
        //     if(found){
        //         s.erase(i,k);
        //     }
        // }
        // return s;
    }
};