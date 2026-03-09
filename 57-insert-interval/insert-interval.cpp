class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // 'Appends' newInterval into intervals
        intervals.push_back(newInterval);

        // Sorts intervals by intervals[0] in ascending order
        sort(intervals.begin(), intervals.end());

        // Initialises newList for merging
        vector<vector<int>> newList;

        // 'Appends' the beginning of intervals into newList
        newList.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); ++i) {
            
            // Checks if the end boundary of the latest item is larger or equal to the beginning of the newest interval to add, which implies an overlap
            if (newList.back()[1] >= intervals[i][0]) {

                // Merges by getting the end boundary of both newList and intervals, finds the highest and sets it as the new end boundary, so the further end is covered
                newList.back()[1] = max(newList.back()[1], intervals[i][1]);

            } else {
                
                // Else, add the whole interval as an item into newList
                newList.push_back(intervals[i]);
            }
        }

        return newList;        
    }
};