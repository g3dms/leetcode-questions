class Solution {
public:
    int mySqrt(int x) {
        if (x<2) {
            return x;
        }

        int left = 0;
        int right = x/2;

        while (left<=right){
            int mid = left+(right-left)/2;
            long long a = (long long) mid * mid;

            if (a == x) {
                return mid;
            } else if (a > x) {
                right = mid - 1;
            } else if (a < x) {
                left = mid + 1;
            }
        }

        return right;
    }
};