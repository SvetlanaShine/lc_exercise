#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        //双指针法：快慢指针        TC：O(n) ZC:O(1)
        int removeElement(vector<int>& nums, int val) {
            int slow = 0;
            for (int fast = 1; fast < nums.size(); fast++) {
                if (val != nums[fast]) {
                    nums[slow++] = nums[fast];
                }
            }
            return slow;
        }

        //暴力法求解               TC：O(n^2) ZC:O(1)
        int removeElement_bruteForce(vector<int>& nums, int val) {
            int size = nums.size();
            for (int i = 0; i < size; i++) {
                if (nums[i] == val) {
                    for (int j = i + 1; j < size; j++) {
                        nums[j - 1] = nums[j];
                    }
                    size--;
                    i--;
                }
            }
            return size;
        }
};

int main () {
    Solution solution;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout << "the nums size : " << solution.removeElement(nums, val) << endl << "the new nums: ";
    for (int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
}