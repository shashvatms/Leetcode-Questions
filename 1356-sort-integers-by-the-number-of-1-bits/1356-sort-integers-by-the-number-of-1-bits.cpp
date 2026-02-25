class Solution {
public:
    int countBits(int x) {
        int count = 0;
        while (x > 0) {
            x = x & (x - 1);
            count++;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {

        vector<int> temp;

        for (int x : arr) {
            int bits = countBits(x);
            temp.push_back(bits * 10001 + x);
        }

        sort(temp.begin(), temp.end());

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i] % 10001;
        }

        return arr;
    }
};