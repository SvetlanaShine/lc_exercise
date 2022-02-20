#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // 滑动窗口
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT32_MAX;
        int start = 0;
        int sum = 0;
        int subLength = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            while (sum >= target) {
                subLength = i - start + 1;
                result = result < subLength ? result : subLength;
                sum -= nums[start++];
            }
        }
        return result == INT32_MAX ? 0 : result;
    }
};

int main () {
    vector<int> nums = {5,1,3,5,10,7,4,9,2,8};
    int target = 15;
    Solution solution;
    cout << solution.minSubArrayLen(target, nums) << endl;
}