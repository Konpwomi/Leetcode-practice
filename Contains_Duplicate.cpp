#include <iostream>
#include <vector>
#include <set>

using namespace std;

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

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 1};
    if (solution.containsDuplicate(nums)) {
        cout << "Contains duplicate" << endl;
    } else {
        cout << "No duplicates" << endl;
    }
    return 0;
}
