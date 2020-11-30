class Solution:
    def calculate(self, s: str) -> int:
        stack = []
        operation = "+"
        num = 0
        for i in range(len(s)):
            if s[i].isdigit():
                num = num*10+int(s[i])
            if not s[i].isdigit() and not s[i].isspace() or i==len(s)-1:
                if operation == '-':
                    stack.append(-num)
                elif operation == '+':
                    stack.append(num)
                elif operation == '*':
                    top = stack.pop()
                    stack.append(top*num)
                elif operation == '/':
                    top = stack.pop()
                    if top<0:
                        stack.append(-(-top//num))
                    else:
                        stack.append(top//num)
                num = 0
                operation = s[i]
            # print(stack)
        res = 0
        while stack:
            res+=stack.pop()
        return res
                                   
        
        