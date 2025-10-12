class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int curr = 0;
        int prev = 0;

        for(int i = 1; i<n; i++)
        {
            curr = nums[i];
            prev = i-1;
            while(prev >=0 && nums[prev] > curr)
            {
                nums[prev+1] = nums[prev];
                prev--;
            }

            nums[prev+1] = curr;
        }
    }
};