class Solution {
public:
    int minimumFlips(int n) {
        long long reversed = 0;
        int temp = n;
        long count = 0;
        int bit_length = 32 - __builtin_clz(n); // __builtin_clz returns leading zeros in a 32-bit int

        for(int i = 0; i < bit_length; i++)
        {
            reversed = (reversed << 1) | (temp&1);
            temp >>= 1;
        }
        int res = reversed ^ n;
        while(res)
        {
            if(res & 1)
            {
                count++;
            }
            res >>= 1;

        }
        return count;
    }
};