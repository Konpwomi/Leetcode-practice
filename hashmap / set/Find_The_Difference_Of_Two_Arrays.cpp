class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer;
        answer.push_back(vector<int>());
        answer.push_back(vector<int>());
        set<int> vec1;
        set<int> vec2;

        set<int> answerVec1;
        set<int> answerVec2;

        for (int a : nums1) {
            vec1.insert(a);
        }
        for (int b : nums2) {
            vec2.insert(b);
        }
        for (int i=0; i<nums1.size(); i++) {
            if (vec2.find(nums1[i]) == vec2.end()) {
                answerVec1.insert(nums1[i]);
            }
        }
        for (int j=0; j<nums2.size(); j++) {
            if (vec1.find(nums2[j]) == vec1.end()) {
                answerVec2.insert(nums2[j]);
            }
        }
        for (int c : answerVec1) {
            answer[0].push_back(c);
        }
        for (int d : answerVec2) {
            answer[1].push_back(d);
        }

        return answer; 
    }
};