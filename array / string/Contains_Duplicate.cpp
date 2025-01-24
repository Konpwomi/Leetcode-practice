class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> distinctNums;
        for (int i = 0; i < nums.size(); i++) {
            if (distinctNums.find(nums[i]) != distinctNums.end()) {
                return true;
            } else {
                distinctNums.insert(nums[i]);
            }
        }
        return false;
    }
};
