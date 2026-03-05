class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
            
        shortest_length = min(len(s) for s in strs)
        output = ""
        
        for i in range(shortest_length):
            current_char = strs[0][i]
            
            for string in strs:
                if string[i] != current_char:
                    return output
            
            output += current_char
            
        return output