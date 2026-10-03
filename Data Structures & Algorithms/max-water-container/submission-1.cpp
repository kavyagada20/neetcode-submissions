class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int a=0;int b = n-1;
        int length = 0;
        int height = 0;
        long long area =0;
        long long maxarea =0;
        
        while(a<b){
            length =b-a;
            height= min(heights[a],heights[b]);
            area = length * height;
            maxarea=max(area,maxarea);
            if (heights[a] < heights[b]){
                a++;
            } else {
                b--;
            }
            
        }
        return maxarea;
    }
};
