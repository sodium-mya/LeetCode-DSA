class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        lenofs=len(s)
        if not s or lenofs==1:
            return s
        result=''
        for i in range (lenofs):
            left, right = i,i
            while left>=0 and right <lenofs and s[left]==s[right]:
                if len(result)<(right-left+1):
                    result=s[left:right+1]
                left-=1
                right+=1
            left,right = i,i+1
            while left>=0 and right <lenofs and s[left]==s[right]:
                if len(result)<(right-left+1):
                    result=s[left:right+1]
                left-=1
                right+=1
        return result
