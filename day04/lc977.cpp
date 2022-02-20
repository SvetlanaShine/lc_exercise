#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size= nums.size() - 1;
        int front = 0;
        int back = size;
        vector<int> result(nums.size(), 0);
        for (int i = 0; front <= back; i++) {
            if (nums[front] * nums[front] < nums[back] * nums[back]) {
                result[size - i] = nums[back] * nums[back];
                back--;
            } else {
                result[size - i] = nums[front] * nums[front];
                front++;
            }
        }
        return result;
    }
};

int main () {
    vector<int> nums = {-7,-3,2,3,3,3,11}; // 16,1,0,9,100
    Solution solution;
    nums = solution.sortedSquares(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}