class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==0) count1++;
            if(nums[i]==1) count2++;
            if(nums[i]==2) count3++;
        }
        int a=0;
        while(a<n){
            while(count1>0){
                nums[a] = 0;
                count1--;
                a++;
            }
            while(count2>0){
                nums[a] = 1;
                count2--;
                a++;
            }
            while(count3>0){
                nums[a] = 2;
                count3--;
                a++;
            }
        }
    }
};