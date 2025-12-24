class Solution {
public:
    int maxArea(vector<int>& height) {
        int si = 0;
        int ei = height.size()-1;
        int area = 0;
        while(si<=ei){
            int l = min(height[si],height[ei]);
            int b = ei - si;
            area = max(area,l*b);
            if(height[si] < height[ei]){
                si++;
            }
            else{
                ei--;
            }
        }
        return area;
    }
};