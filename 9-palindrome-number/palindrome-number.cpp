class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != str[str.length()-i-1]) {
                return false;
            }
        }
        return true;
    }
};