class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int expSum = 0;
        int count = 1;
        int size = nums.size();

        while(size--)
        {
            expSum ^= count++;
            sum = sum ^ nums[size];
        }
        return expSum ^ sum;
    }
};