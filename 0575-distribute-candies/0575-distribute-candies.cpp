class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int size = candyType.size();
        unordered_set<int> seen;
        for(int i = 0; i < size; i++){
            seen.insert(candyType[i]);
            if(seen.size() >= size/2) return size/2;
        }
        return seen.size();
    }
};