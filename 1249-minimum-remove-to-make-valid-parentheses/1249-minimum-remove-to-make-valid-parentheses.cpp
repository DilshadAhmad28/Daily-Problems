class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;               
        unordered_set<int> invalid;   
        // Step 1: Traverse the string
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);  // push index of '('
            }
            else if (s[i] == ')') {
                if (st.empty()) {
                    // no matching '('
                    invalid.insert(i);
                } else {
                    // match found, pop
                    st.pop();
                }
            }
        }

        // Step 2: Any '(' left in stack are invalid
        while (!st.empty()) {
            invalid.insert(st.top());
            st.pop();
        }

        // Step 3: Build result string
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if (invalid.find(i) == invalid.end()) {
                result += s[i];
            }
        }

        return result;
    }
};
