class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for (int j=0; j<k; j++){
            sum+= nums[j];
        }
        int maxsum=sum;
        for (int i=k; i<nums.size(); i++){
            sum+=nums[i]-nums[i-k];
            if (sum>maxsum) maxsum=sum;
        }
        return double(maxsum)/k;
    }
};