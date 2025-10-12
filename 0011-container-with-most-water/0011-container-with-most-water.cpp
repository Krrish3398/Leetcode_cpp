class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = INT_MIN;
        int l,b, area;
        int size = height.size();
        int j = size-1;
        for(int i = 0; i< size;)
        {

            l = min(height[i], height[j]);
            b = j - i;
            area = l*b;   
            maxarea = max(maxarea, area);
            if(height[i] > height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return maxarea;
    }
};