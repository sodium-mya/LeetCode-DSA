class Solution(object):
    def strStr(self, haystack, needle):
        #sodium-mya

        if needle not in haystack:
            return -1
        else:
            return haystack.find(needle)
        
            
        