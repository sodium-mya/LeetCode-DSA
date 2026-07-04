class Solution(object):
    def lengthOfLastWord(self, s):        
        removed_spaces=s.strip()
        lenofs=len(removed_spaces)
        #sodium-mya
        if ' 'in removed_spaces:
            for i in range(lenofs-1,-1,-1):
                if removed_spaces[i]==' ':
                    return lenofs-i-1
        else:
            return len(removed_spaces)

        