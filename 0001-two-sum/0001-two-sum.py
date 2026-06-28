class Solution(object):
    def twoSum(self, nums, target):
        #NamyaB
        for i in range(len(nums)):
            for j in range(len(nums)):
                if i != j:
                    if nums[i]+nums[j]==target:
                        return [i,j]



        

