class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            // Swap characters in place
            std::swap(s[left], s[right]);
            
            // Move pointers closer together
            left++;
            right--;
        }
    }
};