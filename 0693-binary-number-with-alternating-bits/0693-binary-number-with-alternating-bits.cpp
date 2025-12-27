class Solution {
public:
    bool hasAlternatingBits(int n) {
        long res = n ^ (n >> 1);
        return ((res & (res+1)) == 0)?true:false;
    }
};