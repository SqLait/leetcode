/*Out of the 2 solutions this one is without any doubt the fastest*/
#include <string>
#include <unordered_map>
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size())
            return false;

        int n = s.size();
        std::unordered_map<unsigned char, short> unmap, unmap2;

        for (int i = 0; i < n; i++) {
            unmap[s[i]] += 1;
            unmap2[t[i]] += 1;
        }

        return unmap == unmap2;
    }
};
