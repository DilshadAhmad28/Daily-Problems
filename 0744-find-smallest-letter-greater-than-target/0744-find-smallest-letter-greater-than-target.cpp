class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int left = 0, right = n - 1;

        // Wrap-around case
        if (target >= letters[n - 1] || target < letters[0])
            return letters[0];

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (letters[mid] > target) {
                right = mid; // Search left side for smaller greater letter
            } else {
                left = mid + 1; // Search right side
            }
        }

        return letters[left];
    }
};