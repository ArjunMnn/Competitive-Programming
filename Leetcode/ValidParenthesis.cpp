class Solution:
    def isValid(self, s: str) -> bool:
        mapping = {"}":"{", ")":"(", "]":"["}
        stack = []
        for i in s:
            if i in mapping:
                if stack:
                    if mapping[i] != stack[-1]:
                        return False
                    else:
                        stack.pop()
                else:
                    return False
            else:
                stack.append(i)
        if stack:
            return False
        return True