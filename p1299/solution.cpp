#include <vector>

class Solution {
public:
    std::vector<int> replaceElements(std::vector<int>& arr) {
        int n = arr.size();
        if (n == 1)
            return {-1};

        int num = -1;
        for (int i = n - 1; i >= 0; i--) {
            int current = arr[i];
            arr[i] = num;
            if (current > num) {
                num = current;
            }
        }

        return arr;
    }
};
