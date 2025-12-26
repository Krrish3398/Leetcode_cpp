class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr(n + 1, 0);
  
           for(int i = 1; i <= n; i++)
           {
                //arr[i] = (arr[i/2] + (i%2));
                arr[i] = arr[i>>1] + (i&1);


           }
        return arr;
    }
};