#include <string>
class Solution {
public:
    int scoreOfString(std::string s) {
        int res = 0;
        int n = s.size();
        for (int i = 0; i + 1 < n; i++) {
            res += (abs(s[i] - s[i + 1]));
        }
        return res;
    }
};
