class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> answer;
        for (int i : candies) {
            if (i + extraCandies >= *max_element(candies.begin(), candies.end())) {
                answer.push_back(true);
            } else {
                answer.push_back(false);
            }
        }
        return answer;
    }
};