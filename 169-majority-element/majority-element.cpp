class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = 0;
        int majority = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (majority == 0) {
                res = nums[i];
            }
            
            majority += nums[i] == res ? 1 : -1;
        }
        
        return res;        
    }
};