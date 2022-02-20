#include <iostream>
using namespace std;

/**
 * 给你一个非负整数 x ，计算并返回x的 算术平方根 。
 * 由于返回类型是整数，结果只保留整数部分，小数部分将被舍去 。
 * 注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。
 * 
*/
class Solution {
    public:
        int mySqrt(int x) {
            int left = 0;
            int right = x;
            if (x == 0 || x == 1) {
                return x;
            }
            while (left <= right) {
                int middle = left + (right - left) / 2;
                if (middle < x / middle) {
                    left = middle + 1;
                } else if (middle > x / middle) {
                    right = middle - 1;
                } else {
                    return middle;
                }
            }
            return right;    
        }
};

int main() {
    Solution solution;
    int x = 8;
    cout << "sqrt(" << x << "):" << solution.mySqrt(x) << endl;
    cout << (8 < 8 / 8) << endl;
}