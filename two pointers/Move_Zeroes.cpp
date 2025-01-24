class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            if (nums[left] != 0) {
                nums.push_back(nums[left]);
            }
            left++;
        }
        left = 0;
        while (left <= right) {
            if (nums[left] == 0) {
                nums.push_back(0);
            }
            left++;
        }
        nums.erase(nums.begin() ,nums.begin() + nums.size()/2);
    }
};