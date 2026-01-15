class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int left = 0, right = plants.size() - 1;
        int curA = capacityA, curB = capacityB;
        int refills = 0;
        while (left < right) {
            if (curA < plants[left]) {
                refills++;
                curA = capacityA;
            }
            curA -= plants[left];
            if (curB < plants[right]) {
                refills++;
                curB = capacityB;
            }
            curB -= plants[right];
            ++left;
            --right;
        }
        if (left == right) {
            if (std::max(curA, curB) < plants[left]) refills++;
        }
        return refills;
    }
};