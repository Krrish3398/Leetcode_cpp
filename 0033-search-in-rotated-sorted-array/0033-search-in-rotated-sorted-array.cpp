class Solution {
public:
    int search(vector<int>& nums, int target) {

        
        int st = 0;
        int end = nums.size() - 1;
        while(st <= end)
        {
            int mid = st + ((end - st)/2);
            if(target == nums[mid])
            {
                return mid;
            }
            /*find which side is sorted*/
            if(nums[st] <= nums[mid])
            {
                //left is sorted
                //check if target lies in left array
                if(nums[st] <= target && target <= nums[mid])
                {
                    end = mid -1;
                }
                //target lies in right side
                else
                {
                    st = mid+1;
                }
            }
            /**right side is sorted*/
            else
            {
                //check if target lies in right array
                if(nums[mid] <= target && target <= nums[end])
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
