class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        lenofs=len(s)
        result_list = []
        diff=base=2*numRows-2
        if numRows==1 or numRows>=lenofs:
            return s
        for i in range(numRows):
            j=i
            k=1
            while j<lenofs:
                result_list.append(s[j])
                if (k%2==0 and (base-diff)!=0) or diff==0:
                    j+=(base-diff)
                else:
                    j+=diff
                k+=1
            diff-=2
        return "".join(result_list)