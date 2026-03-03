#include <string>
#include <unordered_map>
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<unsigned char, short> unmap;
        for (int i = 0; i < s.size(); i++) {
            unmap[s[i]] += 1;
        }

        for (int i = 0; i < t.size(); i++) {
            if ((unmap[t[i]] - 1) < 0) {
                return false;
            } else {
                unmap[t[i]] -= 1;
            }
        }

        for (auto i : unmap) {
            if (i.second != 0)
                return false;
        }

        return true;
    }
};
