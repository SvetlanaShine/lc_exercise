#include <iostream>
using namespace std;

class Solution {
    public:
        bool isPerfectSquare(int num) {
            if (num == 0 || num == 1) {
                return num;
            }
            int left = 1;
            int right = num;
            while (left <= right) {
                int middle = left + (right - middle) / 2;
                int factory = num /middle;
                if (middle < factory) {
                    left = middle + 1;  
                } else if (middle > factory) {
                    right = middle - 1;
                } else {
                    if (num % middle == 0){
                        return true;
                    } 
                    left = middle + 1;
                }
            }
            return false;
        }
};

int main() {
    Solution solution;
    int x = 5;
    cout << x << " is perfect number : " << solution.isPerfectSquare(x) << endl;
}