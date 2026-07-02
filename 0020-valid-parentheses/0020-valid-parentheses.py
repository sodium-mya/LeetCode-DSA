class Solution(object):
    def isValid(self, s):
        stack=[]
        listopen=['(','{','[']
        listclose=[')','}',']']
        flag=True

        #NamyaB

        for i in range(3):
            
            if s.count(listopen[i]) != s.count(listclose[i]):
                flag = False
                break
            if listopen[i] and listclose[i] in s:
                if s.index(listopen[i]) > s.index(listclose[i]):
                    flag = False
                    break

        for i in s:
            if i in listopen:
                stack.append(i)
            else:
                closebracket_index=listclose.index(i)
                openbracket= listopen[closebracket_index]
                if len(stack)==0:
                    flag=False
                else:
                    if stack[-1]!=openbracket:
                        flag=False
                        break
                    else:
                        if len(stack)!=0: 
                            stack.pop()

        return flag

                

            
