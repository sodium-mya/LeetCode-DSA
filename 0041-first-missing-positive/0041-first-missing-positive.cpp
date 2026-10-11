class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        if (n==1) {
            if (nums[0]!=1) return 1;
            else return 2;
        }

        int j=1;
        while (j<nums.size()){
            if (nums[j]==nums[j-1]) nums.erase(nums.begin()+j);
            else j++;
        }
        n=nums.size();
        if (nums[0]>1 || nums[n-1]<0) return 1;
        int i;
        bool flag=0;
        for (i=0; i<n; i++){
            if (!flag && nums[i]>0) {
                flag = true;
                if (nums[i]>1) return 1;
            }
            if (i!=0){
                if ( flag && nums[i-1]>0 && nums[i]!=nums[i-1]+1 ) break;
            }
        }
        return nums[i-1]+1;
    }
};