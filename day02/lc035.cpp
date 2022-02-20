#include <iostream>
#include <vector>
using namespace std;

/*
    给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
    如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
    请必须使用时间复杂度为 O(log n) 的算法。
    tips:
        1 <= nums.length <= 10^4
        -10^4 <= nums[i] <= 10^4
        nums 为无重复元素的升序排列数组
        -10^4 <= target <= 10^4

*/

class Solution{
    public:
        int SearchInsert(vector<int>& nums, int target) {
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
            return right;
        }
};

int main() {

    Solution solution;
    vector<int> nums = {1,3,5,7};
    int target = 8;
    cout << "nums: target = " << target << " in " << solution.SearchInsert(nums, target) << "." << endl;
}