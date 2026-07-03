class Solution(object):
    def removeDuplicates(self, nums):
        unique=[]
        lenofnums=len(nums)
        repeated_index=[]

        #sodium_mya
        
        for i in range(lenofnums):
            if nums[i] not in unique:
                unique.append(nums[i])
            else:
                repeated_index.append(i)
            
        for l in repeated_index:
            removed_item=nums.pop(l-repeated_index.index(l))
        uniqueint=len(unique)
        return uniqueint