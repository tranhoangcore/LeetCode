class Solution:
    def isValid(self, s: str) -> bool:
        tmp = []
        dict = {")" : "(", "}" : "{", "]" : "["}
        for c in s:
            if c in dict.values():
                tmp.append(c)
            elif c in dict.keys():
                if tmp == [] or dict[c] != tmp.pop():
                    return False
            else:
                return False
        return tmp == []
