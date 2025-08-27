class Solution {
public:
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int i = 0, j = 0;
        int vowel = 0, maxVowel = 0;

        while (j < n) {
            if (isVowel(s[j])) {
                vowel++;
            }

            if (j - i + 1 == k) {
                maxVowel = max(maxVowel, vowel);
                if (isVowel(s[i])) {
                    vowel--;
                }
                i++;  
            }
            j++;
        }
        return maxVowel;
    }
};
