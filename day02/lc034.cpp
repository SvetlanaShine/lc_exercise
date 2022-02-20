#include <iostream>
#include <vector>
using namespace std;


/**
 * 给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。
 * 如果数组中不存在目标值 target，返回 [-1, -1]。
 * 你可以设计并实现时间复杂度为 O(log n) 的算法解决此问题吗？
 * 
*/

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int index = binarySearch(nums, target);
            if (nums.empty() || index == -1) {
                return {-1, -1};
            }
            int left = index;
            int right = index;

            while (left - 1 >= 0 && nums[left - 1] == nums[index])
            {
                left--;
            }
            while (right + 1 <= nums.size()-1 && nums[right + 1] == nums[index])
            {
                right++;
            }
            return {left,right};
        }

    private:
        int binarySearch(vector<int>& nums, int target) {
            int left = 0;
            int right = nums.size();
            while (left < right) {
                int middle = left + (right - left) / 2;
                if (nums[middle] < target) {
                    left = middle + 1;
                } else if (nums[middle] > target) {
                    right = middle;
                } else {
                    return middle;
                }
            }
            return -1;
        }
};


int main() {
    Solution solution;
    vector<int> nums = {};
    int target = 0;
    cout << "nums: target = " << target << " in ";
    vector<int> range = solution.searchRange(nums, target);
    cout << "[" << range[0] << ", " << range[1] <<"]" << endl;
}