class Solution {
public:
    int lengthOfLastWord(string s) {

        string lastword;
        string currentword;

        if (s.length() < 1) {
            return -1;
        }

        // Iterate through the input string
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                currentword += s[i];
            } else {
                if (!currentword.empty()) {   // If the character is a space + there's a word
                    lastword = currentword;
                    currentword = ""; 
                }
            }
        }

        if (!currentword.empty()) {   
            lastword = currentword;
        }

        return lastword.length();
    }
};