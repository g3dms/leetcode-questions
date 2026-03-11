class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        int carry = 1;
        int newdigit;

        for (int i = static_cast<int>(length) - 1; i >= 0; --i){
            newdigit = digits[i] + carry;
            carry = newdigit / 10;
            newdigit %= 10;
            digits[i] = newdigit;
        }

        if (carry) {
            digits.insert(digits.begin(), 1);
        }

        return digits;

    }
};