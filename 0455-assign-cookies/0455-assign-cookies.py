class Solution(object):
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        cnt=0
        s.sort()
        g.sort()
        flag=True
        i=j=0

        while (i<len(g))and(j<len(s)):
            if s[j]>=g[i]:
                cnt+=1
                s.pop(j)
                i+=1
            else:
                j+=1
        return cnt   
            
            

        
        