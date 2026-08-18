class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False
        for i in s:
            # print(i)
            if i not in t:
                return False

            t = t.replace(i, '', 1)
            # print(t)

        return True
