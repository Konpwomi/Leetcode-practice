class Solution {
public:
    string reverseVowels(string s) {
        stack<char> vowels;
        for (int i=0; i<s.length(); i++) {
            if (s[i] == 'a' ||
            s[i] == 'e' ||
            s[i] == 'i' ||
            s[i] == 'o' ||
            s[i] == 'u' ||
            s[i] == 'A' ||
            s[i] == 'E' ||
            s[i] == 'I' ||
            s[i] == 'O' ||
            s[i] == 'U' ) {
                vowels.push(s[i]);
                s[i] = '+';
            }
        }
        int j = 0;
        while (!vowels.empty()) {
            if (s[j] == '+') {
                s[j] = vowels.top();
                vowels.pop();
            }
            j++;
        }
        return s;
    }
};