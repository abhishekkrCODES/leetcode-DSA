
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;

        for (int i = 1; i < s.size(); i++) {
            int diff = s[i] - s[i - 1];
            score += (diff < 0) ? -diff : diff;
        }

        return score;
    }
};
