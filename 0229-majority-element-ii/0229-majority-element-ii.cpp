class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        int k=n/3;
        int count=0;

        sort(nums.begin(),nums.end());
        int x=nums[0];

        while(i<n){
            count =0;
            
            if (nums[i]==x){
                while(i<n && nums[i]==x ){
                    count++;
                    i++;
                }
            }
            else i++;
            if (i<n) x=nums[i];
            if (count>k ) {
                nums[j]=nums[i-count];
                j++;
            }
        }
        nums.erase(nums.begin()+j, nums.begin()+n);
        return nums;
    }
};