#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int slow = 0;
            int fast = 0;
            int size = nums.size();
            while (slow < size) {
                if (fast >= size) {
                    nums[slow++] = 0;
                }
                if (fast < size && nums[fast] != 0) {
                    nums[slow++] = nums[fast];
                }
                fast++;
            }
        }
};

int main () {
    Solution solution;
    vector<int> nums = {0,1,0,3,12};
    solution.moveZeroes(nums);
    for (int i = 0; i< nums.size(); i++){
        cout << nums[i] << " ";
    }

}
