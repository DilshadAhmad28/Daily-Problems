class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char, int> mp;
        for (char ch : s){ 
            mp[ch]++;
        }
        vector<int> count(10, 0);
        // Unique letters for certain digits
        count[0] = mp['z']; // zero
        count[2] = mp['w']; // two
        count[4] = mp['u']; // four
        count[6] = mp['x']; // six
        count[8] = mp['g']; // eight

        // Derived digits after removing unique ones
        count[3] = mp['h'] - count[8]; 
        count[5] = mp['f'] - count[4]; 
        count[7] = mp['s'] - count[6]; 
        count[1] = mp['o'] - count[0] - count[2] - count[4]; 
        count[9] = mp['i'] - count[5] - count[6] - count[8]; 

        // Build the result in ascending order
        string ans = "";
        for (int i = 0; i <= 9; i++) {
            ans.append(count[i], '0' + i);
        }
        return ans;
    }
};
