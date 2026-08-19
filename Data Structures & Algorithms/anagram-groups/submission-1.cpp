class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(string s : strs) {

            int count[26] = {0};

            // Count frequency of each character
            for(char c : s) {
                count[c - 'a']++;
            }

            // Create unique key
            string key = "";

            for(int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "#";
            }

            // Add string to its anagram group
            mp[key].push_back(s);
        }

        // Store all groups in answer
        vector<vector<string>> ans;

        for(auto& pair : mp) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};