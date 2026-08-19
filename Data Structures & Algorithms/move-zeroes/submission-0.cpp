class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int positionUpdate = 0;
        // int count1=0;
        for(int i = 0;i<n;i++){
            if (nums[i]!=0){
                // count1++;
                nums[positionUpdate++]=nums[i];
            }
        }
        for(int i=positionUpdate;i<n;i++){
            nums[positionUpdate++]=0;
        }
        
    }
};