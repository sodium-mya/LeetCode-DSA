class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int n=height.size();
        int *left_max=new int[n];
        int *right_max=new int[n];
        int maxi=height[0];
        for (int i=1; i<n-1; i++){
            left_max[i]=maxi;
            if (height[i]>maxi) maxi=height[i];
        }
        maxi=height[n-1];
        for (int i=n-2; i>0; i--){
            right_max[i]=maxi;
            if (height[i]>maxi) maxi=height[i];
        }
        for (int i=1; i<n-1; i++){
            water+=max(0, min(left_max[i], right_max[i]) -height[i]);
        }
        delete[] left_max;
        delete[] right_max;
        return water;
    }
};