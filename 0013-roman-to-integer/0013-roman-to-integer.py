class Solution(object):
    def romanToInt(self, s):

        #NamyaB

        dict={'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        lenofs= len(s)
        num=0
        for i in  range(lenofs):
            if i<lenofs-1:
                if dict[s[i]]<dict[s[i+1]]:
                    num-=dict[s[i]]
                else:
                    num+=dict[s[i]]
            else:
                num+=dict[s[i]]
        return num
            
