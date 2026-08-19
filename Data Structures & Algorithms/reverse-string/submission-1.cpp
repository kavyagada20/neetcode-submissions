class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();

        // Loop runs until it reaches the middle of the vector
        for (int i = 0; i < n / 2; i++) {
            // 1. Save the left character in a temporary third variable
            char temp = s[i];
            
            // 2. Overwrite the left character with the right character
            s[i] = s[n - 1 - i];
            
            // 3. Move the saved left character to the right position
            s[n - 1 - i] = temp;
        }
    }
};