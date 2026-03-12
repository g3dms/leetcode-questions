class Solution {
public:
    string addBinary(string a, string b) {

        int i = a.size() - 1;
        int j = b.size() - 1;
        string res;

        for (int carry = 0; (i >= 0) || (j >= 0) || (carry == 1); --i, --j) {

            if (i >= 0) {
                carry += int(a[i] - '0');
                }
            if (j >= 0) {
                carry += int(b[j] - '0');
                }
            res.push_back((carry % 2) + '0');
            carry /= 2;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};