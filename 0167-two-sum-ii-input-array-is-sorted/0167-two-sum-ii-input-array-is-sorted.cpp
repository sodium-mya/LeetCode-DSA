class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1=0, index2=numbers.size()-1;
        int sum=0;
        while (index1 < index2) {
            sum = numbers[index1]+numbers[index2];
            if (sum==target) break;
            else if (sum<target) index1++;
            else index2--;
        }
        vector <int> ans={index1+1,index2+1};
        return ans;
    }
};