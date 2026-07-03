class Solution(object):
    def removeDuplicates(self, nums):
        unique=[]
        lenofnums=len(nums)
        repeated_index=[]

        #sodium_mya
        i=0
        while True:
            try:
                if nums[i] not in unique:
                    unique.append(nums[i])
                    i+=1
                else:
                    nums.pop(i)
            except IndexError:
                break
            
        '''for l in repeated_index:
            nums.pop(l-repeated_index.index(l))'''
        uniqueint=len(unique)
        return uniqueint