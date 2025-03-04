class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> temp;
        for(int i : asteroids){
            bool d = false;
            while(!temp.empty() && temp.back() > 0 && i < 0){
                if(abs(temp.back()) < abs(i)){
                    temp.pop_back();
                    continue;
                }
                else if(abs(temp.back())==abs(i)){
                    temp.pop_back();
                }
                d = true;
                break;
            }
            if(!d){
                temp.push_back(i);
            }
        }
        return temp;
    }
};

