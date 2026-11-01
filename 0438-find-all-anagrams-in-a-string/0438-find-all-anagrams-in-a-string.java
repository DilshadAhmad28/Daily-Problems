class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer> ans = new ArrayList<>();

        int n = s.length();
        int m = p.length();

        if (m > n) return ans;

        int[] freq = new int[26];

        // Count frequency of characters in p
        for (int i = 0; i < m; i++) {
            freq[p.charAt(i) - 'a']++;
        }

        // Fixed size sliding window
        for (int i = 0; i < n; i++) {

            // Add new character
            freq[s.charAt(i) - 'a']--;

            // Remove character going out of window
            if (i >= m) {
                freq[s.charAt(i - m) - 'a']++;
            }

            // Check when window size becomes m
            if (i >= m - 1) {

                boolean isAnagram = true;

                for (int j = 0; j < 26; j++) {
                    if (freq[j] != 0) {
                        isAnagram = false;
                        break;
                    }
                }

                if (isAnagram) {
                    ans.add(i - m + 1);
                }
            }
        }
        return ans;
    }

}