#include <string>
class Solution {
public:
    int appendCharacters(std::string s, std::string t) {
        int j = 0;
        const int nt = t.size();
        const int ns = s.size();
        for (int i = 0; i < ns; i++) {
            if (j < nt && t[j] == s[i]) {
                j++;
            }
        }
        return nt - j;
    }
};
