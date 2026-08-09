class Solution(object):
    def longestOnes(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        l=0
        r=0
        count=0
        max_len=0
        while r<len(nums):
            if nums[r]==0:
                count+=1
            while count>k:
                if nums[l]==0:
                    count-=1
                l+=1
            if count<=k:
                len_arr=r-l+1
                max_len=max(max_len,len_arr)
            r+=1
        return max_len