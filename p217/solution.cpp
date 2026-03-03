#include <unordered_map>
#include <vector>
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<int, bool> map;
        auto n = nums.size();

        for (int i = 0; i < n; i++) {
            if (map[nums[i]] != false)
                return true;

            map[nums[i]] = true;
        }

        return false;
    }
};

