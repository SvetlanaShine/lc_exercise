#include <iostream>
#include <string>
using namespace std;

class Solution {
    public:
        bool backspaceCompare(string s, string t) {
            return sortString(s) == sortString(t);
        }

    private:
        string sortString(string s) {
            int slow = 0;
            int fast = 0;
            int size = s.size();
            while (slow < size) {
                if (fast < s.size() && s[fast] != '#') {
                    s[slow++] = s[fast];
                } else {
                    if (slow > 0) {
                        s[slow -1] = '#';
                    }
                    s[slow--] = '#';
                    size--;
                }
                fast++;
            }
            return s;
        }

};

int main () {
    string s = "ab##";
    string t = "c#d#";
    Solution solution;
    cout << solution.backspaceCompare(s,t) << endl;
}