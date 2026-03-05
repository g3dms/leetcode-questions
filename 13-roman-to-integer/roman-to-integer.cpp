class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        
        for (int index = 0; index < s.length(); index++) {
            if (index < s.length() - 1) {
                if (s[index] == 'I' && s[index+1] == 'V') {
                    sum += 4;
                    index++;
                    continue;
                } else if (s[index] == 'I' && s[index+1] == 'X') {
                    sum += 9;
                    index++;
                    continue;
                } else if (s[index] == 'X' && s[index+1] == 'L') {
                    sum += 40;
                    index++;
                    continue;
                } else if (s[index] == 'X' && s[index+1] == 'C') {
                    sum += 90;
                    index++;
                    continue;
                } else if (s[index] == 'C' && s[index+1] == 'D') {
                    sum += 400;
                    index++;
                    continue;
                } else if (s[index] == 'C' && s[index+1] == 'M') {
                    sum += 900;
                    index++;
                    continue;
                }
            }
            
            if (s[index] == 'I') {
                sum += 1;
            } else if (s[index] == 'V') {
                sum += 5;
            } else if (s[index] == 'X') {
                sum += 10;
            } else if (s[index] == 'L') {
                sum += 50;
            } else if (s[index] == 'C') {
                sum += 100;
            } else if (s[index] == 'D') {
                sum += 500;
            } else if (s[index] == 'M') {
                sum += 1000;
            }
        }
        return sum;
    }
};