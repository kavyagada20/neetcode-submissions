class Solution {
public:
    void sortColors(vector<int>& nums) {

        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        int n = nums.size();

        // Count frequencies
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                count0++;
            else if (nums[i] == 1)
                count1++;
            else
                count2++;
        }

        int index = 0;

        // Fill 0s
        while (count0--) {
            nums[index++] = 0;
        }

        // Fill 1s
        while (count1--) {
            nums[index++] = 1;
        }

        // Fill 2s
        while (count2--) {
            nums[index++] = 2;
        }
    }
};