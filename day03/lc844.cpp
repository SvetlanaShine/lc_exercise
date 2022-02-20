#include <iostream>
#include <string>
using namespace std;

class Solution {
    public:
        bool backspaceCompare(string s, string t) {
            sortString(s);
            sortString(t);
            return s == t;
        }

    private:
        void sortString(string &s) {
            int slow = 0;
            for (int fast = 0; fast < s.size(); fast++) {
                if (s[fast] != '#') {
                    s[slow++] = s[fast];
                } else if (slow != 0) {
                    slow--;
                }
            }
            s.resize(slow);
        }

};

int main () {
    string s = "ab##";
    string t = "c#d#";
    Solution solution;
    cout << solution.backspaceCompare(s,t) << endl;
}