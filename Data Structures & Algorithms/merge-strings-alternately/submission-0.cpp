class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();

        int i = 0;
        int j = 0;
        string str ="";
        while(i<n && j<m){

            str.push_back(word1[i]);
            str.push_back(word2[j]);
            i++;j++;
            
        }

        while(i<n){
            str.push_back(word1[i]);
            i++;
        }
        while(j<m){
            str.push_back(word2[j]);
            j++;
        }

        return str;
    }
};