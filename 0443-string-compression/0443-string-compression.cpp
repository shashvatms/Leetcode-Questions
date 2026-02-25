class Solution {
public:
    int compress(vector<char>& chars) {
       int read = 0;
       int write = 0;
       int n=chars.size();
       while(read<n){
        int count = 0;
        char curr = chars[read];
        while(read<n && chars[read]==curr){
            read++;
            count++;
        }
        chars[write++] = curr;
        if(count>1){
            string c = to_string(count);
            for(char i: c){
                chars[write++] = i;
            }
        }
       }
       return write;
    }
};