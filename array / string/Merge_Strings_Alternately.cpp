class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer;
        int maxLength = max(word1.size(), word2.size());
        for (int i = 0; i < maxLength; i++) {
            if (i < word1.size()) {
                answer += word1[i];
            }
            if (i < word2.size()) {
                answer += word2[i];
            }
            cout << answer << endl;
        }
        return answer;
    }
};