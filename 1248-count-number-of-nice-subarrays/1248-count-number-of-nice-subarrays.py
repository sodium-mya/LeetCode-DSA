class Solution(object):
    def numberOfSubarrays(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        r=l=count1=count2=total=0
        size=len(nums)
        while(r<size):
            total+=nums[r]%2
            while(total>k):
                total-=nums[l]%2
                l+=1
            count1+=r-l+1
            r+=1
        l=r=total=0
        while(r<size):
            if k==0:
                break
            total+=nums[r]%2
            while(total>k-1):
                total-=nums[l]%2
                l+=1
            count2+=r-l+1
            r+=1
        return count1-count2

        