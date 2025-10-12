class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;

        while(st <= end)
        {
            int mid = st + (end-st)/2;

            if(st == end)//only one array element
            {
                return nums[mid];
            }
            if(mid == 0 && nums[mid] != nums[mid+1])//ans present at start
            {
                return nums[mid];
            }
            if(mid == end && nums[mid] != nums[mid-1])//ans presesnt at end
            {
                return nums[mid];
            }

            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1])//if mid is ans
            {
                return nums[mid];
            }
            //find search space
            if(nums[mid-1] == nums[mid])
            {
                if(mid%2 == 0)
                {
                    end = mid-1;
                }
                else
                {
                    st = mid+1;
                }
            }
            else if(nums[mid] == nums[mid+1])
            {
                if(mid%2 == 0)
                {
                    st = mid+1;
                }
                else
                {
                    end = mid-1;
                }
            }
        }
        return -1; 
    }
};