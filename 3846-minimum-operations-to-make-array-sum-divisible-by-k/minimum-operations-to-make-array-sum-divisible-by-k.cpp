class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum = 0;

        for (int i : nums) {
            sum += i;
        }
        
        int remainder = sum % k;
        
        if (remainder == 0) {
            return 0;
        }
        
        return remainder;
    }
};