class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCount(26, 0);
        
        // Count frequency of each character in chars
        for (char c : chars)
            charCount[c - 'a']++;
        
        int totalLength = 0;
        
        // Check each word
        for (string word : words) {
            vector<int> tempCount = charCount;
            bool canForm = true;
            
            for (char c : word) {
                if (--tempCount[c - 'a'] < 0) { // not enough of this char
                    canForm = false;
                    break;
                }
            }
            
            if (canForm)
                totalLength += word.size();
        }
        
        return totalLength;
    }
};
