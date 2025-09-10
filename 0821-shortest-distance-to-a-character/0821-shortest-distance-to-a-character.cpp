class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> res(n, n);  // Initialize with large number

        int prev = -n; // initialize with very small index
        // Pass 1: Left -> Right
        for (int i = 0; i < n; i++) {
            if (s[i] == c) prev = i;
            res[i] = i - prev;
        }

        prev = 2 * n; // initialize with very large index
        // Pass 2: Right -> Left
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == c) prev = i;
            res[i] = min(res[i], prev - i);
        }

        return res;
    }
};
