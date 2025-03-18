#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> returnArr;
            for(int i = 0; i < nums.size() - 1; i++){
                for(int j = i + 1; j < nums.size(); j++){
                    if((nums[i] + nums[j]) == target){
                        returnArr.push_back(nums[i]);
                        returnArr.push_back(nums[j]);
                        return returnArr;
                    }
                }
            }
            return returnArr;
        }
    };

    int main(){
        Solution a;
        vector<int> test = {2,7,11,15};
        vector<int> tes2 = a.twoSum(test, 9);
        cout << tes2[0] << "    " << tes2[1] << endl;
    }