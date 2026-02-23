class Solution {
public:
    int compress(vector<char>& chars) {
       int write = 0;
       int read = 0;
       int n = chars.size();
       while(read<n){
            char curr = chars[read];
            int count = 0;
            while(read<n && curr == chars[read]){
                read++;
                count++;
            }
            chars[write++] = curr;
            if(count>1){
                string num = to_string(count);
                for (char c : num) {
                    chars[write] = c;
                    write++;
                }
            }
       }
       return write;
    }
};