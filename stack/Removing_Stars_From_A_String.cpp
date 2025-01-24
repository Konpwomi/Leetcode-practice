class Solution {
public:
    string removeStars(string s) {
        stack<char> star;
        string answer;
        for (int i=0; i<s.length(); i++) {
            star.push(s[i]);
            if (s[i] == '*') {
                star.pop();
                star.pop();
            }
        }
        while (!star.empty()) {
            answer += star.top();
            star.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};