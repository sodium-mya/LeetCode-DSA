class Solution(object):
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        s.sort()
        g.sort()
        flag=True
        i=j=0

        while (i<len(g))and(j<len(s)):
            if s[j]>=g[i]:
                j+=1
                i+=1
            else:
                j+=1
        return i   
            
            

        
        