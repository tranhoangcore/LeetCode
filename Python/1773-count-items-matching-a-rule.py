class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        count = 0
        dic = {'type':0, 'color':1, 'name':2}
        index = dic[ruleKey]
        for item in items:
            if item[index] == ruleValue:
                count += 1
        return count

