class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int xo = x;
        long res = 0;
        
        while (xo > 0) {
            res *= 10;
            res += (xo % 10);
            xo /= 10;
        }

        return res == x;
    }
};
