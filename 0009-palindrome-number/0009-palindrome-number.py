class Solution(object):
    def isPalindrome(self, x):
        stringofx=str(x)
        lengthofx=len(stringofx)
        start=0
        end=lengthofx - 1

        #NamyaB

        while start <= end:
            if stringofx[start] != stringofx[end]:
                return False
            start +=1
            end -=1

        return True
        