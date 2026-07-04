class Solution(object):
    def lengthOfLongestSubstring(self, s):
        unique_stack=[]
        unique=''
        #sodium-mya

        for i in s:
            if i not in unique:
                unique+=i
            else:
                unique_stack.append(len(unique))
                start=unique.index(i)+1
                unique=unique[start:]
                unique+=i
                unique_stack.append(len(unique))
        unique_stack.append(len(unique))
        if not unique_stack:
            return len(s)
        else:
            return max(unique_stack)

