class Solution {
public:

    void merge(vector<int>& arr, int st, int mid, int end) {
        vector<int> temp;

        int i = st;
        int j = mid + 1;

        // Compare elements from both halves
        while (i <= mid && j <= end) {

            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            }
            else {
                temp.push_back(arr[j]);
                j++;
            }
        }

        // Remaining elements of left half
        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }

        // Remaining elements of right half
        while (j <= end) {
            temp.push_back(arr[j]);
            j++;
        }

        // Copy temp back into original array
        for (int idx = 0; idx < temp.size(); idx++) {
            arr[st + idx] = temp[idx];
        }
    }

    void mergeSort(vector<int>& arr, int st, int end) {

        if (st < end) {

            int mid = st + (end - st) / 2;

            // Left half
            mergeSort(arr, st, mid);

            // Right half
            mergeSort(arr, mid + 1, end);

            // Merge both halves
            merge(arr, st, mid, end);
        }
    }

    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};