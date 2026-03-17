class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;
        vector<int> prevRow; // Use array to store current row
        
        for (int i = 0; i < rowIndex+1; i++) {
            vector<int> currentRow(i + 1, 1); // Initialises row with 1s, and each row expands by 1
            
            for (int j = 1; j < i; j++) {
                currentRow[j] = prevRow[j - 1] + prevRow[j]; // Add the sum of the numbers above
            }
            
            result.push_back(currentRow); // Add the row to result
            prevRow = currentRow; // Clean out the row
        }
        
        return result[rowIndex];
    }
};
    