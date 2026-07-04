class Solution(object):
    def plusOne(self, digits):
        #sodium-mya

        strofdigits=''
        if digits[-1]!=9:
            digits[-1]+=1
            return digits
        else:
            for i in digits:
                strofdigits+=str(i)
            new_strofdigits=int(strofdigits)+1
            new_list=[]
            for j in str(new_strofdigits):
                new_list.append(int(j))
            return new_list

        