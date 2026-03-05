#include <string>
class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int j = 0;
        for (int i = 0; i < t.size(); i++) {
            if (j < s.size() && s[j] == t[i]) {
                j++;
            }
        }
        return j == s.size();
    }
};
