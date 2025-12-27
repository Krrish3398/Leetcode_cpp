class Solution {
public:
    char findTheDifference(string s, string t) {
        string str = s + t;
        int res = 0;
        for(int i = 0; str[i] != '\0'; i++)
        {
            res = res ^ str[i];
        }
        return res;
    }
};