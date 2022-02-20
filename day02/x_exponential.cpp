#include <iostream>
using namespace std;

// 求x的n次幂


// 1. 直接循环，时间复杂度为O(n)
int function1(int x, int n) {
    int ret = 1;
    for (int i = 1; i <= n; i++) {
        ret = ret * x;
    }
    return ret;
}

// 2. 迭代循环,时间复杂度依旧为O(n)
int function2(int x, int n) {
    if (n == 0) {
        return 1;
    }
    return x * function2(x, n - 1); 
}

// 3.改进后的迭代循环,但时间复杂度依旧为O(n)
int function3(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if(n % 2 == 1){
        return x * function3(x, n / 2) * function3(x, n / 2);
    }
    return function3(x, n / 2) * function3(x, n / 2);
}

// 4. 再次改进,时间复杂度为O(logn)
int function4(int x, int n){
    if (n == 0) {
        return 1;
    }
    int t = function4(x, n / 2);
    if (n % 2 == 1){
        return t * t * x;
    }
    return t * t;
}


int main() {
    cout << "hello world!" << endl;
    cout << "2^8 = " << function1(2,8) << endl;
    cout << "2^7 = " << function2(2,7) << endl;
    cout << "2^6 = " << function3(2,6) << endl;
    cout << 5/2 << endl;
}
