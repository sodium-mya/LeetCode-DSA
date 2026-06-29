class Solution(object):
    def longestCommonPrefix(self, strs):
        answer=''
        j=0
        flag=True
        i=0
        #NamyaB
        try:
            while flag==True:
                for i in range(len(strs)-1):
                    if strs[i][j]!= strs[i+1][j]:
                        flag=False
                        #answer+=strs[i][j-1]
                if flag==True:
                    answer+=strs[i][j]
                j+=1      
        except IndexError:
            return answer
        return answer              
                    
    
        
                
        