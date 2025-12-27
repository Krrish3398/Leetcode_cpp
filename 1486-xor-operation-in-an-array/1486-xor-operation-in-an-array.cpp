class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> arr(n, 0);
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            arr[i] = start + 2 * i;
            res ^= arr[i];
        }
        return res;
    }
};