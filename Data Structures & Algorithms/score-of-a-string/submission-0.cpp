class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int score = 0;

        for(int i = 0 ; i < n-1; i++){
            char c = s[i];
            char d = s[i+1];
            int a = c;
            int b = d;

            score = score + abs(b-a);

        }
        return score;   
    }
};