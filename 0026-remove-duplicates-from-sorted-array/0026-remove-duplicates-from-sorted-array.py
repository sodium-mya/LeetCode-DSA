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
            nums.append(removed_item)
        uniqueint=len(unique)
        '''k=0        
        while True:
            if len(nums)!=lenofnums:
                if k not in nums:
                    for j in range(lenofnums-uniqueint):
                        nums.append(k)
                else:
                    k+=1
            else:
                break'''
        nums[:]=nums[:uniqueint]
        return uniqueint

        
        