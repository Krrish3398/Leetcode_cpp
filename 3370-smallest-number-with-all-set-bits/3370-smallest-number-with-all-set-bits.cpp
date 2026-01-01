class Solution {
public:
    int smallestNumber(int n) {
        long mask = 0x7FFFFFFF;
        while(mask > n)
        {
            mask >>= 1;
        }
        return ((n ^ mask) | n);
    }
};