class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x>0:
            sign=1
        else:
            sign=-1
        result=int(str(abs(x))[::-1])*sign
        if (-2**31)<= result <= (2**31-1):
            return result
        else:
            return 0
        