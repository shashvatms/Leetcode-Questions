// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//         vector<int> temp;
//         for(int i : asteroids){
//             while(!temp.empty() && temp.back() > 0 && i < 0){
//                 if(abs(temp.back()) < abs(i)){
//                     temp.pop_back();
//                     continue;
//                 }
//                 else if(abs(temp.back())==abs(i)){
//                     temp.pop_back();
//                 }
//             }
//         }
//     }
// };
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> temp;
        for (int asteroid : asteroids) {
            bool destroyed = false;
            while (!temp.empty() && temp.back() > 0 && asteroid < 0) {
                if (abs(temp.back()) < abs(asteroid)) {
                    temp.pop_back();  // Right-moving asteroid is destroyed
                    continue;
                } else if (abs(temp.back()) == abs(asteroid)) {
                    temp.pop_back();  // Both asteroids are destroyed
                }
                destroyed = true;
                break;
            }
            if (!destroyed) {
                temp.push_back(asteroid);
            }
        }
        return temp;
    }
};
