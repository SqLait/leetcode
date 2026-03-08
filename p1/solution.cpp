#include <unordered_map>
#include <vector>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int n = nums.size();
        std::unordered_map<int, int> unmap;

        for (int i = 0; i < n; i++) {
            int diff = target - nums[i];
            if (unmap.find(diff) != unmap.end()) {
                return {unmap[diff], i};
            }
            unmap.insert({nums[i], i});
        }
        return {};
    }
};
