class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0, res;
        while((x != 0) || (y != 0))
        {
            res = (x & 1) ^ (y & 1);
            x >>= 1;
            y >>= 1;
            if(res == 1)
            {
                count++;
            }
        }
        return count;
    }
};